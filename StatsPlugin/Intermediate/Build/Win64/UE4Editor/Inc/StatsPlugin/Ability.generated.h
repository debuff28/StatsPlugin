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
#ifdef STATSPLUGIN_Ability_generated_h
#error "Ability.generated.h already included, missing '#pragma once' in Ability.h"
#endif
#define STATSPLUGIN_Ability_generated_h

#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_15_DELEGATE \
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


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_14_DELEGATE \
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


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execOwnerStatChanged) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_tag); \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AdditinsTags); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OwnerStatChanged(Z_Param_tag,Z_Param_AdditinsTags,Z_Param_deltaChange); \
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
	DECLARE_FUNCTION(execDeactivateAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateAbility(); \
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
	DECLARE_FUNCTION(execGetAbilitiesTags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetAbilitiesTags(); \
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
	DECLARE_FUNCTION(execCalculateCooldownSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CurrentDeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateCooldownSpeed(Z_Param_CurrentDeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateAbility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDeactivateAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryDeactivateAbility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivateAbility) \
	{ \
		P_GET_TARRAY(FGameplayTag,Z_Param_CurrentTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryActivateAbility(Z_Param_CurrentTags); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execOwnerStatChanged) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_tag); \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AdditinsTags); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OwnerStatChanged(Z_Param_tag,Z_Param_AdditinsTags,Z_Param_deltaChange); \
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
	DECLARE_FUNCTION(execDeactivateAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateAbility(); \
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
	DECLARE_FUNCTION(execGetAbilitiesTags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetAbilitiesTags(); \
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
	DECLARE_FUNCTION(execCalculateCooldownSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CurrentDeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateCooldownSpeed(Z_Param_CurrentDeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateAbility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDeactivateAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryDeactivateAbility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivateAbility) \
	{ \
		P_GET_TARRAY(FGameplayTag,Z_Param_CurrentTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryActivateAbility(Z_Param_CurrentTags); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_EVENT_PARMS \
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
	struct Ability_eventOnStatModification_Parms \
	{ \
		FGameplayTag tag; \
		FGameplayTagContainer AdditinsTags; \
		float deltaChange; \
	};


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_CALLBACK_WRAPPERS
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_STANDARD_CONSTRUCTORS \
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


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbility(UAbility&&); \
	NO_API UAbility(const UAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbility)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_PRIVATE_PROPERTY_OFFSET
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_17_PROLOG \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_EVENT_PARMS


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_RPC_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_CALLBACK_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_INCLASS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_CALLBACK_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_INCLASS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
