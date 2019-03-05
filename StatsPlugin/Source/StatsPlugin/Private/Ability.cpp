// Fill out your copyright notice in the Description page of Project Settings.

#include "Ability.h"
#include "Stats_Effect_Base.h"
#include "StatsComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "EngineUtils.h"

// Sets default values for this component's properties
UAbility::UAbility()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bReplicates = true;
	// ...
}


// Called when the game starts
void UAbility::BeginPlay()
{
	Super::BeginPlay();

	if (GetNetMode() != NM_Client)
	{
		StatsComponent = (UStatsComponent*)GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
		if (StatsComponent)
		{
			
			StatsComponent->OnStatChange.AddDynamic(this, &UAbility::TargetStatChanged);
			StatsComponent->OnStatChange.AddDynamic(this, &UAbility::OwnerStatChanged);
			StatsComponent->OnMyEffectApplicated.AddDynamic(this, &UAbility::OwnerEffectAplicated);
			StatsComponent->OnEffectApplicated.AddDynamic(this, &UAbility::AnotherActorEffectAplicated);
			StatsComponent->OnMyEffectRemoved.AddDynamic(this, &UAbility::OwnerEffectRemoved);
			StatsComponent->OnEffectRemoved.AddDynamic(this, &UAbility::AnotherActorEffectRemoved);
		}
	}
}


// Called every frame
void UAbility::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


		/////////////////////////////////////
		//попытка выключения
		/////////////////////////////////////
		if (IsTryMarkToDeactivate)
		{
			if ((FDateTime::Now().operator-(ActivationTime)).GetTotalSeconds() > ActivateReturneTime)
			{
				IsMarkToDeactivate = true;
				IsTryMarkToDeactivate = false;
			}
			if (IsMarkToBreak)
			{
				BreakAbility();
			}
		}
	
		/////////////////////////////////////
		//перезарядка
		/////////////////////////////////////
		if (IsCooldown)
		{
			CooldownTimePassed += CalculateSpeedOnAffectingParameters(DeltaTime, CooldownRule.AffectingStats);
			CooldownPercent = FMath::Clamp(CooldownTimePassed / CooldownRule.CooldownDuration, 0.0f, 1.0f);
			if (CooldownTimePassed >= CooldownRule.CooldownDuration)
			{
				if (GetNetMode() != NM_Client)
				{
					IsCooldown = false;
					CooldownIsFinished();
				}
			}
		}
		/////////////////////////////////////
		//перезарядка
		/////////////////////////////////////



		/////////////////////////////////////
		//время каста
		/////////////////////////////////////
		if (IsCasting)
		{
			CastingTimePassed += CalculateSpeedOnAffectingParameters(DeltaTime, AbilityTimingsAffectingParameters);
			CastingPercent = FMath::Clamp(CastingTimePassed / CastingDuration, 0.0f, 1.0f);
			if (CastingTimePassed >= CastingDuration)
			{
				if (GetNetMode() != NM_Client)
				{
					IsCasting = false;
					StartAction();
					
				}
				CastingTimePassed = 0.0f;
			}
			if (IsMarkToBreak)
			{
				BreakAbility();
			}
		}
		/////////////////////////////////////
		//время каста
		/////////////////////////////////////

		/////////////////////////////////////
		//время действия
		/////////////////////////////////////
		if (IsAction)
		{
			ActionTimePassed += CalculateSpeedOnAffectingParameters(DeltaTime, AbilityTimingsAffectingParameters);
			ActionPercent = FMath::Clamp(ActionTimePassed / ActionDuration, 0.0f, 1.0f);
			if (ActionTimePassed >= ActionDuration)
			{
				if (GetNetMode() != NM_Client)
				{
					IsAction = false;
					FinishAction();
					
				}
				ActionTimePassed = 0.0f;
			}
			if (IsMarkToBreak)
			{
				BreakAbility();
			}
		}
		/////////////////////////////////////
		//время действия
		/////////////////////////////////////

		/////////////////////////////////////
		//время завершения
		/////////////////////////////////////
		if (IsFinish)
		{
			FinishTimePassed += CalculateSpeedOnAffectingParameters(DeltaTime, AbilityTimingsAffectingParameters);
			FinishPercent = FMath::Clamp(FinishTimePassed / FinishDuration, 0.0f, 1.0f);
			if (FinishTimePassed >= FinishDuration)
			{
				if (GetNetMode() != NM_Client)
				{
					IsFinish = false;
					IsCanFinished = true;
					if (!IsMarkToDeactivate)
					{
						DeactivateAbility();

					}
				}
				FinishTimePassed = 0.0f;
			}
			if (IsMarkToBreak)
			{
				BreakAbility();
			}
		}
		/////////////////////////////////////
		//время завершения
		/////////////////////////////////////




		/////////////////////////////////////
		//время каста ченнелинг
		/////////////////////////////////////
		if (IsChanelingCasting)
		{
			ChanelingCastingTimePassed += CalculateSpeedOnAffectingParameters(DeltaTime, AbilityTimingsAffectingParameters);
			ChanelingCastingPercent = FMath::Clamp(ChanelingCastingTimePassed / ChanelingCastingDuration, 0.0f, 1.0f);
			if (ChanelingCastingTimePassed >= ChanelingCastingDuration)
			{
				if (GetNetMode() != NM_Client)
				{
					IsChanelingCasting = false;
					StartChanelingAction();
				}
				ChanelingCastingTimePassed = 0.0f;
			}
			if (IsMarkToBreak)
			{
				BreakAbility();
			}
		}
		/////////////////////////////////////
		//время каста ченнелинг
		/////////////////////////////////////



		/////////////////////////////////////
		//время действия ченнелинг
		/////////////////////////////////////
		if (IsChanelingAction)
		{
			ChanelingActionTimePassed += CalculateSpeedOnAffectingParameters(DeltaTime, AbilityTimingsAffectingParameters);
			ChanelingActionPercent = FMath::Clamp(ChanelingActionTimePassed / ChanelingActionDuration, 0.0f, 1.0f);
			if (ChanelingActionTimePassed >= ChanelingActionDuration)
			{
				if (GetNetMode() != NM_Client)
				{
					IsChanelingAction = false;
					StartFinishChanelingAction();
				}
				ChanelingActionTimePassed = 0.0f;
			}
			if (IsMarkToBreak)
			{
				BreakAbility();
			}
		}
		/////////////////////////////////////
		//время действия ченнелинг
		/////////////////////////////////////

		/////////////////////////////////////
		//время завершения действия ченнелинг
		/////////////////////////////////////
		if (IsChanelingActionFinish)
		{
			ChanelingActionFinishTimePassed += CalculateSpeedOnAffectingParameters(DeltaTime, AbilityTimingsAffectingParameters);
			ChanelingActionFinishPercent = FMath::Clamp(ChanelingActionFinishTimePassed / ChanelingActionFinishDuration, 0.0f, 1.0f);
			if (ChanelingActionFinishTimePassed >= ChanelingActionFinishDuration)
			{
				if (GetNetMode() != NM_Client)
				{
					IsChanelingActionFinish = false;
					if (IsMarkToDeactivate)
					{
						FinishChaneling();
					}
					else
					{
						if (resourceConsumption())
						{
							StartChanelingCasting();
						}
						else
						{
							FinishChaneling();
						}
					}
					
				}
				ChanelingActionFinishTimePassed = 0.0f;
			}
			if (IsMarkToBreak)
			{
				BreakAbility();
			}
		}
		/////////////////////////////////////
		//время завершения действия ченнелинг
		/////////////////////////////////////

		/////////////////////////////////////
		//время завершения ченнелинг
		/////////////////////////////////////
		if (IsChanelingFinish)
		{
			ChanelingFinishTimePassed += CalculateSpeedOnAffectingParameters(DeltaTime, AbilityTimingsAffectingParameters);
			ChanelingFinishPercent = FMath::Clamp(ChanelingFinishTimePassed / ChanelingFinishDuration, 0.0f, 1.0f);
			if (ChanelingFinishTimePassed >= ChanelingFinishDuration)
			{
				if (GetNetMode() != NM_Client)
				{
					IsChanelingFinish = false;
					IsCanFinished = true;
					if (!IsMarkToDeactivate)
					{
						DeactivateAbility();
					}
				}
				ChanelingFinishTimePassed = 0.0f;
			}
			if (IsMarkToBreak)
			{
				BreakAbility();
			}
		}
		/////////////////////////////////////
		//время завершения ченнелинг
		/////////////////////////////////////




		/////////////////////////////////////
		//Ожидание выключения
		/////////////////////////////////////
		if (GetNetMode() != NM_Client)
		{
			if (IsMarkToDeactivate)
			{
				if (IsCanFinished)
				{
					IsMarkToDeactivate = false;
					IsCanFinished = false;
					DeactivateAbility();
				}
			}
			if (IsMarkToBreak)
			{
				BreakAbility();
			}
		}
		/////////////////////////////////////
		//Ожидание выключения
		/////////////////////////////////////



	
	// ...
}


///////////////////////////////////////////////////////////////////////////
//активация абилки
///////////////////////////////////////////////////////////////////////////

//пытаемся запустить абилку
bool UAbility::TryActivateAbility(TArray<FGameplayTag> CurrentTags)
{
	bool canActivate = false;
	if (!IsActivated)
	{
		//если нет тегов блочащих абилку запускаем активацию.
		if (!IsCooldown)
		{
			if (CurrentTags.Num() > 0)
			{
				TArray<FGameplayTag> AbilitiesTags = CurrentTags;
				if (AbilityActivateBlockingTags.Num() > 0)
				{
					if (!FGameplayTagContainer::CreateFromArray(AbilityActivateBlockingTags).HasAny(FGameplayTagContainer::CreateFromArray(AbilitiesTags)))
					{
						//проверяем требования для активации
						bool RequirementsCompleted = false;
						if (AbilityActivateRequirementTags.Num() > 0)
						{
							if (FGameplayTagContainer::CreateFromArray(AbilityActivateRequirementTags).HasAny(FGameplayTagContainer::CreateFromArray(AbilitiesTags)))
							{
								RequirementsCompleted = true;
							}
						}
						else
						{
							RequirementsCompleted = true;
						}
						//если требования помечаем что можно активировать
						if (RequirementsCompleted)
						{
							canActivate = true;
						}
						else
						{
							canActivate = false;
						}
					}
					else
					{
						canActivate = false;
					}
				}
				//блокирующих условий нет
				else
				{
					//ActivateAbility();
					canActivate = true;
				}
			}
			//не получили тэгов
			else
			{
				//абилка требует тэги для активации 
				if (AbilityActivateRequirementTags.Num() > 0)
				{
					canActivate = false;
				}
				//абилка не требует тэги для активации можно юзать =)
				else
				{
					canActivate = true;
				}
			}
		}
		else
		{
			canActivate = false;
		}
	}
	else
	{
		canActivate = true;
	}

	if (canActivate)
	{
		if (!IsActivated)
		{
			//если спел не активен то применяем расход маны
			canActivate = resourceConsumption();
		}
	}

	//если после всех првоерок мы все же можем заюзать спелл то юзаем его
	if (canActivate)
	{
		ActivateAbility();
		return true;
	}
	else
	{
		return false;
	}

}
//запустили абилку


bool UAbility::resourceConsumption()
{
	bool canactivate = true;
	if (StatsComponent)
	{
		TArray<FFinalAbilityCost> FinalCosts;
		FinalCosts.Empty();

		for (FStatsModifications Mod : ResourceConsuption)
		{
			FFinalAbilityCost FinalCost;
			float CostValue = Mod.ModificationValue;
			//считаем итоговую цену спела
			if (StatsComponent->Stats.Contains(Mod.Stat))
			{
				for (FStatsAffectingParameters AffectingStat : Mod.AffectingStats)
				{
					if (StatsComponent->Stats.Contains(AffectingStat.affectingStatTag))
					{

						float mod = StatsComponent->Stats.FindRef(AffectingStat.affectingStatTag).GetValue(AffectingStat.affectingValue)*AffectingStat.affectingMultiplier;
						if (mod != 0) {
							switch (AffectingStat.affectingType)
							{
							case EStatChangeType::SCT_Add:
								CostValue = CostValue + mod;
								break;
							case EStatChangeType::SCT_Sub:
								CostValue = CostValue - mod;
								break;
							case EStatChangeType::SCT_Multiply:
								CostValue = CostValue * mod;
								break;
							case EStatChangeType::SCT_Divide:
								CostValue = CostValue / mod;
								break;
							case EStatChangeType::SCT_AddPercent:
								CostValue = CostValue + ((CostValue / 100) * mod);
								break;
							case EStatChangeType::SCT_SubtractPercent:
								CostValue = CostValue - ((CostValue / 100) * mod);
								break;
							default:
								break;
							}
						}
					}
				}
				//почтитали цену спела

				bool canApplyCost = false;
				switch (Mod.ChangeType)
				{
				case EStatChangeType::SCT_Add:
					if((StatsComponent->Stats.FindRef(Mod.Stat).GetValue(Mod.ValueType) + CostValue) >= StatsComponent->Stats.FindRef(Mod.Stat).GetValue(EStatValueType::SVT_MinCurrent))
						canApplyCost = true;
					break;
				case EStatChangeType::SCT_Sub:
					if ((StatsComponent->Stats.FindRef(Mod.Stat).GetValue(Mod.ValueType) - CostValue) >= StatsComponent->Stats.FindRef(Mod.Stat).GetValue(EStatValueType::SVT_MinCurrent))
						canApplyCost = true;
					break;
				case EStatChangeType::SCT_Multiply:
					if ((StatsComponent->Stats.FindRef(Mod.Stat).GetValue(Mod.ValueType) * CostValue) >= StatsComponent->Stats.FindRef(Mod.Stat).GetValue(EStatValueType::SVT_MinCurrent))
						canApplyCost = true;
					break;
				case EStatChangeType::SCT_Divide:
					if ((StatsComponent->Stats.FindRef(Mod.Stat).GetValue(Mod.ValueType) / CostValue) >= StatsComponent->Stats.FindRef(Mod.Stat).GetValue(EStatValueType::SVT_MinCurrent))
						canApplyCost = true;
					break;
				case EStatChangeType::SCT_AddPercent:
					if ((StatsComponent->Stats.FindRef(Mod.Stat).GetValue(Mod.ValueType) + (StatsComponent->Stats.FindRef(Mod.Stat).GetValue(Mod.ValueType)/100)*CostValue) >= StatsComponent->Stats.FindRef(Mod.Stat).GetValue(EStatValueType::SVT_MinCurrent))
						canApplyCost = true;
					break;
				case EStatChangeType::SCT_SubtractPercent:
					if ((StatsComponent->Stats.FindRef(Mod.Stat).GetValue(Mod.ValueType) - (StatsComponent->Stats.FindRef(Mod.Stat).GetValue(Mod.ValueType) / 100)*CostValue) >= StatsComponent->Stats.FindRef(Mod.Stat).GetValue(EStatValueType::SVT_MinCurrent))
						canApplyCost = true;
					break;
				default:
					break;
				}

				if (canApplyCost)
				{
					FinalCost.Cost = CostValue;
					FinalCost.Stat = Mod.Stat;
					FinalCost.ChangeType = Mod.ChangeType;
					FinalCost.ValueType = Mod.ValueType;
					FinalCost.AdditionsTags = Mod.AdditionInfoTags;
					FinalCost.clear = Mod.ClearChange;
					FinalCosts.Add(FinalCost);
				}
				else
				{
					canactivate = false;
				}

			}
			else
			{
				//нет требуемого стата
				canactivate = false;
			}
		}

		//если все еще можно активировать
		if (canactivate)
		{
			for (FFinalAbilityCost finalcost : FinalCosts)
			{																														
				bool Modify;
				float deltaChangeValue;
				float ResultValue;
				FGameplayTag ChangedStat;
				StatsComponent->ModifyStat(GetOwner(), finalcost.Stat, finalcost.Cost, finalcost.ChangeType, finalcost.ValueType, Modify, deltaChangeValue, ResultValue, ChangedStat, finalcost.clear, finalcost.AdditionsTags);
			}

		}
	}
	else
	{
		canactivate = false;
		//нет статов
	}
	return canactivate;
}

//активация по нажатию с кастом
// Старт абилки -> запуск каста -> Запуск самой абилки -> завершение абилки

//активация по нажатию без каста
// Старт абилки -> Заупск самой абилки -> завершение абилки
 
//удержание без отдельной работы абилки
// Старт абилки -> запуск ченнелинга абилки -> ожидание деактивации -> завершение абилки

//активируемый ченнелинг
// Старт абилки -> запуск ченнелинга абилки -> ожидание деактивации (по нажатию) -> завершение абилки

//удержание с зарядом абилки
// Старт абилки -> заряд абилки -> ожидание деактивации -> Запуск самой абилки -> завершение абилки


void UAbility::ActivateAbility()
{
	if (IsActivated)
	{
		IsCanFinished = false;
		IsMarkToDeactivate = false;
		IsTryMarkToDeactivate = false;
		ActivationTime = FDateTime::Now();
	}
	else
	{
		IsActivated = true;
		ActivateEffects();
		AbilityActivated();
		IsCanFinished = false;
		IsMarkToDeactivate = false;
		IsTryMarkToDeactivate = false;
		ActivationTime = FDateTime::Now();
		TryStartCooldown(false);

		if (OnAbilityActivated.IsBound())
		{
			OnAbilityActivated.Broadcast(this);
		}


		switch (AbilityType)
		{
		case EAbilityType::AT_OnClickActivation:
			StartCasting();
			break;
		case EAbilityType::AT_OnClickChanneling:
			StartChanelingCasting();
			break;
		case EAbilityType::AT_OnHoldChanneling:
			StartChanelingCasting();
			break;
		case EAbilityType::AT_OnHoldCharge:
			StartCharge();
			break;
		default:
			break;
		}
	}
	

}

//запуск каста
void UAbility::StartCasting()
{
	if (CastingDuration <= 0.0f)
	{
		StartAction();
	}
	else
	{
		IsCasting = true;
	}
}
//запуск самой абилки
void UAbility::StartAction()
{
	if (ActionDuration <= 0.0f)
	{
		FinishAction();
	}
	else
	{
		IsAction = true;
	}

}
//завершение абилки
void UAbility::FinishAction()
{
	
	if (FinishDuration <= 0.0f)
	{
		if (IsMarkToDeactivate)
		{
			IsCanFinished = true;
		}
		else
		{
			DeactivateAbility();
		}
	}
	else
	{
		IsFinish = true;
	}
}



//ченнелинг каст
void UAbility::StartChanelingCasting()
{
	if (ChanelingCastingDuration <= 0.0f)
	{
		StartChanelingAction();
	}
	else
	{
		IsChanelingCasting = true;
	}
}
//ченнелинг действие
void UAbility::StartChanelingAction()
{
	if (ChanelingActionDuration <= 0.0f)
	{
		StartFinishChanelingAction();
	}
	else
	{
		IsChanelingAction = true;
	}

}
//ченнелинг завершение действия
void UAbility::StartFinishChanelingAction()
{
	if (ChanelingActionFinishDuration <= 0.0f)
	{
		if (IsMarkToDeactivate)
		{
			FinishChaneling();
		}
		else
		{
			//применяем расход ресурсов в конце ченнелинга т.к. при активации мы уже сожрали ресурс (если не хватает ресурса то вырубаем спелл)
			if (resourceConsumption())
			{
				StartChanelingCasting();
			}
			else
			{
				FinishChaneling();
			}
		}
	}
	else
	{
		IsChanelingActionFinish = true;
	}
}
//завершение ченнелинга
void UAbility::FinishChaneling()
{
	if (ChanelingFinishDuration <= 0.0f)
	{
		if (IsMarkToDeactivate)
		{
			IsCanFinished = true;
		}
		else
		{
			DeactivateAbility();
		}
	}
	else
	{
		IsChanelingFinish = true;
	}
}




void UAbility::StartCharge()
{
}

void UAbility::FinishCharge()
{
}





//активирует эффекты
void UAbility::ActivateEffects()
{
	if (AbilityActivateEffectsTags.Num() > 0)
	{
		for (TActorIterator<AStats_Effect_Base> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			AStats_Effect_Base *Effect = *ActorItr;
			if (Effect->GetOwner())
			{
				if (Effect->GetOwner() == GetOwner())
				{
					if (Effect->EffectInfoTag.Num() > 0)
					{
						if (FGameplayTagContainer::CreateFromArray(AbilityActivateEffectsTags).HasAny(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
						{
							Effect->ActivateEffectAll();
						}
					}
					
				}
			}
		}
	}

}

///////////////////////////////////////////////////////////////////////////
//деактивация абилки
///////////////////////////////////////////////////////////////////////////

//пытаемся выключить абилку
bool UAbility::TryDeactivateAbility()
{
	if (IsActivated)
	{
		//помечаем на отключение
		if ((FDateTime::Now().operator-(ActivationTime)).GetTotalSeconds() > (ActivateReturneTime))
		{
			IsMarkToDeactivate = true;
		}
		else
		{
			IsTryMarkToDeactivate = true;
		}
		

		return true;
	}
	else
	{
		return false;
	}
}

//пытаемся выключить абилку
bool UAbility::TryBreakAbility()
{
	if (IsActivated)
	{

		//помечаем на отключение
		IsMarkToBreak = true;


		return true;
	}
	else
	{
		return false;
	}
}

//выключили абилку
void UAbility::DeactivateAbility()
{
	IsMarkToDeactivate = false;
	IsActivated = false;
	DeactivateEffects();
	AbilityBreaked();
	TryStartCooldown(true);
	if (OnAbilityDeactivated.IsBound())
	{
		OnAbilityDeactivated.Broadcast(this);
	}
	
}

void UAbility::BreakAbility()
{
	IsActivated = false;

	IsTryMarkToDeactivate = false;
	IsMarkToDeactivate = false;
	IsMarkToBreak = false;
	
	IsCasting = false;
	IsAction = false;
	IsFinish = false;
	IsCanFinished = false;

	IsChanelingCasting = false;
	IsChanelingAction = false;
	IsChanelingActionFinish = false;
	IsChanelingFinish = false;



	DeactivateEffects();
	AbilityBreaked();
	
	TryStartCooldown(true);
	if (OnAbilityBreaked.IsBound())
	{
		OnAbilityBreaked.Broadcast(this);
	}
}


//деактивирует эффекты
void UAbility::DeactivateEffects()
{
	if (AbilityActivateEffectsTags.Num() > 0)
	{
		for (TActorIterator<AStats_Effect_Base> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			AStats_Effect_Base *Effect = *ActorItr;
			if (Effect->GetOwner())
			{
				if (Effect->GetOwner() == GetOwner())
				{
					if (Effect->EffectInfoTag.Num() > 0)
					{
						if (FGameplayTagContainer::CreateFromArray(AbilityActivateEffectsTags).HasAny(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
						{
							Effect->DeactivateEffectAll();
						}
					}
				}
			}
		}
	}
}


///////////////////////////////////////////////////////////////////////////
//другие абилки
///////////////////////////////////////////////////////////////////////////

//включилась другая абилка
void UAbility::AnotherAbilityActivated(UAbility* ActivatedAbility)
{
	OnAnotherAbilityActivation(ActivatedAbility);
		if (ActivatedAbility->AbilityTags.Num() > 0)
		{
			if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(ActivatedAbility->AbilityTags)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(ActivatedAbility->AbilityTags));
		}
}
//владелец абилки получил изменение статов
void UAbility::OwnerStatChanged(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange, float NewValue)
{		
	OnOwnerStatModification(ModificationIniciator, ModificationTargert, tag, AdditinsTags, deltaChange, NewValue);
	FGameplayTagContainer TempContainer = AdditinsTags;
	TempContainer.AddTag(tag);
	if (!DeactivateAbilityByTrigger(TempContainer))
			ActivateAbilityByTrigger(TempContainer);
}
//владелец абилки измененил кому-то статы
void UAbility::TargetStatChanged(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange, float NewValue)
{
	OnTargetStatModification(ModificationIniciator, ModificationTargert, tag, AdditinsTags, deltaChange, NewValue);
	FGameplayTagContainer TempContainer = AdditinsTags;
	TempContainer.AddTag(tag);
	if (!DeactivateAbilityByTrigger(TempContainer))
		ActivateAbilityByTrigger(TempContainer);
}

///////////////////////////////////////////////////////////////////////////
//другие эффекты
///////////////////////////////////////////////////////////////////////////

//чей-то эффект применился на владельца абилка
void UAbility::AnotherActorEffectAplicated(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnAnotherActorEffectAplicated(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag));
	}
}
//мой эффект применился на кого то
void UAbility::OwnerEffectAplicated(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnOwnerEffectAplicated(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag));
	}
}
//чей-то эффект снялся
void UAbility::AnotherActorEffectRemoved(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnAnotherActorEffectRemoved(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag));
	}
}
//мой эффект снялся
void UAbility::OwnerEffectRemoved(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnOwnerEffectRemoved(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag));
	}
}

///////////////////////////////////////////////////////////////////////////
//Активация/деактивация по триггерам
///////////////////////////////////////////////////////////////////////////
bool UAbility::ActivateAbilityByTrigger(FGameplayTagContainer Tags)
{
	bool activated = false;
	if (AbilityActivateTriggerTags.Num() > 0)
	{
		if (FGameplayTagContainer::CreateFromArray(AbilityActivateTriggerTags).HasAny(Tags))
		{

			//активация по триггеру
			activated = TryActivateAbility(GetAbilitiesTags());

			if (activated)
			{
				AbilityActivatedByTrigger();
			}
		}
	}
	return activated;
}

bool UAbility::DeactivateAbilityByTrigger(FGameplayTagContainer Tags)
{
	bool deactivated = false;

	//////////////////////////////////////////////////////////////
	//////////////////прерывание
	//////////////////////////////////////////////////////////////
	if (AbilityBreakTriggerTags.Num() > 0)
	{
		if (FGameplayTagContainer::CreateFromArray(AbilityBreakTriggerTags).HasAny(Tags))
		{
			deactivated = TryBreakAbility();
			if (deactivated)
			{
				AbilityBreakedByTrigger();
			}
		}
	}
	//////////////////////////////////////////////////////////////
	//////////////////прерывание
	//////////////////////////////////////////////////////////////



	//////////////////////////////////////////////////////////////
	//////////////////выключение
	//////////////////////////////////////////////////////////////
	if (AbilityDeactivateTriggerTags.Num() > 0)
	{
		if (FGameplayTagContainer::CreateFromArray(AbilityDeactivateTriggerTags).HasAny(Tags))
		{
			deactivated = TryDeactivateAbility();
			if (deactivated)
			{
				AbilityDeactivatedByTrigger();
			}
		}
	}
	//////////////////////////////////////////////////////////////
	//////////////////выключение
	//////////////////////////////////////////////////////////////

	return deactivated;
}


///////////////////////////////////////////////////////////////////////////
//Перезарядка
///////////////////////////////////////////////////////////////////////////

void UAbility::TryStartCooldown(bool CallAfterAbilityFinish)
{
	switch (CooldownRule.Rule)
	{
	case EAbilityRearmRule::ARR_NoRearm :

		break;
	case EAbilityRearmRule::ARR_RearmAfterAbilityFinishWork:
		if (CallAfterAbilityFinish)
		{

			CooldownTimePassed = 0;
			CooldownPercent = 0;
			IsCooldown = true;
			CooldownIsStarted();
		}
		break;
	case EAbilityRearmRule::ARR_RearmAfterAbilityStartWork:
		if (!CallAfterAbilityFinish)
		{

			CooldownTimePassed = 0;
			CooldownPercent = 0;
			IsCooldown = true;
			CooldownIsStarted();
		}
		break;
	default:
		break;
	}

}


float UAbility::CalculateSpeedOnAffectingParameters(float CurrentDeltaTime, TArray<FStatsAffectingParameters> affectingParameters)
{
	float CooldownSpeed = CurrentDeltaTime;
	for (FStatsAffectingParameters AffectingStat : affectingParameters)
	{
		if (StatsComponent->Stats.Contains(AffectingStat.affectingStatTag))
		{
			float mod = StatsComponent->Stats.FindRef(AffectingStat.affectingStatTag).GetValue(AffectingStat.affectingValue)*AffectingStat.affectingMultiplier;
			if (mod != 0) {
				switch (AffectingStat.affectingType)
				{
				case EStatChangeType::SCT_Add:
					CooldownSpeed = CooldownSpeed + mod;
					break;
				case EStatChangeType::SCT_Sub:
					CooldownSpeed = CooldownSpeed - mod;
					break;
				case EStatChangeType::SCT_Multiply:
					CooldownSpeed = CooldownSpeed * mod;
					break;
				case EStatChangeType::SCT_Divide:
					CooldownSpeed = CooldownSpeed / mod;
					break;
				case EStatChangeType::SCT_AddPercent:
					CooldownSpeed = CooldownSpeed + ((CooldownSpeed / 100) * mod);
					break;
				case EStatChangeType::SCT_SubtractPercent:
					CooldownSpeed = CooldownSpeed - ((CooldownSpeed / 100) * mod);
					break;
				default:
					break;
				}
			}
		}
	}

	return CooldownSpeed;
}




///////////////////////////////////////////////////////////////////////////
//Получаем список тегов абилок
///////////////////////////////////////////////////////////////////////////

TArray<FGameplayTag> UAbility::GetAbilitiesTags()
{
	TArray<FGameplayTag> AbilitiesTags;
	TArray<UActorComponent*> FindedComponents = GetOwner()->GetComponentsByClass(UAbility::StaticClass());
	if (FindedComponents.Num() > 0)
	{
		for (UActorComponent* Component : FindedComponents)
		{
			UAbility* ability = Cast<UAbility>(Component);
			if (ability)
			{
				AbilitiesTags.Append(ability->AbilityTags);
				if (ability->IsActivated)
				{
					AbilitiesTags.Append(ability->OnActivatedAbilityTags);
				}
			}
		}
	}
	return AbilitiesTags;
}


void UAbility::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	DOREPLIFETIME(UAbility, CooldownPercent);
	DOREPLIFETIME(UAbility, CastingPercent);
	DOREPLIFETIME(UAbility, ActionPercent);
	DOREPLIFETIME(UAbility, FinishPercent);
	DOREPLIFETIME(UAbility, ChanelingCastingPercent);
	DOREPLIFETIME(UAbility, ChanelingActionPercent);
	DOREPLIFETIME(UAbility, ChanelingActionFinishPercent);
	DOREPLIFETIME(UAbility, ChanelingFinishPercent);


	DOREPLIFETIME(UAbility, CooldownTimePassed);
	DOREPLIFETIME(UAbility, CastingTimePassed);
	DOREPLIFETIME(UAbility, ActionTimePassed);
	DOREPLIFETIME(UAbility, FinishTimePassed);
	DOREPLIFETIME(UAbility, ChanelingCastingTimePassed);
	DOREPLIFETIME(UAbility, ChanelingActionTimePassed);
	DOREPLIFETIME(UAbility, ChanelingActionFinishTimePassed);
	DOREPLIFETIME(UAbility, ChanelingFinishTimePassed);

	DOREPLIFETIME(UAbility, IsActivated);
	DOREPLIFETIME(UAbility, IsCooldown);
	DOREPLIFETIME(UAbility, IsCasting);
	DOREPLIFETIME(UAbility, IsAction);
	DOREPLIFETIME(UAbility, IsFinish);
	DOREPLIFETIME(UAbility, IsChanelingCasting);
	DOREPLIFETIME(UAbility, IsChanelingAction);
	DOREPLIFETIME(UAbility, IsChanelingActionFinish);
	DOREPLIFETIME(UAbility, IsChanelingFinish);

	DOREPLIFETIME(UAbility, IsMarkToDeactivate);
	DOREPLIFETIME(UAbility, IsMarkToCansel);
}