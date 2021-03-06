// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnumsObject.generated.h"

/**
 * 
 */

UENUM(BlueprintType, Category = "")
enum class EDirrection : uint8
{
	D_Forward					UMETA(DisplayName = "Forward"),
	D_Back						UMETA(DisplayName = "Back"),
	D_Right						UMETA(DisplayName = "Right"),
	D_Left						UMETA(DisplayName = "Left"),

};

UENUM(BlueprintType, Category = "")
enum class EStatChangeType : uint8
{
	SCT_Add 					UMETA(DisplayName = "Add"),
	SCT_Sub 					UMETA(DisplayName = "Subtract"),
	SCT_Multiply 				UMETA(DisplayName = "Multiply"),
	SCT_Divide 					UMETA(DisplayName = "Divide"),
	SCT_AddPercent 				UMETA(DisplayName = "AddPercent"),
	SCT_SubtractPercent 		UMETA(DisplayName = "SubtractPercent"),
	SCT_SetValue				UMETA(DisplayName = "SetValue"),

};

UENUM(BlueprintType)
enum class ERegenRule : uint8
{
	RR_ConstantRegen 			UMETA(DisplayName = "Constant"),
	RR_PauseRegenAfterModify 	UMETA(DisplayName = "PauseRegenAfterModify"),
};

UENUM(BlueprintType)
enum class EStatValueType : uint8
{
	SVT_Base 					UMETA(DisplayName = "Base"),
	SVT_Current 				UMETA(DisplayName = "Current"),
	SVT_RegenBase				UMETA(DisplayName = "RegenBase"),
	SVT_RegenCurrent			UMETA(DisplayName = "RegenCurrent"),
	SVT_MaxBase					UMETA(DisplayName = "MaxBase"),
	SVT_MaxCurrent				UMETA(DisplayName = "MaxCurrent"),
	SVT_MinBase					UMETA(DisplayName = "MinBase"),
	SVT_MinCurrent				UMETA(DisplayName = "MinCurrent"),
};

UENUM(BlueprintType)
enum class EReactRule : uint8
{
	RR_Frieds 					UMETA(DisplayName = "Friends"),
	RR_Enemys 					UMETA(DisplayName = "Enemys"),
	RR_Neutrals 				UMETA(DisplayName = "Neutrals "),
	RR_Other					UMETA(DisplayName = "Other"),
};

UENUM(BlueprintType)
enum class EStackRules : uint8
{
	SR_EachStackHasItsOwnTime 	UMETA(DisplayName = "EachStackHasItsOwnTime"),
	SR_AllStacksHaveATotalTime 	UMETA(DisplayName = "AllStacksHaveATotalTime"),
	SR_NewStackReplacesOld 		UMETA(DisplayName = "NewStackReplacesOld"),
	SR_NewStackNotReplacesOld 	UMETA(DisplayName = "NewStackNotReplacesOld"),
};

UENUM(BlueprintType)
enum class EStackCountRules : uint8
{
	SCR_ReplaceTheOldest		UMETA(DisplayName = "ReplaceTheOldest"),
	SCR_ReplaceTheNewest		UMETA(DisplayName = "ReplaceTheNewest"),
	SCR_None					UMETA(DisplayName = "None"),

};

UENUM(BlueprintType)
enum class ESpellBaseType : uint8
{
	SBT_SpellSpawner			UMETA(DisplayName = "SpawnSpellSpawner"),
	SBT_Projectile 				UMETA(DisplayName = "SpawnProjectile"),
};

UENUM(BlueprintType)
enum class ESpellActiveType : uint8
{
	SAT_OneClick				UMETA(DisplayName = "OneClick"),
	SAT_KeyHold					UMETA(DisplayName = "KeyHold"),
	SAT_KeyHoldOrFastClicks		UMETA(DisplayName = "KeyHoldOrFastClicks"),
};

UENUM(BlueprintType)
enum class EEffectModifyType : uint8
{
	EMT_Permanent				UMETA(DisplayName = "Permanent"),
	EMT_Temporary				UMETA(DisplayName = "Temporary"),
};

UENUM(BlueprintType, Category = "")
enum class EAbilityRearmRule : uint8
{
	ARR_NoRearm 						UMETA(DisplayName = "NoCooldown"),
	ARR_RearmAfterAbilityFinishWork		UMETA(DisplayName = "StartCooldownAfterAbilityFinishWork"),
	ARR_RearmAfterAbilityStartWork		UMETA(DisplayName = "StartCooldownAfterAbilityStartWork"),
};

UENUM(BlueprintType, Category = "")
enum class EAbilityActivationRule : uint8
{
	AAR_OneClick				UMETA(DisplayName = "OneClick"),
	AAR_KeyHold					UMETA(DisplayName = "KeyHold"),
	AAR_KeyHoldOrClicks			UMETA(DisplayName = "KeyHoldOrClicks"),
};

UENUM(BlueprintType, Category = "")
enum class EAbilityType : uint8
{
	AT_OnClickActivation			UMETA(DisplayName = "OneClick"),
	AT_OnClickChanneling			UMETA(DisplayName = "OnClickChanneling"),
	AT_OnHoldChanneling				UMETA(DisplayName = "OnHoldChanneling"),
	AT_OnHoldCharge					UMETA(DisplayName = "OnHoldCharge"),
	AT_Passive						UMETA(DisplayName = "Passive	"),
};

UCLASS()
class STATSPLUGIN_API UEnumsObject : public UObject
{
	GENERATED_BODY()
	
};


