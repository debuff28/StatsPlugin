// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnumsObject.h"
#include "GameplayTagContainer.h"
#include "StructsObject.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FStatsAffectingParameters
{
	GENERATED_USTRUCT_BODY()

	/**
	Stat tag which affects to modification
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		FGameplayTag affectingStatTag;
	/**
	How do we affecting to modification
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		EStatChangeType affectingType;
	/**
	What value is affecting
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		EStatValueType affectingValue;
	/**
	affecting multiplier
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		float affectingMultiplier;
};

USTRUCT(BlueprintType)
struct FZoneAplicatedEffects
{
	GENERATED_USTRUCT_BODY()

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		AActor* TargetActor;
	/**
	How do we affecting to modification
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		TArray<AActor*> AplicatedEffects;
	
};




USTRUCT()
struct FReplicateTmapSupportStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
		FGameplayTag  tag;

	UPROPERTY(EditAnywhere)
		float StatBaseValue;

	UPROPERTY(EditAnywhere)
		float StatCurrentValue;

	UPROPERTY(EditAnywhere)
		float StatRegenBaseValue;

	UPROPERTY(EditAnywhere)
		float StatRegenCurrentValue;

	UPROPERTY(EditAnywhere)
		float StatMaxBaseValue;

	UPROPERTY(EditAnywhere)
		float StatMaxCurrentValue;

	UPROPERTY(EditAnywhere)
		float StatMinBaseValue;

	UPROPERTY(EditAnywhere)
		float StatMinCurrentValue;

	UPROPERTY(EditAnywhere)
		ERegenRule regenRule;

	UPROPERTY(EditAnywhere)
		float RegenPauseLenght;

	UPROPERTY(EditAnywhere)
		bool StopRegenOnMinValue;

	UPROPERTY(EditAnywhere)
		FDateTime PauseTime;
	UPROPERTY(EditAnywhere)
		bool RegenIsStoped;
};

USTRUCT(BlueprintType)
struct FStatsDatabase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsDatabase")
		float StatBaseValue = 0;

	UPROPERTY(BlueprintReadWrite, Category = "StatsDatabase||")
		float StatCurrentValue = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsDatabase")
		float StatRegenBaseValue = 0;

	UPROPERTY(BlueprintReadWrite, Category = "StatsDatabase||")
		float StatRegenCurrentValue = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsDatabase")
		float StatMaxBaseValue = 0;

	UPROPERTY(BlueprintReadWrite, Category = "StatsDatabase||")
		float StatMaxCurrentValue = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsDatabase")
		float StatMinBaseValue = 0;

	UPROPERTY(BlueprintReadWrite, Category = "StatsDatabase||")
		float StatMinCurrentValue = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsDatabase")
		ERegenRule regenRule = ERegenRule::RR_ConstantRegen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsDatabase")
		float RegenPauseLenght = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsDatabase")
		bool StopRegenOnMinValue = false;

	UPROPERTY(BlueprintReadWrite, Category = "StatsDatabase||")
		FDateTime PauseTime;

	UPROPERTY(BlueprintReadWrite, Category = "StatsDatabase||")
		bool RegenIsStoped = false;

	UPROPERTY(BlueprintReadOnly, Category = "StatsDatabase||")
		bool ValueWasChanged = false;

	void InitStat()
	{
		ValueWasChanged = true;
		StatMaxCurrentValue = StatMaxBaseValue;
		StatMinCurrentValue = StatMinBaseValue;
		StatCurrentValue = FMath::Clamp(StatBaseValue, StatMinBaseValue, StatMaxBaseValue);
		StatRegenCurrentValue = FMath::Clamp(StatRegenBaseValue, StatMaxBaseValue * -0.1f, StatMaxBaseValue);
	}

	void setRegenIsStoped(bool Enable)
	{
		RegenIsStoped = !Enable;
	}

	void Regen(float deltatime)
	{
		if (StatRegenCurrentValue != 0)
		{
			if (!RegenIsStoped)
			{
				switch (regenRule)
				{
				case ERegenRule::RR_ConstantRegen:
					StatCurrentValue = FMath::Clamp(StatCurrentValue + (StatRegenCurrentValue*deltatime), StatMinCurrentValue, StatMaxCurrentValue);
					ValueWasChanged = true;
					break;
				case ERegenRule::RR_PauseRegenAfterModify:
					if ((FDateTime::Now().operator-(PauseTime)).GetTotalMilliseconds() > RegenPauseLenght)
					{
						StatCurrentValue = FMath::Clamp(StatCurrentValue + (StatRegenCurrentValue*deltatime), StatMinCurrentValue, StatMaxCurrentValue);
						ValueWasChanged = true;
					}
					break;
				default:
					break;
				}
			}

		}
	}

	float GetValue(EStatValueType ValueType)
	{
		float value = 0.0f;
		switch (ValueType)
		{
		case EStatValueType::SVT_Base:
			value = StatBaseValue;
			break;
		case EStatValueType::SVT_Current:
			value = StatCurrentValue;
			break;
		case EStatValueType::SVT_RegenBase:
			value = StatRegenBaseValue;
			break;
		case EStatValueType::SVT_RegenCurrent:
			value = StatRegenCurrentValue;
			break;
		case EStatValueType::SVT_MaxBase:
			value = StatMaxBaseValue;
			break;
		case EStatValueType::SVT_MaxCurrent:
			value = StatMaxCurrentValue;
			break;
		case EStatValueType::SVT_MinBase:
			value = StatMinBaseValue;
			break;
		case EStatValueType::SVT_MinCurrent:
			value = StatMinCurrentValue;
			break;
		default:
			value = 0.0f;
			break;
		}
		return value;
	}

	void SetValue(EStatValueType ValueType, float NewValue)
	{
		PauseTime = FDateTime::Now();
		ValueWasChanged = true;
		switch (ValueType)
		{
		case EStatValueType::SVT_Base:
			StatBaseValue = FMath::Clamp(NewValue, StatMinBaseValue, StatMaxBaseValue);
			break;
		case EStatValueType::SVT_Current:
			StatCurrentValue = FMath::Clamp(NewValue, StatMinCurrentValue, StatMaxCurrentValue);
			break;
		case EStatValueType::SVT_RegenBase:
			StatRegenBaseValue = FMath::Clamp(NewValue, StatMaxBaseValue * -1, StatMaxBaseValue);
			break;
		case EStatValueType::SVT_RegenCurrent:
			StatRegenCurrentValue = FMath::Clamp(NewValue, StatMaxCurrentValue * -1, StatMaxCurrentValue);
			break;
		case EStatValueType::SVT_MaxBase:
			StatMaxBaseValue = NewValue;
			break;
		case EStatValueType::SVT_MaxCurrent:
			StatMaxCurrentValue = NewValue;
			break;
		case EStatValueType::SVT_MinBase:
			StatMinBaseValue = NewValue;
			break;
		case EStatValueType::SVT_MinCurrent:
			StatMinCurrentValue = NewValue;
			break;
		default:
			break;
		}

	}

};

USTRUCT(BlueprintType)
struct FInputModifyRetargeting
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatRetarget")
		FGameplayTag  InputModifyTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatRetarget")
		FGameplayTag  RetargetModifyTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatRetarget")
		TArray<EStatValueType> RetargetValues;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatRetarget")
		float RetargetModifyMultiplier;
};

USTRUCT(BlueprintType)
struct FStatInputModifyAffects
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatAffects", meta = (DisplayName = "ModifyTags_InputOrAdiitions"))
		TArray <FGameplayTag>  InputModifyTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatAffects")
		TArray <FStatsAffectingParameters>  Affects;

};

USTRUCT(BlueprintType)
struct FStatsModifications
{
	GENERATED_USTRUCT_BODY()
	/**
	Stat tag to modification
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsModifications")
		FGameplayTag Stat;
	/**
	modification value
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsModifications")
		float ModificationValue;
	/**
	How to change
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsModifications")
		EStatChangeType ChangeType;
	/**
	What value is changing
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsModifications")
		EStatValueType ValueType;
	/**
	What stats and how do they affect the modification. From owners stats.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsModifications")
		TArray<FStatsAffectingParameters> AffectingStats;
	/**
	apply standard damage if there is no StatsComponent
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsModifications")
		bool ApplyDamageIfNotFoundStatsComponent;

	/**
	Target actor stats affect to stat modification
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsModifications")
		bool ClearChange;
	/**
	Addition info like Fire\Ice Damage, Heal, buff, etc
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsModifications", meta = (DisplayName = "AdditionTags"))
		TArray<FGameplayTag> AdditionInfoTags;
};

USTRUCT(BlueprintType)
struct FAbilityAffects
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityAffect")
		FGameplayTag  AbilityStat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityAffect")
		FGameplayTag  OwnerStat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityAffect")
		EStatChangeType ChangeType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityAffect")
		float AffectMultiplier;
};

USTRUCT(BlueprintType)
struct FAbilityCooldown
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityAffect")
		float  CooldownDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityAffect")
		EAbilityRearmRule Rule;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsModifications")
		TArray<FStatsAffectingParameters> AffectingStats;
};


UCLASS()
class STATSPLUGIN_API UStructsObject : public UObject
{
	GENERATED_BODY()
	
};
