// Fill out your copyright notice in the Description page of Project Settings.

#include "Ability.h"
#include "Stats_Effect_Base.h"
#include "StatsComponent.h"
#include "GameFramework/Actor.h"
#include "Stats_Effect_Base.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Stats_AnimInstance.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "EngineUtils.h"
#include "AI_Sight.h"
#include "TimerManager.h"

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
			for (FAbilityAddStat NewStat : AdditionStats)
			{
				StatsComponent->addStat(NewStat.Stat, NewStat.CurrentValue, NewStat.MinValue, NewStat.MaxValue, NewStat.RegenValue, NewStat.RegenRule, NewStat.RegenPauseLenght, NewStat.StopOnMinValue);
			}

			if (AbilityType == EAbilityType::AT_Passive)
			{
				if (AbilityActivateRequirementTags.Num() > 0)
				{
					FTimerHandle TimerHandle_PassiveActivationCheck;
					FTimerDynamicDelegate eventPassiveActivationCheck;
					eventPassiveActivationCheck.BindDynamic(this, &UAbility::PassiveActivationCheck);
					GetOwner()->GetWorldTimerManager().SetTimer(TimerHandle_PassiveActivationCheck, eventPassiveActivationCheck, PassiveActivationCheckPeriod, true);
				}
				else
				{
					IsActivated = true;
				}
			}
		}
	}
}

void UAbility::PassiveActivationCheck()
{
	if(FGameplayTagContainer::CreateFromArray(GetAbilitiesAndEffectsTags()).HasAllExact(FGameplayTagContainer::CreateFromArray(AbilityActivateRequirementTags)))
	{
		IsActivated = true;
	}
	else
	{
		IsActivated = false;
	}
}

// Called every frame
void UAbility::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


		if ((StatsComponent)&&(AdditionStats.Num()>0))
		{
			TMap<FGameplayTag, float> TempMonitoringStats;
			for (FAbilityAddStat NewStat : AdditionStats)
			{
				if (NewStat.IsMonitoringStat)
				{
					bool found = false;
					float value = 0.0f;
					StatsComponent->GetStatSelectedValueByTag(NewStat.Stat, EStatValueType::SVT_Current, found, value);
					if (found)
						TempMonitoringStats.Add(NewStat.Stat, value);
				}

			}
			MonitoringStats = TempMonitoringStats;
		}

		if ((IsActivated)&&(!IsChannelingTimeOunt))
		{
			AbilityActivityTime += DeltaTime;
			

			switch (AbilityType)
			{
			case EAbilityType::AT_OnClickChanneling:
				if (AbilityChannelingTimeLimit > 0.0f)
				{
					if (AbilityActivityTime >= AbilityChannelingTimeLimit)
					{
						IsChannelingTimeOunt = true;
						IsMarkToDeactivate = true;
					}

				}
				break;
			case EAbilityType::AT_OnHoldChanneling:
				if (AbilityChannelingTimeLimit > 0.0f)
				{
					if (AbilityActivityTime >= AbilityChannelingTimeLimit)
					{
						IsChannelingTimeOunt = true;
						IsMarkToDeactivate = true;
					}

				}
				break;
			default:
				break;
			}

			
		}


		if (IsTryMarkToDeactivate)
		{
				if ((FDateTime::Now().operator-(ActivationTime)).GetTotalSeconds() > ActivateReturneTime)
				{
					IsMarkToDeactivate = true;
					IsTryMarkToDeactivate = false;
				}
				if (IsMarkToBreak)
				{
					TryPlayAnimation(BreakedAnimation);

					BreakAbility(breakedByTrigger);

				}
		}
	

		if (IsCooldown)
		{
			CooldownTimePassed += DeltaTime;
			CooldownPercent = FMath::Clamp(CooldownTimePassed / (CooldownRule.CooldownDuration*MultiplierCooldown), 0.0f, 1.0f);
			if (CooldownTimePassed >= CooldownRule.CooldownDuration*MultiplierCooldown)
			{
				CooldownIsFinished();
				if (GetNetMode() != NM_Client)
				{
					IsCooldown = false;
					CooldownIsFinished_server();
				}
				CooldownPercent = 1.0f;
				CooldownTimePassed = 0.0f;
			}
		}
		else 
		{
			CooldownPercent = 1.0f;
			CooldownTimePassed = 0.0f;
		}

		if (IsCasting)
		{
			CastingTimePassed += DeltaTime;
			CastingPercent = FMath::Clamp(CastingTimePassed / (CastingDuration * Multiplier), 0.0f, 1.0f);
			if (CastingTimePassed >= CastingDuration * Multiplier)
			{
				IsCasting = false;
				CastingPercent = 1.0f;
				if (GetNetMode() != NM_Client)
				{
					StartAction();
				}
			}
			if (IsMarkToBreak)
			{
				TryPlayAnimation(BreakedAnimation);
				if (GetNetMode() != NM_Client)
				{
					BreakAbility(breakedByTrigger);
				}
			}	
		}

		if (IsAction)
		{
			ActionTimePassed += DeltaTime;
			ActionPercent = FMath::Clamp(ActionTimePassed / (ActionDuration * Multiplier), 0.0f, 1.0f);
			
			if (ActionTimePassed >= ActionDuration * Multiplier)
			{
				IsAction = false;
				ActionPercent = 1.0f;
				if (GetNetMode() != NM_Client)
				{
					FinishAction();
				}
			}
			if (IsMarkToBreak)
			{
				ActionPercent = 0.0f;
				ActionTimePassed = 0.0f;
				TryPlayAnimation(BreakedAnimation);
				BreakAbility(breakedByTrigger);
			}			
		}

		if (IsFinish)
		{
			FinishTimePassed += DeltaTime;
			FinishPercent = FMath::Clamp(FinishTimePassed / (FinishDuration * Multiplier), 0.0f, 1.0f);

			if (FinishTimePassed >= FinishDuration * Multiplier)
			{
				IsFinish = false;
				IsCanFinished = true;
				FinishPercent = 1.0f;
				if (GetNetMode() != NM_Client)
				{
					if (!IsMarkToDeactivate)
					{
						DeactivateAbility(deactivatedByTrigger);
					}
				}
			}
			if (IsMarkToBreak)
			{
				TryPlayAnimation(BreakedAnimation);
				BreakAbility(breakedByTrigger);
			}
		}

		if (IsChanelingCasting)
		{
			ChanelingCastingTimePassed += DeltaTime;
			ChanelingCastingPercent = FMath::Clamp(ChanelingCastingTimePassed / (ChanelingCastingDuration*Multiplier), 0.0f, 1.0f);
			if (ChanelingCastingTimePassed >= ChanelingCastingDuration * Multiplier)
			{
				IsChanelingCasting = false;
				ChanelingCastingPercent = 1.0f;
				if (GetNetMode() != NM_Client)
				{
					StartChanelingAction();
				}			
			}
			if (IsMarkToBreak)
			{
				TryPlayAnimation(BreakedAnimation);
				BreakAbility(breakedByTrigger);

			}
		}

		if (IsChanelingAction)
		{
			ChanelingActionTimePassed += DeltaTime;
			ChanelingActionPercent = FMath::Clamp(ChanelingActionTimePassed / (ChanelingActionDuration*Multiplier), 0.0f, 1.0f);
			if (ChanelingActionTimePassed >= ChanelingActionDuration * Multiplier)
			{
				IsChanelingAction = false;
				ChanelingActionPercent = 1.0f;
				if (GetNetMode() != NM_Client)
				{
					StartFinishChanelingAction();
				}
			}
			if (IsMarkToBreak)
			{
				TryPlayAnimation(BreakedAnimation);
				BreakAbility(breakedByTrigger);
			}	
		}

		if (IsChanelingActionFinish)
		{
			ChanelingActionFinishTimePassed += DeltaTime;
			ChanelingActionFinishPercent = FMath::Clamp(ChanelingActionFinishTimePassed / (ChanelingActionFinishDuration*Multiplier), 0.0f, 1.0f);
			if (ChanelingActionFinishTimePassed >= ChanelingActionFinishDuration * Multiplier)
			{
				IsChanelingActionFinish = false;
				ChanelingActionFinishPercent = 1.0f;
				if (GetNetMode() != NM_Client)
				{
					if (IsChannelingTimeOunt)
					{
						FinishChaneling();
					}
					if (IsMarkToDeactivate)
					{
						FinishChaneling();
					}
					else
					{
						if (StatConsumption(false))
						{
							StartChanelingCasting();
						}
						else
						{
							FinishChaneling();
						}
					}
					
				}
			}
			if (IsMarkToBreak)
			{
				TryPlayAnimation(BreakedAnimation);
				BreakAbility(breakedByTrigger);
			}	
		}

		if (IsChanelingFinish)
		{
			ChanelingFinishTimePassed += DeltaTime;
			ChanelingFinishPercent = FMath::Clamp(ChanelingFinishTimePassed / (ChanelingFinishDuration*Multiplier), 0.0f, 1.0f);
			if (ChanelingFinishTimePassed >= ChanelingFinishDuration * Multiplier)
			{
				IsChanelingFinish = false;
				IsCanFinished = true;
				ChanelingFinishPercent = 1.0f;
				if (GetNetMode() != NM_Client)
				{
					if (!IsMarkToDeactivate)
					{
						DeactivateAbility(deactivatedByTrigger);
					}
				}
			}
			if (IsMarkToBreak)
			{
				TryPlayAnimation(BreakedAnimation);
				BreakAbility(breakedByTrigger);
			}
		}

		if (IsCharging)
		{
			ChargingTimePassed += DeltaTime;
			ChargingPercent = FMath::Clamp(ChargingTimePassed / (ChargeDuration*Multiplier), 0.0f, 1.0f);
			if (ChargingTimePassed >= ChargeDuration * Multiplier)
			{
				IsCharging = false;
				ChargingPercent = 1.0f;
				if (GetNetMode() != NM_Client)
				{
					FinishCharge();
				}
			}
			if (IsMarkToBreak)
			{
				TryPlayAnimation(BreakedAnimation);
				IsCharging = false;
				BreakAbility(breakedByTrigger);
			}
			if (IsMarkToDeactivate)
			{
				if (GetNetMode() != NM_Client)
				{
					IsCharging = false;
					IsChargingFinish = false;
					StartAction();
				}
			}
		}

		if (IsChargingFinish)
		{
			ChargingFinishedTimePassed += DeltaTime;
			if (IsMarkToDeactivate)
			{
				IsChargingFinish = false;
				if (GetNetMode() != NM_Client)
					StartAction();
			}
			if (IsMarkToBreak)
			{
				TryPlayAnimation(BreakedAnimation);
				BreakAbility(breakedByTrigger);
			}
		}

		if (IsMarkToDeactivate || IsChannelingTimeOunt)
		{
			if (IsCanFinished)
			{
				IsChannelingTimeOunt = false;
				IsMarkToDeactivate = false;
				IsCanFinished = false;
				if (GetNetMode() != NM_Client)
					DeactivateAbility(deactivatedByTrigger);
			}
		}
		if (IsMarkToBreak)
		{
			TryPlayAnimation(BreakedAnimation);
			BreakAbility(breakedByTrigger);
		}




	
	// ...
}



bool UAbility::TryActivateAbility(TArray<FGameplayTag> CurrentTags, bool ByTrigger)
{
	bool canActivate = false;
	if (AbilityType != EAbilityType::AT_Passive)
	{


		if (!IsActivated)
		{

			if (!IsCooldown)
			{
				if (CurrentTags.Num() > 0)
				{
					TArray<FGameplayTag> AbilitiesTags = CurrentTags;
					if (AbilityActivateBlockingTags.Num() > 0)
					{
						if (!FGameplayTagContainer::CreateFromArray(AbilityActivateBlockingTags).HasAnyExact(FGameplayTagContainer::CreateFromArray(AbilitiesTags)))
						{

							bool RequirementsCompleted = false;
							if (AbilityActivateRequirementTags.Num() > 0)
							{
								if (FGameplayTagContainer::CreateFromArray(AbilityActivateRequirementTags).HasAnyExact(FGameplayTagContainer::CreateFromArray(AbilitiesTags)))
								{
									RequirementsCompleted = true;
								}
							}
							else
							{
								RequirementsCompleted = true;
							}

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

					else
					{

						canActivate = true;
					}
				}

				else
				{

					if (AbilityActivateRequirementTags.Num() > 0)
					{
						canActivate = false;
					}

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
			canActivate = false;
		}

		if (!ActivationCustomCheck())
		{
			canActivate = false;
		}

		if (canActivate)
		{
			if (!IsActivated)
			{

				canActivate = StatConsumption(false);
			}
		}


		if (canActivate)
		{
			ActivateAbility(ByTrigger);
			return true;
		}
		else
		{
			return false;
		}

	}
	else
	{
		return true;
	}
}



bool UAbility::StatConsumption(bool checkOnly)
{
	bool canactivate = true;
	if (StatsComponent)
	{
		TArray<FFinalAbilityCost> FinalCosts;
		FinalCosts.Empty();

		for (FStatsModifications Mod : StatsConsuption)
		{
			FFinalAbilityCost FinalCost;
			float CostValue = Mod.ModificationValue;

			if (StatsComponent->HasStat(Mod.Stat))
			{
				
				for (FStatsAffectingParameters AffectingStat : Mod.AffectingStats)
				{
					if (StatsComponent->HasStat(AffectingStat.affectingStatTag))
					{

						float mod = 0.0f;
						bool found = false;
						StatsComponent->GetStatSelectedValueByTag(AffectingStat.affectingStatTag, AffectingStat.affectingValue, found, mod);
						mod = mod * AffectingStat.affectingMultiplier;
						if (mod != 0.0f) {
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

		

				bool canApplyCost = false;
				float minValue = 0.0f;
				float value = 0.0f;
				bool found = false;
				StatsComponent->GetStatSelectedValueByTag(Mod.Stat, Mod.ValueType, found, value);
				StatsComponent->GetStatSelectedValueByTag(Mod.Stat, EStatValueType::SVT_MinCurrent, found, minValue);
				switch (Mod.ChangeType)
				{
				case EStatChangeType::SCT_Add:
					if((value + CostValue) >= minValue)
						canApplyCost = true;
					break;
				case EStatChangeType::SCT_Sub:
					if ((value - CostValue) >= minValue)
						canApplyCost = true;
					break;
				case EStatChangeType::SCT_Multiply:
					if ((value * CostValue) >= minValue)
						canApplyCost = true;
					break;
				case EStatChangeType::SCT_Divide:
					if ((value / CostValue) >= minValue)
						canApplyCost = true;
					break;
				case EStatChangeType::SCT_AddPercent:
					if ((value + (value /100)*CostValue) >= minValue)
						canApplyCost = true;
					break;
				case EStatChangeType::SCT_SubtractPercent:
					if ((value - (value / 100)*CostValue) >= minValue)
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

				canactivate = false;
			}
		}

		if(!checkOnly)
		{
			if (canactivate)
			{
				for (FFinalAbilityCost finalcost : FinalCosts)
				{				
				
					bool Modify;
					float deltaChangeValue;
					float ResultValue;
					FGameplayTag ChangedStat;
					StatsComponent->ModifyStat(GetOwner(), finalcost.Stat, finalcost.Cost, finalcost.ChangeType, finalcost.ValueType, GetOwner()->GetActorLocation(), Modify, deltaChangeValue, ResultValue, ChangedStat, finalcost.clear, finalcost.AdditionsTags);
					
				}

			}
		}
	}
	else
	{
		canactivate = false;

	}
	return canactivate;
}



void UAbility::ActivateAbility_Implementation(bool ByTrigger)
{
	if (IsActivated)
	{
		if (!IsChannelingTimeOunt)
		{
			IsCanFinished = false;
			IsMarkToDeactivate = false;
			IsTryMarkToDeactivate = false;
			ActivationTime = FDateTime::Now();
			CooldownTimePassed = 0.0f;
		}
	}
	else
	{
		CooldownTimePassed = 0.0f;
		AbilityActivityTime = 0.0f;
		Multiplier = CalculateAffectingParametersMultiplier(AbilityTimingsAffectingParameters);
		MultiplierCooldown = CalculateAffectingParametersMultiplier(CooldownRule.AffectingStats);
		IsActivated = true;

		if (GetNetMode() != NM_Client)
		{
			ActivateEffects();
		}

		IsChannelingTimeOunt = false;
		

		IsCanFinished = false;
		IsMarkToDeactivate = false;
		IsTryMarkToDeactivate = false;
		ActivationTime = FDateTime::Now();
		TryStartCooldown(false);

		

		if (ByTrigger)
		{
			AbilityActivatedByTrigger();
			if (GetNetMode() != NM_Client)
			{
				AbilityActivatedByTrigger_server();
			}
			if (OnAbilityActivatedByTrigger.IsBound())
			{
				OnAbilityActivatedByTrigger.Broadcast(this);
			}
		}
		else
		{
			AbilityActivated();
			if (GetNetMode() != NM_Client)
			{
				AbilityActivated_server();
			}
			if (OnAbilityActivated.IsBound())
			{
				OnAbilityActivated.Broadcast(this);
			}
		}

		if (GetNetMode() != NM_Client)
		{
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
	

}


void UAbility::StartCasting_Implementation()
{
	CastingPercent = 0.0f;
	CastingTimePassed = 0.0f;

	



	CastIsStarted();
	TryPlayAnimation(CastAnimation);
	if (GetNetMode() != NM_Client)
	{
		CastIsStarted_server();
	}
	if (CastingDuration <= 0.0f)
	{
		if (GetNetMode() != NM_Client)
			StartAction();
	}
	else
	{
		CastingTimePassed = 0.0f;
		IsCasting = true;
	}
}

void UAbility::StartAction_Implementation()
{
	ActionPercent = 0.0f;
	ActionTimePassed = 0.0f;
	IsCharging = false;
	IsChargingFinish = false;
	ActionIsStarted();
	TryPlayAnimation(ActionAnimation);
	if (GetNetMode() != NM_Client)
	{
		ActionIsStarted_server();
	}
	if (ActionDuration <= 0.0f)
	{
		if (GetNetMode() != NM_Client)
			FinishAction();
	}
	else
	{
		IsAction = true;
	}

}

void UAbility::FinishAction_Implementation()
{
	FinishPercent = 0.0f;
	FinishTimePassed = 0.0f;
	ActionIsFinished();
	TryPlayAnimation(FinishAnimation);
	if (GetNetMode() != NM_Client)
	{
		ActionIsFinished_server();
	}
	if (FinishDuration <= 0.0f)
	{
		if (IsMarkToDeactivate)
		{
			IsCanFinished = true;
		}
		else
		{
			if (GetNetMode() != NM_Client)
				DeactivateAbility(deactivatedByTrigger);
		}
	}
	else
	{
		IsFinish = true;
	}
}


void UAbility::StartChanelingCasting_Implementation()
{
	ChanelingCastingPercent = 0.0f;
	ChanelingCastingTimePassed = 0.0f;
	ChannelingCastingIsStarted();
	TryPlayAnimation(ChannelingCastAnimation);
	if (GetNetMode() != NM_Client)
	{
		ChannelingCastingIsStarted_server();
	}
	if (ChanelingCastingDuration <= 0.0f)
	{
		if (GetNetMode() != NM_Client)
			StartChanelingAction();
	}
	else
	{
		IsChanelingCasting = true;
	}
}

void UAbility::StartChanelingAction_Implementation()
{
	ChanelingActionPercent = 0.0f;
	ChanelingActionTimePassed = 0.0f;
	ChannelingActionIsStarted();
	TryPlayAnimation(ChannelingActionAnimation);
	if (GetNetMode() != NM_Client)
	{
		ChannelingActionIsStarted_server();
	}
	if (ChanelingActionDuration <= 0.0f)
	{
		if (GetNetMode() != NM_Client)
			StartFinishChanelingAction();
	}
	else
	{
		IsChanelingAction = true;
	}

}

void UAbility::StartFinishChanelingAction_Implementation()
{
	ChanelingActionFinishPercent = 0.0f;
	ChanelingActionFinishTimePassed = 0.0f;
	ChannelingActionIsFinished();
	TryPlayAnimation(ChannelingActionFinishAnimation);
	if (GetNetMode() != NM_Client)
	{
		ChannelingActionIsFinished_server();
	}
	if (ChanelingActionFinishDuration <= 0.0f)
	{
		if (IsMarkToDeactivate)
		{
			if (GetNetMode() != NM_Client)
				FinishChaneling();
		}
		else
		{

			if (StatConsumption(false))
			{
				Multiplier = CalculateAffectingParametersMultiplier(AbilityTimingsAffectingParameters);
				if (GetNetMode() != NM_Client)
					StartChanelingCasting();

			}
			else
			{
				if (GetNetMode() != NM_Client)
					FinishChaneling();
			}
		}
	}
	else
	{
		IsChanelingActionFinish = true;
	}
}

void UAbility::FinishChaneling_Implementation()
{
	ChanelingFinishPercent = 0.0f;
	ChanelingFinishTimePassed = 0.0f;
	ChannelingIsFinished();
	TryPlayAnimation(ChannelingFinishAnimation);
	if (GetNetMode() != NM_Client)
	{
		ChannelingIsFinished_server();
	}
	if (ChanelingFinishDuration <= 0.0f)
	{
		if (IsMarkToDeactivate)
		{
			IsCanFinished = true;
		}
		else
		{
			if (GetNetMode() != NM_Client)
				DeactivateAbility(deactivatedByTrigger);
		}
	}
	else
	{
		IsChanelingFinish = true;
	}
}




void UAbility::StartCharge_Implementation()
{
	ChargingTimePassed = 0.0f;
	ChargeIsStarted();
	TryPlayAnimation(ChargeAnimation);
	if (GetNetMode() != NM_Client)
	{
		ChargeIsStarted_server();
	}
	if (ChargeDuration > 0.0f)
	{
		IsCharging = true;
	}
	else
	{
		if (GetNetMode() != NM_Client)
			FinishCharge();
	}

}

void UAbility::FinishCharge_Implementation()
{
	ChargingFinishedTimePassed = 0.0f;
	ChargeIsFinished();
	TryPlayAnimation(ChargeFinishAnimation);
	if (GetNetMode() != NM_Client)
	{
		ChargeIsFinished_server();
	}
	IsCharging = false;
	IsChargingFinish = true;


}



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
						if (FGameplayTagContainer::CreateFromArray(AbilityActivateEffectsTags).HasAnyExact(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
						{
							Effect->ActivateEffectAll();
						}
					}
					
				}
			}
		}
	}

}

bool UAbility::TryDeactivateAbility(bool ByTrigger)
{
	
	if (IsActivated)
	{
		deactivatedByTrigger = ByTrigger;

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

bool UAbility::TryBreakAbility(bool ByTrigger)
{
	
	if (IsActivated)
	{
		breakedByTrigger = ByTrigger;

		IsMarkToBreak = true;


		return true;
	}
	else
	{
		return false;
	}
}


void UAbility::DeactivateAbility(bool ByTrigger)
{
	IsMarkToDeactivate = false;
	IsActivated = false;
	DeactivationTime = FDateTime::Now();
	ChargingTimePassed = 0.0f;
	ChargingFinishedTimePassed = 0.0f;

	DeactivateEffects();
	
	TryStartCooldown(true);
	deactivatedByTrigger = false;
	

	if (ByTrigger)
	{
		AbilityDeactivatedByTrigger();
		if (OnAbilityDeactivatedByTrigger.IsBound())
		{
			OnAbilityDeactivatedByTrigger.Broadcast(this);
		}
	}
	else
	{
		AbilityDeactivated();
		if (OnAbilityDeactivated.IsBound())
		{
			OnAbilityDeactivated.Broadcast(this);
		}
	}
	if (IsMarkToDestroy)
	{
		DestroyAbility();
	}
}

void UAbility::BreakAbility(bool ByTrigger)
{
	IsActivated = false;
	DeactivationTime = FDateTime::Now();
	IsTryMarkToDeactivate = false;
	IsMarkToDeactivate = false;
	IsMarkToBreak = false;
	
	IsCasting = false;
	IsAction = false;
	IsFinish = false;
	IsCanFinished = false;
	CastingTimePassed = 0.0f;
	CastingTimePassed = 0.0f;
	FinishTimePassed = 0.0f;

	IsChanelingCasting = false;
	IsChanelingAction = false;
	IsChanelingActionFinish = false;
	IsChanelingFinish = false;
	IsChannelingTimeOunt = false;
	ChanelingCastingTimePassed = 0.0f;
	ChanelingActionTimePassed = 0.0f;
	ChanelingActionFinishTimePassed = 0.0f;
	ChanelingFinishTimePassed = 0.0f;



	IsCharging = false;
	IsChargingFinish = false;
	ChargingTimePassed = 0.0f;
	ChargingFinishedTimePassed = 0.0f;
	

	DeactivateEffects();
	
	
	if (breakedByTrigger)
	{
		AbilityBreakedByTrigger();
		if (OnAbilityBreakedByTrigger.IsBound())
		{
			OnAbilityBreakedByTrigger.Broadcast(this);
		}
		if (GetNetMode() != NM_Client)
		{
			AbilityBreakedByTrigger_server();
		}
	}
	else
	{
		AbilityBreaked();
		if (OnAbilityBreaked.IsBound())
		{
			OnAbilityBreaked.Broadcast(this);
		}
		if (GetNetMode() != NM_Client)
		{
			AbilityBreaked_server();
		}
	}

	TryStartCooldown(true);
	

	if (IsMarkToDestroy) 
	{
		DestroyAbility();
	}
}

void UAbility::AI_CanActivate_Implementation(FGameplayTagContainer CurrentTags, bool & IsCanActivate)
{
	bool canActivate = false;
	if (!IsActivated)
	{

		if (!IsCooldown)
		{
			if (CurrentTags.Num() > 0)
			{
				FGameplayTagContainer AbilitiesTags = CurrentTags;
				if (AbilityActivateBlockingTags.Num() > 0)
				{
					if (!FGameplayTagContainer::CreateFromArray(AbilityActivateBlockingTags).HasAnyExact(AbilitiesTags))
					{

						bool RequirementsCompleted = false;
						if (AbilityActivateRequirementTags.Num() > 0)
						{
							if (FGameplayTagContainer::CreateFromArray(AbilityActivateRequirementTags).HasAnyExact(AbilitiesTags))
							{
								RequirementsCompleted = true;
							}
						}
						else
						{
							RequirementsCompleted = true;
						}

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

				else
				{

					canActivate = true;
				}
			}

			else
			{

				if (AbilityActivateRequirementTags.Num() > 0)
				{
					canActivate = false;
				}

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
		canActivate = false;
	}


	if (!ActivationCustomCheck())
	{
		canActivate = false;
	}

	UActorComponent* Component = GetOwner()->GetComponentByClass(UAI_Sight::StaticClass());
	if (Component)
	{
		UAI_Sight* SightComponent = Cast<UAI_Sight>(Component);


		switch (AI_AbilityTarget)
		{
		case EAITarget::AT_Enemy:
			if (!SightComponent->TargetEnemy)
			{
				canActivate = false;
			}
			else
			{
				if(GetOwner()->GetDistanceTo(SightComponent->TargetEnemy)>= AI_AbilityDistance)
					canActivate = false;
			}
			break;
		case EAITarget::AT_Friend:
			if (!SightComponent->TargetFriend)
			{
				canActivate = false;
			}
			else
			{
				if (GetOwner()->GetDistanceTo(SightComponent->TargetFriend) >= AI_AbilityDistance)
					canActivate = false;
			}
			break;
		default:
			break;
		}
	}

	if (canActivate)
	{
		if (!IsActivated)
		{

			canActivate = StatConsumption(false);
		}
	}
	

	if (canActivate)
	{
		if (!IsActivated)
		{

			canActivate = StatConsumption(true);
		}
	}


	IsCanActivate = canActivate;

}





void UAbility::IsCanActivate_Implementation(FGameplayTagContainer CurrentTags, bool & IsCanActivate)
{
	bool canActivate = false;
	if (!IsActivated)
	{

		if (!IsCooldown)
		{
			if (CurrentTags.Num() > 0)
			{
				FGameplayTagContainer AbilitiesTags = CurrentTags;
				if (AbilityActivateBlockingTags.Num() > 0)
				{
					if (!FGameplayTagContainer::CreateFromArray(AbilityActivateBlockingTags).HasAnyExact(AbilitiesTags))
					{

						bool RequirementsCompleted = false;
						if (AbilityActivateRequirementTags.Num() > 0)
						{
							if (FGameplayTagContainer::CreateFromArray(AbilityActivateRequirementTags).HasAnyExact(AbilitiesTags))
							{
								RequirementsCompleted = true;
							}
						}
						else
						{
							RequirementsCompleted = true;
						}

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

				else
				{

					canActivate = true;
				}
			}

			else
			{

				if (AbilityActivateRequirementTags.Num() > 0)
				{
					canActivate = false;
				}

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
		canActivate = false;
	}


	if (!ActivationCustomCheck())
	{
		canActivate = false;
	}

	

	if (canActivate)
	{
		if (!IsActivated)
		{

			canActivate = StatConsumption(true);
		}
	}


	


	IsCanActivate = canActivate;

}


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
						if (FGameplayTagContainer::CreateFromArray(AbilityActivateEffectsTags).HasAnyExact(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
						{
							Effect->DeactivateEffectAll();
						}
					}
				}
			}
		}
	}
}



void UAbility::AnotherAbilityActivated(UAbility* ActivatedAbility)
{
	OnAnotherAbilityActivation(ActivatedAbility);
	FGameplayTagContainer Tags = FGameplayTagContainer::CreateFromArray(ActivatedAbility->AbilityTags);
	Tags.AppendTags(FGameplayTagContainer::CreateFromArray(ActivatedAbility->OnActivatedAbilityTags));
		if (Tags.Num() > 0)
		{
			
			if (!DeactivateAbilityByTrigger(Tags))
			ActivateAbilityByTrigger(Tags);
		}
}

void UAbility::OwnerStatChanged(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, FVector FromLocation, float deltaChange, float NewValue)
{		
	OnOwnerStatModification(ModificationIniciator, ModificationTargert, tag, AdditinsTags, deltaChange, NewValue);
	FGameplayTagContainer TempContainer = AdditinsTags;
	TempContainer.AddTag(tag);
	if (!DeactivateAbilityByTrigger(TempContainer))
			ActivateAbilityByTrigger(TempContainer);
}

void UAbility::TargetStatChanged(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, FVector FromLocation, float deltaChange, float NewValue)
{
	OnTargetStatModification(ModificationIniciator, ModificationTargert, tag, AdditinsTags, deltaChange, NewValue);
	FGameplayTagContainer TempContainer = AdditinsTags;
	TempContainer.AddTag(tag);
	if (!DeactivateAbilityByTrigger(TempContainer))
		ActivateAbilityByTrigger(TempContainer);
}


void UAbility::AnotherActorEffectAplicated(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnAnotherActorEffectAplicated(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		TArray<FGameplayTag> tags = Effect->EffectInfoTag;
		tags.Add(Effect->EffectTag);
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(tags)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(tags));
	}
}

void UAbility::OwnerEffectAplicated(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnOwnerEffectAplicated(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		TArray<FGameplayTag> tags = Effect->EffectInfoTag;
		tags.Add(Effect->EffectTag);
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(tags)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(tags));
	}
}

void UAbility::AnotherActorEffectRemoved(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnAnotherActorEffectRemoved(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		TArray<FGameplayTag> tags = Effect->EffectInfoTag;
		tags.Add(Effect->EffectTag);
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(tags)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(tags));
	}
}


void UAbility::OwnerEffectRemoved(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnOwnerEffectRemoved(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		TArray<FGameplayTag> tags = Effect->EffectInfoTag;
		tags.Add(Effect->EffectTag);
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(tags)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(tags));
	}
}


bool UAbility::ActivateAbilityByTrigger(FGameplayTagContainer Tags)
{
	bool activated = false;
	if (AbilityActivateTriggerTags.Num() > 0)
	{
		if (FGameplayTagContainer::CreateFromArray(AbilityActivateTriggerTags).HasAnyExact(Tags))
		{

			activated = TryActivateAbility(GetAbilitiesAndEffectsTags(), true);
		}
	}
	return activated;
}

bool UAbility::DeactivateAbilityByTrigger(FGameplayTagContainer Tags)
{
	bool deactivated = false;

	if (AbilityBreakTriggerTags.Num() > 0)
	{
		if (FGameplayTagContainer::CreateFromArray(AbilityBreakTriggerTags).HasAnyExact(Tags))
		{
			deactivated = TryBreakAbility(true);
			
		}
	}

	if (AbilityDeactivateTriggerTags.Num() > 0)
	{
		if (FGameplayTagContainer::CreateFromArray(AbilityDeactivateTriggerTags).HasAnyExact(Tags))
		{
			deactivated = TryDeactivateAbility(true);
		}
	}

	return deactivated;
}




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
					CooldownSpeed = CooldownSpeed - mod;
					break;
				case EStatChangeType::SCT_Sub:
					CooldownSpeed = CooldownSpeed + mod;
					break;
				case EStatChangeType::SCT_Multiply:
					CooldownSpeed = CooldownSpeed / mod;
					break;
				case EStatChangeType::SCT_Divide:
					CooldownSpeed = CooldownSpeed * mod;
					break;
				case EStatChangeType::SCT_AddPercent:
					CooldownSpeed = CooldownSpeed - ((CooldownSpeed / 100) * mod);
					break;
				case EStatChangeType::SCT_SubtractPercent:
					CooldownSpeed = CooldownSpeed + ((CooldownSpeed / 100) * mod);
					break;
				default:
					break;
				}
			}
		}
	}

	return CooldownSpeed;
}

float UAbility::CalculateAffectingParametersMultiplier(TArray<FStatsAffectingParameters> affectingParameters)
{
	float CooldownSpeed = 1.0f;
	for (FStatsAffectingParameters AffectingStat : affectingParameters)
	{
		if (StatsComponent)
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
	}

	return CooldownSpeed;
}




TArray<FGameplayTag> UAbility::GetAbilitiesAndEffectsTags()
{
	TArray<FGameplayTag> AbilitiesAndEffectsTags;
	TArray<UActorComponent*> FindedComponents = GetOwner()->GetComponentsByClass(UAbility::StaticClass());
	if (FindedComponents.Num() > 0)
	{
		for (UActorComponent* Component : FindedComponents)
		{
			UAbility* ability = Cast<UAbility>(Component);
			if (ability)
			{
				AbilitiesAndEffectsTags.Append(ability->AbilityTags);
				if (ability->IsActivated)
				{
					AbilitiesAndEffectsTags.Append(ability->OnActivatedAbilityTags);
				}
			}
		}
	}
	if (GetOwner())
	{
		TArray<AActor*> ChildActors;
		ChildActors.Empty();
		this->GetOwner()->GetAttachedActors(ChildActors);
		for (AActor* ChildActor : ChildActors)
		{
			AStats_Effect_Base* EffectBase = Cast<AStats_Effect_Base>(ChildActor);
			if (EffectBase)
			{
				AbilitiesAndEffectsTags.Add(EffectBase->EffectTag);
				if (EffectBase->EffectInfoTag.Num() > 0)
				{
					AbilitiesAndEffectsTags.Append(EffectBase->EffectInfoTag);
				}
			}
		}
	}
	return AbilitiesAndEffectsTags;
}




void UAbility::TryDestroyAbility(bool force)
{
	IsMarkToDestroy = true;
	if (IsActivated)
	{
		if (force)
		{
			TryBreakAbility(false);
			
		}
		else
		{
			TryDeactivateAbility(false);
		}
	}
	else
	{
		DestroyAbility();
	}

}

void UAbility::DestroyAbility()
{
	if (StatsComponent)
	{
		for (FAbilityAddStat NewStat : AdditionStats)
		{
			StatsComponent->RemoveStat(NewStat.Stat);
		}
	}

	UnregisterComponent();
	DestroyComponent();
	SetActive(false);
}

bool UAbility::ActivationCustomCheck_Implementation()
{
	return true;
}










bool UAbility::TryPlayAnimation(FAbilityAnimation animation)
{

	ACharacter* parentCharacter = Cast<ACharacter>(GetOwner());
	if (parentCharacter)
	{
		UStats_AnimInstance* AnimationInstance = Cast<UStats_AnimInstance>(parentCharacter->GetMesh()->GetAnimInstance());
		if (AnimationInstance)
		{

			AnimationInstance->PlayMontageByTag(animation.AnimationTag, animation.AnimationLength*Multiplier);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}



}




void UAbility::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
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
	DOREPLIFETIME(UAbility, IsMarkToBreak);
	DOREPLIFETIME(UAbility, IsChannelingTimeOunt);

	DOREPLIFETIME(UAbility, StatsComponent);
}