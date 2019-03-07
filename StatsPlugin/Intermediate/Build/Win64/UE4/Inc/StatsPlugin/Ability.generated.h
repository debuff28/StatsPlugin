// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayTagContainer;
class UAbility;
class AStats_Effect_Base;
class AActor;
struct FStatsAffectingParameters;
#ifdef STATSPLUGIN_Ability_generated_h
#error "Ability.generated.h already included, missing '#pragma once' in Ability.h"
#endif
#define STATSPLUGIN_Ability_generated_h

#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFinalAbilityCost_Statics; \
	STATSPLUGIN_API static class UScriptStruct* StaticStruct();


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityAddStat_Statics; \
	STATSPLUGIN_API static class UScriptStruct* StaticStruct();


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_77_DELEGATE \
struct _Script_StatsPlugin_eventStatModificationDelegate_Parms \
{ \
	FGameplayTag tag; \
	FGameplayTagContainer AdditinsTags; \
	float deltaChange; \
}; \
static inline void FStatModificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StatModificationDelegate, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange) \
{ \
	_Script_StatsPlugin_eventStatModificationDelegate_Parms Parms; \
	Parms.tag=tag; \
	Parms.AdditinsTags=AdditinsTags; \
	Parms.deltaChange=deltaChange; \
	StatModificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_76_DELEGATE \
struct _Script_StatsPlugin_eventAbilityActivationDelegate_Parms \
{ \
	UAbility* ActivatedAbility; \
}; \
static inline void FAbilityActivationDelegate_DelegateWrapper(const FMulticastScriptDelegate& AbilityActivationDelegate, UAbility* ActivatedAbility) \
{ \
	_Script_StatsPlugin_eventAbilityActivationDelegate_Parms Parms; \
	Parms.ActivatedAbility=ActivatedAbility; \
	AbilityActivationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnotherActorEffectRemoved) \
	{ \
		P_GET_OBJECT(AStats_Effect_Base,Z_Param_Effect); \
		P_GET_OBJECT(AActor,Z_Param_EffectOnActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnotherActorEffectRemoved(Z_Param_Effect,Z_Param_EffectOnActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOwnerEffectRemoved) \
	{ \
		P_GET_OBJECT(AStats_Effect_Base,Z_Param_Effect); \
		P_GET_OBJECT(AActor,Z_Param_EffectOnActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OwnerEffectRemoved(Z_Param_Effect,Z_Param_EffectOnActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnotherActorEffectAplicated) \
	{ \
		P_GET_OBJECT(AStats_Effect_Base,Z_Param_Effect); \
		P_GET_OBJECT(AActor,Z_Param_EffectOnActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnotherActorEffectAplicated(Z_Param_Effect,Z_Param_EffectOnActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOwnerEffectAplicated) \
	{ \
		P_GET_OBJECT(AStats_Effect_Base,Z_Param_Effect); \
		P_GET_OBJECT(AActor,Z_Param_EffectOnActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OwnerEffectAplicated(Z_Param_Effect,Z_Param_EffectOnActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTargetStatChanged) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ModificationIniciator); \
		P_GET_OBJECT(AActor,Z_Param_ModificationTargert); \
		P_GET_STRUCT(FGameplayTag,Z_Param_tag); \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AdditinsTags); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaChange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TargetStatChanged(Z_Param_ModificationIniciator,Z_Param_ModificationTargert,Z_Param_tag,Z_Param_AdditinsTags,Z_Param_deltaChange,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOwnerStatChanged) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ModificationIniciator); \
		P_GET_OBJECT(AActor,Z_Param_ModificationTargert); \
		P_GET_STRUCT(FGameplayTag,Z_Param_tag); \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AdditinsTags); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaChange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OwnerStatChanged(Z_Param_ModificationIniciator,Z_Param_ModificationTargert,Z_Param_tag,Z_Param_AdditinsTags,Z_Param_deltaChange,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnotherAbilityActivated) \
	{ \
		P_GET_OBJECT(UAbility,Z_Param_ActivatedAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnotherAbilityActivated(Z_Param_ActivatedAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BreakAbility(Z_Param_ByTrigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateAbility(Z_Param_ByTrigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateAbilityByTrigger) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Tags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeactivateAbilityByTrigger(Z_Param_Tags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateAbilityByTrigger) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Tags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ActivateAbilityByTrigger(Z_Param_Tags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbilitiesAndEffectsTags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetAbilitiesAndEffectsTags(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryStartCooldown) \
	{ \
		P_GET_UBOOL(Z_Param_CallAfterAbilityFinish); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryStartCooldown(Z_Param_CallAfterAbilityFinish); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateSpeedOnAffectingParameters) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CurrentDeltaTime); \
		P_GET_TARRAY(FStatsAffectingParameters,Z_Param_affectingParameters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateSpeedOnAffectingParameters(Z_Param_CurrentDeltaTime,Z_Param_affectingParameters); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStatConsumption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StatConsumption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishCharge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCharge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishChaneling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishChaneling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFinishChanelingAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFinishChanelingAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartChanelingAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartChanelingAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartChanelingCasting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartChanelingCasting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCasting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCasting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateAbility(Z_Param_ByTrigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyAbility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDestroyAbility) \
	{ \
		P_GET_UBOOL(Z_Param_force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryDestroyAbility(Z_Param_force); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryBreakAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryBreakAbility(Z_Param_ByTrigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDeactivateAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryDeactivateAbility(Z_Param_ByTrigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivateAbility) \
	{ \
		P_GET_TARRAY(FGameplayTag,Z_Param_CurrentTags); \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryActivateAbility(Z_Param_CurrentTags,Z_Param_ByTrigger); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnotherActorEffectRemoved) \
	{ \
		P_GET_OBJECT(AStats_Effect_Base,Z_Param_Effect); \
		P_GET_OBJECT(AActor,Z_Param_EffectOnActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnotherActorEffectRemoved(Z_Param_Effect,Z_Param_EffectOnActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOwnerEffectRemoved) \
	{ \
		P_GET_OBJECT(AStats_Effect_Base,Z_Param_Effect); \
		P_GET_OBJECT(AActor,Z_Param_EffectOnActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OwnerEffectRemoved(Z_Param_Effect,Z_Param_EffectOnActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnotherActorEffectAplicated) \
	{ \
		P_GET_OBJECT(AStats_Effect_Base,Z_Param_Effect); \
		P_GET_OBJECT(AActor,Z_Param_EffectOnActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnotherActorEffectAplicated(Z_Param_Effect,Z_Param_EffectOnActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOwnerEffectAplicated) \
	{ \
		P_GET_OBJECT(AStats_Effect_Base,Z_Param_Effect); \
		P_GET_OBJECT(AActor,Z_Param_EffectOnActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OwnerEffectAplicated(Z_Param_Effect,Z_Param_EffectOnActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTargetStatChanged) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ModificationIniciator); \
		P_GET_OBJECT(AActor,Z_Param_ModificationTargert); \
		P_GET_STRUCT(FGameplayTag,Z_Param_tag); \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AdditinsTags); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaChange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TargetStatChanged(Z_Param_ModificationIniciator,Z_Param_ModificationTargert,Z_Param_tag,Z_Param_AdditinsTags,Z_Param_deltaChange,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOwnerStatChanged) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ModificationIniciator); \
		P_GET_OBJECT(AActor,Z_Param_ModificationTargert); \
		P_GET_STRUCT(FGameplayTag,Z_Param_tag); \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AdditinsTags); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaChange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OwnerStatChanged(Z_Param_ModificationIniciator,Z_Param_ModificationTargert,Z_Param_tag,Z_Param_AdditinsTags,Z_Param_deltaChange,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnotherAbilityActivated) \
	{ \
		P_GET_OBJECT(UAbility,Z_Param_ActivatedAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnotherAbilityActivated(Z_Param_ActivatedAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BreakAbility(Z_Param_ByTrigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateAbility(Z_Param_ByTrigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateAbilityByTrigger) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Tags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeactivateAbilityByTrigger(Z_Param_Tags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateAbilityByTrigger) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Tags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ActivateAbilityByTrigger(Z_Param_Tags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbilitiesAndEffectsTags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetAbilitiesAndEffectsTags(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryStartCooldown) \
	{ \
		P_GET_UBOOL(Z_Param_CallAfterAbilityFinish); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryStartCooldown(Z_Param_CallAfterAbilityFinish); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateSpeedOnAffectingParameters) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CurrentDeltaTime); \
		P_GET_TARRAY(FStatsAffectingParameters,Z_Param_affectingParameters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateSpeedOnAffectingParameters(Z_Param_CurrentDeltaTime,Z_Param_affectingParameters); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStatConsumption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StatConsumption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishCharge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCharge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishChaneling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishChaneling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFinishChanelingAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFinishChanelingAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartChanelingAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartChanelingAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartChanelingCasting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartChanelingCasting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCasting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCasting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateAbility(Z_Param_ByTrigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyAbility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDestroyAbility) \
	{ \
		P_GET_UBOOL(Z_Param_force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryDestroyAbility(Z_Param_force); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryBreakAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryBreakAbility(Z_Param_ByTrigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDeactivateAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryDeactivateAbility(Z_Param_ByTrigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivateAbility) \
	{ \
		P_GET_TARRAY(FGameplayTag,Z_Param_CurrentTags); \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryActivateAbility(Z_Param_CurrentTags,Z_Param_ByTrigger); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_EVENT_PARMS \
	struct Ability_eventOnAnotherAbilityActivation_Parms \
	{ \
		UAbility* ActivatedAbility; \
	}; \
	struct Ability_eventOnAnotherActorEffectAplicated_Parms \
	{ \
		AStats_Effect_Base* Effect; \
		AActor* EffectOnActor; \
	}; \
	struct Ability_eventOnAnotherActorEffectRemoved_Parms \
	{ \
		AStats_Effect_Base* Effect; \
		AActor* EffectOnActor; \
	}; \
	struct Ability_eventOnOwnerEffectAplicated_Parms \
	{ \
		AStats_Effect_Base* Effect; \
		AActor* EffectOnActor; \
	}; \
	struct Ability_eventOnOwnerEffectRemoved_Parms \
	{ \
		AStats_Effect_Base* Effect; \
		AActor* EffectOnActor; \
	}; \
	struct Ability_eventOnOwnerStatModification_Parms \
	{ \
		AActor* ModificationIniciator; \
		AActor* ModificationTargert; \
		FGameplayTag tag; \
		FGameplayTagContainer AdditinsTags; \
		float deltaChange; \
		float NewValue; \
	}; \
	struct Ability_eventOnTargetStatModification_Parms \
	{ \
		AActor* ModificationIniciator; \
		AActor* ModificationTargert; \
		FGameplayTag tag; \
		FGameplayTagContainer AdditinsTags; \
		float deltaChange; \
		float NewValue; \
	};


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_CALLBACK_WRAPPERS
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbility(UAbility&&); \
	NO_API UAbility(const UAbility&); \
public:


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbility(UAbility&&); \
	NO_API UAbility(const UAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbility)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_PRIVATE_PROPERTY_OFFSET
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_79_PROLOG \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_EVENT_PARMS


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_RPC_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_CALLBACK_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_INCLASS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_CALLBACK_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_INCLASS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
