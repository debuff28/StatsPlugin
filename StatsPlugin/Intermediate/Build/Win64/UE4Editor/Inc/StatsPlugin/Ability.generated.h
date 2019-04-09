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
struct FAbilityAnimation;
#ifdef STATSPLUGIN_Ability_generated_h
#error "Ability.generated.h already included, missing '#pragma once' in Ability.h"
#endif
#define STATSPLUGIN_Ability_generated_h

#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFinalAbilityCost_Statics; \
	STATSPLUGIN_API static class UScriptStruct* StaticStruct();


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityAnimation_Statics; \
	STATSPLUGIN_API static class UScriptStruct* StaticStruct();


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityAddStat_Statics; \
	STATSPLUGIN_API static class UScriptStruct* StaticStruct();


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityPower_Statics; \
	STATSPLUGIN_API static class UScriptStruct* StaticStruct();


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_138_DELEGATE \
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


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_137_DELEGATE \
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


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_RPC_WRAPPERS \
	virtual void AI_CanActivate_Implementation(FGameplayTagContainer CurrentTags, bool& IsCanActivate); \
	virtual void FinishCharge_Implementation(); \
	virtual void StartCharge_Implementation(); \
	virtual void FinishChaneling_Implementation(); \
	virtual void StartFinishChanelingAction_Implementation(); \
	virtual void StartChanelingAction_Implementation(); \
	virtual void StartChanelingCasting_Implementation(); \
	virtual void FinishAction_Implementation(); \
	virtual void StartAction_Implementation(); \
	virtual void StartCasting_Implementation(); \
	virtual void ActivateAbility_Implementation(bool ByTrigger); \
 \
	DECLARE_FUNCTION(execPassiveActivationCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PassiveActivationCheck(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execAI_CanActivate) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_CurrentTags); \
		P_GET_UBOOL_REF(Z_Param_Out_IsCanActivate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AI_CanActivate_Implementation(Z_Param_CurrentTags,Z_Param_Out_IsCanActivate); \
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
	DECLARE_FUNCTION(execCalculateAffectingParametersMultiplier) \
	{ \
		P_GET_TARRAY(FStatsAffectingParameters,Z_Param_affectingParameters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateAffectingParametersMultiplier(Z_Param_affectingParameters); \
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
	DECLARE_FUNCTION(execTryPlayAnimation) \
	{ \
		P_GET_STRUCT(FAbilityAnimation,Z_Param_animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryPlayAnimation(Z_Param_animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStatConsumption) \
	{ \
		P_GET_UBOOL(Z_Param_checkOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StatConsumption(Z_Param_checkOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishCharge_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCharge_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishChaneling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishChaneling_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFinishChanelingAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFinishChanelingAction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartChanelingAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartChanelingAction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartChanelingCasting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartChanelingCasting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCasting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCasting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateAbility_Implementation(Z_Param_ByTrigger); \
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


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPassiveActivationCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PassiveActivationCheck(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execAI_CanActivate) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_CurrentTags); \
		P_GET_UBOOL_REF(Z_Param_Out_IsCanActivate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AI_CanActivate_Implementation(Z_Param_CurrentTags,Z_Param_Out_IsCanActivate); \
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
	DECLARE_FUNCTION(execCalculateAffectingParametersMultiplier) \
	{ \
		P_GET_TARRAY(FStatsAffectingParameters,Z_Param_affectingParameters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateAffectingParametersMultiplier(Z_Param_affectingParameters); \
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
	DECLARE_FUNCTION(execTryPlayAnimation) \
	{ \
		P_GET_STRUCT(FAbilityAnimation,Z_Param_animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryPlayAnimation(Z_Param_animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStatConsumption) \
	{ \
		P_GET_UBOOL(Z_Param_checkOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StatConsumption(Z_Param_checkOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishCharge_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCharge_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishChaneling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishChaneling_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFinishChanelingAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFinishChanelingAction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartChanelingAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartChanelingAction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartChanelingCasting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartChanelingCasting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCasting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCasting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateAbility) \
	{ \
		P_GET_UBOOL(Z_Param_ByTrigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateAbility_Implementation(Z_Param_ByTrigger); \
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


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_EVENT_PARMS \
	struct Ability_eventActivateAbility_Parms \
	{ \
		bool ByTrigger; \
	}; \
	struct Ability_eventActivationCustomCheck_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Ability_eventActivationCustomCheck_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Ability_eventAI_CanActivate_Parms \
	{ \
		FGameplayTagContainer CurrentTags; \
		bool IsCanActivate; \
	}; \
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


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_CALLBACK_WRAPPERS
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_INCLASS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_STANDARD_CONSTRUCTORS \
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


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbility(UAbility&&); \
	NO_API UAbility(const UAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbility)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_PRIVATE_PROPERTY_OFFSET
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_140_PROLOG \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_EVENT_PARMS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_RPC_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_CALLBACK_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_INCLASS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_CALLBACK_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_INCLASS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h


#define FOREACH_ENUM_EABILITYPOWERRULE(op) \
	op(EAbilityPowerRule::APR_UseOwnerParameters) \
	op(EAbilityPowerRule::ATR_UseAbilityParameters) \
	op(EAbilityPowerRule::ATR_UseBothParameters) 
#define FOREACH_ENUM_EAITARGET(op) \
	op(EAITarget::AT_Enemy) \
	op(EAITarget::AT_Friend) 
#define FOREACH_ENUM_EAITAGRULE(op) \
	op(EAITagRule::ATR_All) \
	op(EAITagRule::ATR_Any) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
