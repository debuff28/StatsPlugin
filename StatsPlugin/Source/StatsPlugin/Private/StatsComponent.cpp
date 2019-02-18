// Fill out your copyright notice in the Description page of Project Settings.

#include "StatsComponent.h"
#include "Kismet/GameplayStatics.h" 
#include "Engine/GameEngine.h"
#include "UnrealNetwork.h"
#include "GameFramework/Actor.h"
#include "Stats_Effect_Base.h"

// Sets default values for this component's properties
UStatsComponent::UStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bReplicates = true;
	// ...
	
}

void UStatsComponent::Client_TestReplicateStats_Implementation(const TArray<FReplicateTmapSupportStruct>& ArrayOfStats)
{
	for (FReplicateTmapSupportStruct supstruct : ArrayOfStats)
	{
		Stats.Find(supstruct.tag)->StatBaseValue = supstruct.StatBaseValue;
		Stats.Find(supstruct.tag)->StatCurrentValue = supstruct.StatCurrentValue;
	}
}

void UStatsComponent::Client_onStatMinValue_Implementation(const FGameplayTag Tag)
{
	onStatMinValue.Broadcast(Tag);
}

bool UStatsComponent::Client_onStatMinValue_Validate(const FGameplayTag Tag)
{
	return true;
}
void UStatsComponent::Server_SetName_Implementation(const FName NewName)
{
	Name = NewName;
}
bool UStatsComponent::Server_SetName_Validate(const FName NewName)
{
	return true;
}
void UStatsComponent::SetTeam(const FName NewTeam)
{
	TeamID = NewTeam;
}
// Called when the game starts
void UStatsComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (GetNetMode() != NM_Client)
	{
		InitStats();
		FTimerHandle TimerHandle_Test;
		FTimerDynamicDelegate eventTest;
		eventTest.BindDynamic(this, &UStatsComponent::ReplicateTimer);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_Test, eventTest, ReplicateStatsPeriod, true);
	}
}

void UStatsComponent::ReplicateTimer()
{
	
	TArray<FReplicateTmapSupportStruct> suparr;
	for (TPair<FGameplayTag, FStatsDatabase>& Stat : Stats)
	{
		Stat.Value.Regen(ReplicateStatsPeriod);
		if ((FMath::Clamp(Stat.Value.StatCurrentValue + (Stat.Value.StatRegenCurrentValue*ReplicateStatsPeriod), Stat.Value.StatMinCurrentValue, Stat.Value.StatMaxCurrentValue) == Stat.Value.StatMinCurrentValue) && (Stat.Value.StatCurrentValue != Stat.Value.StatMinCurrentValue) && (onStatMinValue.IsBound()))
		{
			Client_onStatMinValue(Stat.Key);
		}
		

		FReplicateTmapSupportStruct temp;
		temp.tag = Stat.Key;
		temp.StatBaseValue = Stat.Value.StatBaseValue;
		temp.StatCurrentValue = Stat.Value.StatCurrentValue;
		suparr.Add(temp);
	}

	
	
	Client_TestReplicateStats(suparr);
}
// Called every frame
void UStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	


	TArray<AActor*> ChildActors;
	TMap<FGameplayTag, FStatsEffects> TempEffects;
	this->GetOwner()->GetAttachedActors(ChildActors);
	

	for (AActor* ChildActor : ChildActors)
	{
		AStats_Effect_Base* EffectBase = Cast<AStats_Effect_Base>(ChildActor);
		if (EffectBase)
		{
			//if (GEngine)
			//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
			//AddEffect(EffectBase, TempEffects);




			bool found = false;
			for (TPair<FGameplayTag, FStatsEffects>& TempEffect : TempEffects)
			{
				if (TempEffect.Key == EffectBase->EffectTag)
				{
					found = true;
					if (TempEffect.Value.TimeToEnd < EffectBase->TimeToFinish)
					{
						TempEffect.Value.TimeToEnd = EffectBase->TimeToFinish;
					}
					TempEffect.Value.CurrentEffectsActors.Add(EffectBase);
				}
			}
			if (!found)
			{
				FStatsEffects TempEffect;
				TempEffect.Name = EffectBase->EffectName;
				TempEffect.TimeToEnd = EffectBase->TimeToFinish;
				TempEffect.CurrentEffectsActors.Add(EffectBase);
				TempEffects.Add(EffectBase->EffectTag, TempEffect);
			}




		}
	}
	Effects = TempEffects;


}

void UStatsComponent::InitStats()
{
	for (TPair<FGameplayTag, FStatsDatabase>& Stat : Stats)
	{
		Stat.Value.InitStat();
	}
}

void UStatsComponent::GetStatByTag(FGameplayTag Stat, bool& found, FStatsDatabase& StatsValues)
{
	if (Stats.Contains(Stat))
	{
		found = true;
		StatsValues = Stats.FindRef(Stat);
	}
	else
	{
		found = false;
	}
}

void UStatsComponent::GetStatSelectedValueByTag(FGameplayTag Stat, EStatValueType ValueToReturn, bool& found, float& StatsValues)
{
	if (Stats.Contains(Stat))
	{
		found = true;
		StatsValues = Stats.FindRef(Stat).GetValue(ValueToReturn);
	}
	else
	{
		found = false;
	}
}

void UStatsComponent::GetEffectsByInfoTag(FGameplayTag InfoTag, bool & found, TArray<AStats_Effect_Base*>& FoundedEffects)
{
	found = false;
	for (TPair<FGameplayTag, FStatsEffects>& Effect : Effects)
	{
		for (AStats_Effect_Base* StatsEffect : Effect.Value.CurrentEffectsActors)
		{
			if (StatsEffect->EffectInfoTag.Contains(InfoTag))
			{
				found = true;
				FoundedEffects.Add(StatsEffect);
			}
		}
	}
}

void UStatsComponent::ModifyStat(AActor* initiator, FGameplayTag Stat, float inputValue, EStatChangeType ChangeType, EStatValueType ValueType, TArray<FStatsAffectingParameters> AffectingStats, bool& Modify, float& deltaChangeValue, float& ResultValue, FGameplayTag& ChangedStat, bool clear, TArray<FGameplayTag> AdditionTags)
{
	
	if (Stats.Contains(Stat))
	{
		Modify = true;
		//get currentValue of stats
		float StatsCurrentValue = Stats.FindRef(Stat).GetValue(ValueType);
		FGameplayTag StatForMod = Stat;
		if (clear)
		{
			float StatsCurrentValueTemp = StatsCurrentValue;
			switch (ChangeType)
			{
			case EStatChangeType::SCT_Add:
				StatsCurrentValue = StatsCurrentValue + inputValue;
				break;
			case EStatChangeType::SCT_Sub:
				StatsCurrentValue = StatsCurrentValue - inputValue;
				break;
			case EStatChangeType::SCT_Multiply:
				StatsCurrentValue = StatsCurrentValue * inputValue;
				break;
			case EStatChangeType::SCT_Divide:
				StatsCurrentValue = StatsCurrentValue / inputValue;
				break;
			case EStatChangeType::SCT_AddPercent:
				StatsCurrentValue = StatsCurrentValue + ((StatsCurrentValue / 100) * inputValue);
				break;
			case EStatChangeType::SCT_SubtractPercent:
				StatsCurrentValue = StatsCurrentValue - ((StatsCurrentValue / 100) * inputValue);
				break;
			case EStatChangeType::SCT_SetValue:
				StatsCurrentValue = inputValue;
				break;
			default:
				break;
			}
			
			if (StatsCurrentValue <= Stats.FindRef(StatForMod).GetValue(EStatValueType::SVT_MinCurrent))
			{
				if (onStatMinValue.IsBound())
				{
					onStatMinValue.Broadcast(StatForMod);
					if (Stats.FindRef(Stat).StopRegenOnMinValue)
					{
						SetRegenEnable(StatForMod, false);
					}
				}
			}

			ResultValue = StatsCurrentValue;
			SetStatValue(StatForMod, ValueType, StatsCurrentValue);
			deltaChangeValue =  Stats.FindRef(Stat).GetValue(ValueType) - StatsCurrentValueTemp;
			if (OnStatChange.IsBound())
				OnStatChange.Broadcast(StatForMod, AdditionTags, deltaChangeValue);
			

		}
		else
		{
			

			float affectedInputValue = inputValue;
			//Применяем модификаторы содержащиеся во входящем изменении
			if (initiator)
			{
				UActorComponent* Component = initiator->GetComponentByClass(UStatsComponent::StaticClass());
				if (Component)
				{
					UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
					if (AffectingStats.Num() > 0)
					{
						for (FStatsAffectingParameters AffectingStat : AffectingStats)
						{
							if (StatComponent->Stats.Contains(AffectingStat.affectingStatTag))
							{

								float mod = StatComponent->Stats.FindRef(AffectingStat.affectingStatTag).GetValue(AffectingStat.affectingValue)*AffectingStat.affectingMultiplier;

								if (mod != 0) {
									switch (AffectingStat.affectingType)
									{
									case EStatChangeType::SCT_Add:
										affectedInputValue = affectedInputValue + mod;
										break;
									case EStatChangeType::SCT_Sub:
										affectedInputValue = affectedInputValue - mod;
										break;
									case EStatChangeType::SCT_Multiply:
										affectedInputValue = affectedInputValue * mod;
										break;
									case EStatChangeType::SCT_Divide:
										affectedInputValue = affectedInputValue / mod;
										break;
									case EStatChangeType::SCT_AddPercent:
										affectedInputValue = affectedInputValue + ((affectedInputValue / 100) * mod);
										break;
									case EStatChangeType::SCT_SubtractPercent:
										affectedInputValue = affectedInputValue - ((affectedInputValue / 100) * mod);
										break;
									case EStatChangeType::SCT_SetValue:
										affectedInputValue = affectedInputValue;
										break;
									default:
										break;
									}
								}
							}
						}
					}
				}
			}


			//применяем внутренние модификаторы входящего изменения
			for (FStatInputModifyAffects InputAffect : InputModifiers)
			{
				if (InputAffect.InputModifyTag == Stat)
				{
					for (FStatsAffectingParameters AffectingStat : InputAffect.Affects)
					{
						if (Stats.Contains(AffectingStat.affectingStatTag))
						{
							float mod = Stats.FindRef(AffectingStat.affectingStatTag).GetValue(AffectingStat.affectingValue)*AffectingStat.affectingMultiplier;
							if (mod != 0) {
								switch (AffectingStat.affectingType)
								{
								case EStatChangeType::SCT_Add:
									affectedInputValue = affectedInputValue + mod;
									break;
								case EStatChangeType::SCT_Sub:
									affectedInputValue = affectedInputValue - mod;
									break;
								case EStatChangeType::SCT_Multiply:
									affectedInputValue = affectedInputValue * mod;
									break;
								case EStatChangeType::SCT_Divide:
									affectedInputValue = affectedInputValue / mod;
									break;
								case EStatChangeType::SCT_AddPercent:
									affectedInputValue = affectedInputValue + ((affectedInputValue / 100) * mod);
									break;
								case EStatChangeType::SCT_SubtractPercent:
									affectedInputValue = affectedInputValue - ((affectedInputValue / 100) * mod);
									break;
								default:
									break;
								}
							}
						}
					}
				}
			}

			//ретаргетинг
			
			float affectFinalValue = affectedInputValue;
			for (FInputModifyRetargeting Retarget : InputRetargets)
			{
				if (Stats.FindRef(Retarget.RetargetModifyTag).GetValue(ValueType) > Stats.FindRef(Retarget.RetargetModifyTag).GetValue(EStatValueType::SVT_MinCurrent)
					&&
					Retarget.RetargetValues.Contains(ValueType))
				{
					affectFinalValue = affectedInputValue * Retarget.RetargetModifyMultiplier;
					StatForMod = Retarget.RetargetModifyTag;
					StatsCurrentValue = Stats.FindRef(Retarget.RetargetModifyTag).GetValue(ValueType);
					ChangedStat = Retarget.RetargetModifyTag;
				}

			}
			float StatsCurrentValueTemp = StatsCurrentValue;

			//calf final value
			switch (ChangeType)
			{
			case EStatChangeType::SCT_Add:
				StatsCurrentValue = StatsCurrentValue + affectFinalValue;
				break;
			case EStatChangeType::SCT_Sub:
				StatsCurrentValue = StatsCurrentValue - affectFinalValue;
				break;
			case EStatChangeType::SCT_Multiply:
				StatsCurrentValue = StatsCurrentValue * affectFinalValue;
				break;
			case EStatChangeType::SCT_Divide:
				StatsCurrentValue = StatsCurrentValue / affectFinalValue;
				break;
			case EStatChangeType::SCT_AddPercent:
				StatsCurrentValue = StatsCurrentValue + ((StatsCurrentValue / 100) * affectFinalValue);
				break;
			case EStatChangeType::SCT_SubtractPercent:
				StatsCurrentValue = StatsCurrentValue - ((StatsCurrentValue / 100) * affectFinalValue);
				break;
			case EStatChangeType::SCT_SetValue:
				StatsCurrentValue = affectFinalValue;
				break;
			default:
				break;
			}
			
			if (StatsCurrentValue <= Stats.FindRef(StatForMod).GetValue(EStatValueType::SVT_MinCurrent))
			{
				if (onStatMinValue.IsBound())
				{
					onStatMinValue.Broadcast(StatForMod);
					if (Stats.FindRef(Stat).StopRegenOnMinValue)
					{
						SetRegenEnable(StatForMod,false);
					}
				}
			}


			ResultValue = StatsCurrentValue;

			SetStatValue(StatForMod, ValueType, StatsCurrentValue);
			deltaChangeValue = Stats.FindRef(Stat).GetValue(ValueType) - StatsCurrentValueTemp;
			if (OnStatChange.IsBound())
				OnStatChange.Broadcast(StatForMod, AdditionTags, deltaChangeValue);
			
		}
	}
	else
	{

	}
}

void UStatsComponent::SetRegenEnable(FGameplayTag Stat, bool NewValue)
{
	for (TPair<FGameplayTag, FStatsDatabase>& TempStat : Stats)
	{
		if (TempStat.Key == Stat)
		{
			TempStat.Value.setRegenIsStoped(NewValue);

		}
	}
}


void UStatsComponent::SetStatValue(FGameplayTag Stat, EStatValueType ValueType, float NewValue)
{
	for (TPair<FGameplayTag, FStatsDatabase>& TempStat : Stats)
	{
		if (TempStat.Key == Stat)
		{
			TempStat.Value.SetValue(ValueType, NewValue);
			if(TempStat.Value.regenRule == ERegenRule::RR_PauseRegenAfterModify)
				TempStat.Value.PauseTime = FDateTime::Now();
		}
	}
}

void UStatsComponent::AddEffect(AStats_Effect_Base* EffectBase, TMap<FGameplayTag, FStatsEffects> EffectsTemp)
{
	bool found = false;
	for (TPair<FGameplayTag, FStatsEffects>& TempEffect : EffectsTemp)
	{
		if (TempEffect.Key == EffectBase->EffectTag)
		{
			found = true;
			if (TempEffect.Value.TimeToEnd < EffectBase->TimeToFinish)
			{
				TempEffect.Value.TimeToEnd = EffectBase->TimeToFinish;
			}
			TempEffect.Value.CurrentEffectsActors.Add(EffectBase);
		}
	}
	if (!found)
	{
		FStatsEffects TempEffect;
		TempEffect.Name = EffectBase->EffectName;
		TempEffect.TimeToEnd = EffectBase->TimeToFinish;
		TempEffect.CurrentEffectsActors.Add(EffectBase);
		EffectsTemp.Add(EffectBase->EffectTag, TempEffect);
	}

}

void UStatsComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	DOREPLIFETIME(UStatsComponent, Name);
	DOREPLIFETIME(UStatsComponent, TeamID);
}