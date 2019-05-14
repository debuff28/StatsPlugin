// Fill out your copyright notice in the Description page of Project Settings.

#include "StatsComponent.h"
#include "Kismet/GameplayStatics.h" 
#include "Engine/Texture2D.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Actor.h"
#include "Stats_Effect_Base.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"


// Sets default values for this component's properties
UStatsComponent::UStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bReplicates = true;
	// ...
	
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
		//создаем объекты статов
		for (TPair<FGameplayTag, FStatsDatabase>& Stat : Stats)
		{
			AActor* pActor = GetOwner();
			//UStatComponent* NewStatComponent = (UStatComponent*)NewObject<UActorComponent>(pActor, UStatComponent::StaticClass());

			//AStatActor * NewStatComponent = 
			//GetOwner()->GetWorld()
			FVector Location(0.0f, 0.0f, 0.0f);
			FRotator Rotation(0.0f, 0.0f, 0.0f);
			FActorSpawnParameters SpawnInfo;
			SpawnInfo.Owner = GetOwner();
			SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			AActor * NewStatactor = GetOwner()->GetWorld()->SpawnActor(AStatActor::StaticClass(), &Location, &Rotation, FActorSpawnParameters::FActorSpawnParameters(SpawnInfo));
			AStatActor* NewStatComponent = Cast< AStatActor>(NewStatactor);
			if (NewStatComponent != nullptr)
			{
				//NewStatComponent->RegisterComponent();
				NewStatComponent->SetReplicates(true);
				NewStatComponent->StatTag = Stat.Key.GetTagName();
				NewStatComponent->StatBaseValue = Stat.Value.StatBaseValue;
				NewStatComponent->StatCurrentValue = Stat.Value.StatCurrentValue;
				NewStatComponent->StatRegenBaseValue = Stat.Value.StatRegenBaseValue;
				NewStatComponent->StatRegenCurrentValue = Stat.Value.StatRegenCurrentValue;
				NewStatComponent->StatMaxBaseValue = Stat.Value.StatMaxBaseValue;
				NewStatComponent->StatMaxCurrentValue = Stat.Value.StatMaxCurrentValue;
				NewStatComponent->StatMinBaseValue = Stat.Value.StatMinBaseValue;
				NewStatComponent->StatMinCurrentValue = Stat.Value.StatMinCurrentValue;
				NewStatComponent->regenRule = Stat.Value.regenRule;
				NewStatComponent->RegenPauseLenght = Stat.Value.RegenPauseLenght;
				NewStatComponent->StopRegenOnMinValue = Stat.Value.StopRegenOnMinValue;
				NewStatComponent->PauseTime= Stat.Value.PauseTime;
				NewStatComponent->RegenIsStoped = Stat.Value.RegenIsStoped;
				NewStatComponent->ValueWasChanged = Stat.Value.ValueWasChanged;
				NewStatComponent->InitStat();
				NewStatComponent->onCurrentStatMinValue.AddDynamic(this, &UStatsComponent::OnSomeStatMinValue);
				statComponents.Add(NewStatComponent);
			}
		}

	}

	
}



void UStatsComponent::OnSomeStatMinValue(FGameplayTag tag)
{
	Client_onStatMinValue(tag);
}


bool UStatsComponent::Client_onStatMinValue_Validate(const FGameplayTag Tag)
{
	return true;
}

void UStatsComponent::Client_onStatMinValue_Implementation(const FGameplayTag Tag)
{
	if (onStatMinValue.IsBound())
	{
		onStatMinValue.Broadcast(Tag);
	}
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
				TempEffect.LiveTime = EffectBase->LiveTime;
				TempEffect.InfoTags = FGameplayTagContainer::CreateFromArray(EffectBase->EffectInfoTag);
				TempEffect.EffectIcon = EffectBase->EffectIcon;
				TempEffects.Add(EffectBase->EffectTag, TempEffect);
			}




		}
	}
	Effects = TempEffects;


}

void UStatsComponent::InitStats()
{
	for (AStatActor* Comp : statComponents)
	{
		Comp->InitStat();
	}
	
}

void UStatsComponent::GetStatByTag(FGameplayTag Stat, bool& found, FStatsDatabase& StatsValues)
{
	for (AStatActor* Comp : statComponents)
	{
		if (Comp->StatTag == Stat.GetTagName())
		{
			found = true;
			StatsValues.StatBaseValue = Comp->StatBaseValue;
			StatsValues.StatCurrentValue = Comp->StatCurrentValue;
			StatsValues.StatRegenBaseValue = Comp->StatRegenBaseValue;
			StatsValues.StatRegenCurrentValue = Comp->StatRegenCurrentValue;
			StatsValues.StatMaxBaseValue = Comp->StatMaxBaseValue;
			StatsValues.StatMaxCurrentValue = Comp->StatMaxCurrentValue;
			StatsValues.StatMinBaseValue = Comp->StatMinBaseValue;
			StatsValues.StatMinCurrentValue = Comp->StatMinCurrentValue;
			StatsValues.regenRule = Comp->regenRule;
			StatsValues.RegenPauseLenght = Comp->RegenPauseLenght;
			StatsValues.StopRegenOnMinValue = Comp->StopRegenOnMinValue;
			StatsValues.PauseTime = Comp->PauseTime;
			StatsValues.RegenIsStoped = Comp->RegenIsStoped;
			StatsValues.ValueWasChanged = Comp->ValueWasChanged;
			break;

		}
		else
		{
			found = false;
		}
	}
}

void UStatsComponent::GetStatSelectedValueByTag(FGameplayTag Stat, EStatValueType ValueToReturn, bool& found, float& StatsValues)
{
	if (statComponents.Num() > 0)
	{
		for (AStatActor* Comp : statComponents)
		{
			if (Comp)
			{
				if (Comp->StatTag == Stat.GetTagName())
				{

					found = true;
					StatsValues = Comp->GetValue(ValueToReturn);
					break;

				}
				else
				{
					found = false;
				}
			}
			else
			{
				found = false;
				StatsValues = 0.0f;
			}
		}
	}
	else
	{
		found = false;
		StatsValues = 0.0f;
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

void UStatsComponent::ModifyStat(AActor* initiator, FGameplayTag Stat, float inputValue, EStatChangeType ChangeType, EStatValueType ValueType, FVector FromLocation, bool& Modify, float& deltaChangeValue, float& ResultValue, FGameplayTag& ChangedStat, bool clear, TArray<FGameplayTag> AdditionTags)
{
	float currentInput = inputValue;
	AStatActor* ModStats = nullptr;
	for (AStatActor* Comp : statComponents)
	{
		if (Comp->StatTag == Stat.GetTagName())
		{
			ModStats = Comp;
			break;

		}
	}

	FGameplayTag StatForMod = Stat;

	if (ModStats!=nullptr)
	{
		float StatsCurrentValue = ModStats->GetValue(ValueType);

		


		Modify = true;
		//get currentValue of stats
		
		if (clear)
		{
			float StatsCurrentValueTemp = StatsCurrentValue;
			switch (ChangeType)
			{
			case EStatChangeType::SCT_Add:
				StatsCurrentValue = StatsCurrentValue + currentInput;
				break;
			case EStatChangeType::SCT_Sub:
				StatsCurrentValue = StatsCurrentValue - currentInput;
				break;
			case EStatChangeType::SCT_Multiply:
				StatsCurrentValue = StatsCurrentValue * currentInput;
				break;
			case EStatChangeType::SCT_Divide:
				StatsCurrentValue = StatsCurrentValue / currentInput;
				break;
			case EStatChangeType::SCT_AddPercent:
				StatsCurrentValue = StatsCurrentValue + ((StatsCurrentValue / 100) * currentInput);
				break;
			case EStatChangeType::SCT_SubtractPercent:
				StatsCurrentValue = StatsCurrentValue - ((StatsCurrentValue / 100) * currentInput);
				break;
			case EStatChangeType::SCT_SetValue:
				StatsCurrentValue = currentInput;
				break;
			default:
				break;
			}
			
			if (StatsCurrentValue <= ModStats->GetValue(EStatValueType::SVT_MinCurrent))
			{
				if (ModStats->onCurrentStatMinValue.IsBound())
				{
					ModStats->onCurrentStatMinValue.Broadcast(StatForMod);
					if (ModStats->StopRegenOnMinValue)
					{
						SetRegenEnable(StatForMod, false);
					}
				}
			}

			ResultValue = StatsCurrentValue;
			SetStatValue(StatForMod, ValueType, StatsCurrentValue);
			deltaChangeValue = ModStats->GetValue(ValueType) - StatsCurrentValueTemp;
			if (OnStatChange.IsBound())
			{
				FGameplayTagContainer Container;
				if (AdditionTags.Num() > 0)
				{
					Container = FGameplayTagContainer::CreateFromArray(AdditionTags);
				}
				OnStatChange.Broadcast(initiator, GetOwner(), StatForMod, Container, FromLocation, deltaChangeValue, ModStats->GetValue(ValueType));
				
			}
			if (initiator)
			{
				if (initiator != GetOwner())
				{
					if (OnTargetStatChange.IsBound())
					{
						FGameplayTagContainer Container;
						if (AdditionTags.Num() > 0)
						{
							Container = FGameplayTagContainer::CreateFromArray(AdditionTags);
						}
						OnTargetStatChange.Broadcast(initiator, GetOwner(),StatForMod, Container, FromLocation, deltaChangeValue, Stats.FindRef(Stat).GetValue(ValueType));

					}
				}
			}
			//ReplicateTimer();

		}
		else
		{
			
			//Применяем модификаторы содержащиеся во входящем изменении

			if (DirrectionModifers.Num() > 0)
			{
				if (FromLocation != GetOwner()->GetActorLocation())
				{
					bool RuleAplicated = false;
					FVector InversedLocation = GetOwner()->GetActorTransform().InverseTransformPosition(FromLocation);
					float zRotation = UKismetMathLibrary::FindLookAtRotation(FVector(0, 0, 0), InversedLocation).Yaw + 180.0f;
					for (FDirectionRule DirrectionModifer : DirrectionModifers)
					{
						if (!RuleAplicated)
						{
							if (FGameplayTagContainer::CreateFromArray(AdditionTags).HasAnyExact(FGameplayTagContainer::CreateFromArray(DirrectionModifer.ModTags)))
							{
								switch (DirrectionModifer.Direction)
								{
								case EDirrection::D_Forward:
									if (UKismetMathLibrary::InRange_FloatFloat(zRotation, (180 - DirrectionModifer.Angle / 2), (180 + DirrectionModifer.Angle / 2), true, true))
									{
										currentInput = currentInput * DirrectionModifer.ModifyMultiplier;
										RuleAplicated = true;
									}
									break;
								case EDirrection::D_Back:
									if (UKismetMathLibrary::InRange_FloatFloat(zRotation, 0, DirrectionModifer.Angle / 2, true, true) || UKismetMathLibrary::InRange_FloatFloat(zRotation, (360 - DirrectionModifer.Angle / 2), 360, true, true))
									{
										currentInput = currentInput * DirrectionModifer.ModifyMultiplier;
										RuleAplicated = true;
									}
									break;
								case EDirrection::D_Left:
									if (UKismetMathLibrary::InRange_FloatFloat(zRotation, (270 - DirrectionModifer.Angle / 2), (270 + DirrectionModifer.Angle / 2), true, true))
									{
										currentInput = currentInput * DirrectionModifer.ModifyMultiplier;
										RuleAplicated = true;
									}
									break;
								case EDirrection::D_Right:
									if (UKismetMathLibrary::InRange_FloatFloat(zRotation, (90 - DirrectionModifer.Angle / 2), (90 + DirrectionModifer.Angle / 2), true, true))
									{
										currentInput = currentInput * DirrectionModifer.ModifyMultiplier;
										RuleAplicated = true;
									}
									break;
								default:
									break;
								}
							}
						}
					}
				}
			}

			float affectedInputValue = currentInput;

			//применяем внутренние модификаторы входящего изменения
			for (FStatInputModifyAffects InputAffect : InputModifiers)
			{
				
				if ((FGameplayTagContainer::CreateFromArray(InputAffect.InputModifyTag).HasTagExact(Stat)) || (FGameplayTagContainer::CreateFromArray(InputAffect.InputModifyTag).HasAnyExact(FGameplayTagContainer::CreateFromArray(AdditionTags))))
				{
					

					for (FStatsAffectingParameters AffectingStat : InputAffect.Affects)
					{
						if (Stats.Contains(AffectingStat.affectingStatTag))
						{

							float mod = 0.0f;
							bool found = false;
							GetStatSelectedValueByTag(AffectingStat.affectingStatTag, AffectingStat.affectingValue, found, mod);
														
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
				float RetargetValue = 0.0f;
				float MinRetargetValue = 0.0f;
				bool found = false;

				GetStatSelectedValueByTag(Retarget.RetargetModifyTag, ValueType, found, RetargetValue);
				GetStatSelectedValueByTag(Retarget.RetargetModifyTag, EStatValueType::SVT_MinCurrent, found, MinRetargetValue);
				if ((RetargetValue > MinRetargetValue)
					&&
					Retarget.RetargetValues.Contains(ValueType)
					&&
					Retarget.InputModifyTag == Stat
					)
				{

					affectFinalValue = affectedInputValue * Retarget.RetargetModifyMultiplier;

					StatForMod = Retarget.RetargetModifyTag;
					for (AStatActor* Comp : statComponents)
					{
						if (Comp->StatTag == StatForMod.GetTagName())
						{
							ModStats = Comp;
							break;

						}
					}

					StatsCurrentValue = ModStats->GetValue(ValueType);
					ChangedStat = StatForMod;
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
			
			if (StatsCurrentValue <= ModStats->GetValue(EStatValueType::SVT_MinCurrent))
			{
				if (ModStats->onCurrentStatMinValue.IsBound())
				{
					ModStats->onCurrentStatMinValue.Broadcast(StatForMod);
					if (ModStats->StopRegenOnMinValue)
					{
						SetRegenEnable(StatForMod,false);
					}
				}
			}


			ResultValue = StatsCurrentValue;

			SetStatValue(StatForMod, ValueType, StatsCurrentValue);
			deltaChangeValue = ModStats->GetValue(ValueType) - StatsCurrentValueTemp;
			if (OnStatChange.IsBound())
			{
				FGameplayTagContainer Container; 
				if (AdditionTags.Num()>0)
				{
					Container = FGameplayTagContainer::CreateFromArray(AdditionTags);
				}
				OnStatChange.Broadcast(initiator, GetOwner(), StatForMod, Container, FromLocation, deltaChangeValue, ModStats->GetValue(ValueType));
			}
			if (initiator)
			{
				if (initiator != GetOwner())
				{
					if (OnTargetStatChange.IsBound())
					{
						FGameplayTagContainer Container;
						if (AdditionTags.Num() > 0)
						{
							Container = FGameplayTagContainer::CreateFromArray(AdditionTags);
						}
						OnTargetStatChange.Broadcast(initiator, GetOwner(), StatForMod, Container, FromLocation, deltaChangeValue, ModStats->GetValue(ValueType));

					}
				}
			}
			//ReplicateTimer();
		}
	}
	else
	{

	}
}

void UStatsComponent::SetRegenEnable(FGameplayTag Stat, bool NewValue)
{
	

	for (AStatActor* Comp : statComponents)
	{
		if (Comp->StatTag == Stat.GetTagName())
		{
			Comp->RegenIsStoped = !NewValue;
			break;

		}
	}
}




void UStatsComponent::SetStatValue(FGameplayTag Stat, EStatValueType ValueType, float NewValue)
{
	
	for (AStatActor* Comp : statComponents)
	{
		if (Comp->StatTag == Stat.GetTagName())
		{
			Comp->SetValue(ValueType, NewValue);
			if (Comp->regenRule == ERegenRule::RR_PauseRegenAfterModify)
				Comp->PauseTime = FDateTime::Now();
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


void UStatsComponent::addStat(FGameplayTag Stat, float CurrentValue, float MinValue, float MaxValue, float RegenValue, ERegenRule RegenRule, float RegenPauseLenght, bool StopOnMinValue)
{
	

	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Owner = GetOwner();
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	AActor * NewStatactor = GetOwner()->GetWorld()->SpawnActor(AStatActor::StaticClass(), &Location, &Rotation, FActorSpawnParameters::FActorSpawnParameters(SpawnInfo));
	AStatActor* NewStatComponent = Cast< AStatActor>(NewStatactor);
	if (NewStatComponent != nullptr)
	{
		NewStatComponent->SetReplicates(true);
		NewStatComponent->StatTag = Stat.GetTagName();
		NewStatComponent->StatBaseValue = CurrentValue;
		NewStatComponent->StatCurrentValue = CurrentValue;
		NewStatComponent->StatRegenBaseValue = RegenValue;
		NewStatComponent->StatRegenCurrentValue = RegenValue;
		NewStatComponent->StatMaxBaseValue = MaxValue;
		NewStatComponent->StatMaxCurrentValue = MaxValue;
		NewStatComponent->StatMinBaseValue = MinValue;
		NewStatComponent->StatMinCurrentValue = MinValue;
		NewStatComponent->regenRule = RegenRule;
		NewStatComponent->RegenPauseLenght = RegenPauseLenght;
		NewStatComponent->StopRegenOnMinValue = StopOnMinValue;
		

		NewStatComponent->ValueWasChanged = true;
		NewStatComponent->InitStat();
		NewStatComponent->onCurrentStatMinValue.AddDynamic(this, &UStatsComponent::OnSomeStatMinValue);
		statComponents.Add(NewStatComponent);
	}

}





void UStatsComponent::RemoveStat(const FGameplayTag Stat)
{
	if(Stats.Contains(Stat))
		Client_RemoveStat(Stat);

}

bool UStatsComponent::HasStat(const FGameplayTag Stat)
{
	bool found = false;
	if (statComponents.Num() > 0)
	{
		for (AStatActor* Comp : statComponents)
		{
			if (Comp)
			{
				if (Comp->StatTag == Stat.GetTagName())
				{

					found = true;
					return true;
					break;

				}
				else
				{
					found = false;
				}
			}
			else
			{
				found = false;

			}
		}
	}
	else
	{
		found = false;

	}
	return found;
}

void UStatsComponent::Client_RemoveStat_Implementation(const FGameplayTag Stat)
{
	Stats.Remove(Stat);
	AStatActor* StatCompToRemove = nullptr;
	for (AStatActor* StatComp : statComponents)
	{
		if (StatComp->StatTag == Stat.GetTagName())
		{
			StatCompToRemove = StatComp;
		}
	}
	if (StatCompToRemove != nullptr)
	{
		statComponents.Remove(StatCompToRemove);
	}
}



void UStatsComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	DOREPLIFETIME(UStatsComponent, Name);
	DOREPLIFETIME(UStatsComponent, TeamID); 
	
	DOREPLIFETIME(UStatsComponent, statComponents);
}