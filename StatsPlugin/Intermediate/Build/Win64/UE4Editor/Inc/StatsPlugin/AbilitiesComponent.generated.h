// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbility;
struct FGameplayTag;
class AStats_Effect_Base;
#ifdef STATSPLUGIN_AbilitiesComponent_generated_h
#error "AbilitiesComponent.generated.h already included, missing '#pragma once' in AbilitiesComponent.h"
#endif
#define STATSPLUGIN_AbilitiesComponent_generated_h

#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_13_DELEGATE \
struct _Script_StatsPlugin_eventAbilityActionsDelegate_Parms \
{ \
	UAbility* Ability; \
	int32 ID; \
}; \
static inline void FAbilityActionsDelegate_DelegateWrapper(const FMulticastScriptDelegate& AbilityActionsDelegate, UAbility* Ability, int32 ID) \
{ \
	_Script_StatsPlugin_eventAbilityActionsDelegate_Parms Parms; \
	Parms.Ability=Ability; \
	Parms.ID=ID; \
	AbilityActionsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAbilityWasActivated) \
	{ \
		P_GET_OBJECT(UAbility,Z_Param_ActivatedAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilityWasActivated(Z_Param_ActivatedAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectsTags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetEffectsTags(); \
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
	DECLARE_FUNCTION(execGetOwnedEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AStats_Effect_Base*>*)Z_Param__Result=P_THIS->GetOwnedEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDeactivateAbilityByTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyDeactivated); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryDeactivateAbilityByTag(Z_Param_AbilityTag,Z_Param_Out_SuccessfullyDeactivated); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivateAbilityByTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyActivated); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryActivateAbilityByTag(Z_Param_AbilityTag,Z_Param_Out_SuccessfullyActivated); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDeactivateAbilityByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityClass); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyDeactivated); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryDeactivateAbilityByClass(Z_Param_AbilityClass,Z_Param_Out_SuccessfullyDeactivated); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivateAbilityByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityClass); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyActivated); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryActivateAbilityByClass(Z_Param_AbilityClass,Z_Param_Out_SuccessfullyActivated); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrBreakAbilityByID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyBreaked); \
		P_GET_OBJECT_REF(UAbility,Z_Param_Out_BreakedAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TrBreakAbilityByID(Z_Param_id,Z_Param_Out_SuccessfullyBreaked,Z_Param_Out_BreakedAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDeactivateAbilityByID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyDeactivated); \
		P_GET_OBJECT_REF(UAbility,Z_Param_Out_DeactivatedAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryDeactivateAbilityByID(Z_Param_id,Z_Param_Out_SuccessfullyDeactivated,Z_Param_Out_DeactivatedAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivateAbilityByID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyActivated); \
		P_GET_OBJECT_REF(UAbility,Z_Param_Out_ActivatedAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryActivateAbilityByID(Z_Param_id,Z_Param_Out_SuccessfullyActivated,Z_Param_Out_ActivatedAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAbilityByID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyRemoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAbilityByID(Z_Param_ID,Z_Param_Out_SuccessfullyRemoved); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAbilitiesByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityClass); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyRemoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAbilitiesByClass(Z_Param_AbilityClass,Z_Param_Out_SuccessfullyRemoved); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAbility) \
	{ \
		P_GET_OBJECT(UAbility,Z_Param_Ability); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyRemoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAbility(Z_Param_Ability,Z_Param_Out_SuccessfullyRemoved); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAbility) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAbility(Z_Param_AbilityClass,Z_Param_id,Z_Param_Out_SuccessfullyAdded); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAbilityWasActivated) \
	{ \
		P_GET_OBJECT(UAbility,Z_Param_ActivatedAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilityWasActivated(Z_Param_ActivatedAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectsTags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetEffectsTags(); \
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
	DECLARE_FUNCTION(execGetOwnedEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AStats_Effect_Base*>*)Z_Param__Result=P_THIS->GetOwnedEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDeactivateAbilityByTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyDeactivated); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryDeactivateAbilityByTag(Z_Param_AbilityTag,Z_Param_Out_SuccessfullyDeactivated); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivateAbilityByTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyActivated); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryActivateAbilityByTag(Z_Param_AbilityTag,Z_Param_Out_SuccessfullyActivated); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDeactivateAbilityByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityClass); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyDeactivated); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryDeactivateAbilityByClass(Z_Param_AbilityClass,Z_Param_Out_SuccessfullyDeactivated); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivateAbilityByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityClass); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyActivated); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryActivateAbilityByClass(Z_Param_AbilityClass,Z_Param_Out_SuccessfullyActivated); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrBreakAbilityByID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyBreaked); \
		P_GET_OBJECT_REF(UAbility,Z_Param_Out_BreakedAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TrBreakAbilityByID(Z_Param_id,Z_Param_Out_SuccessfullyBreaked,Z_Param_Out_BreakedAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDeactivateAbilityByID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyDeactivated); \
		P_GET_OBJECT_REF(UAbility,Z_Param_Out_DeactivatedAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryDeactivateAbilityByID(Z_Param_id,Z_Param_Out_SuccessfullyDeactivated,Z_Param_Out_DeactivatedAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryActivateAbilityByID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyActivated); \
		P_GET_OBJECT_REF(UAbility,Z_Param_Out_ActivatedAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryActivateAbilityByID(Z_Param_id,Z_Param_Out_SuccessfullyActivated,Z_Param_Out_ActivatedAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAbilityByID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyRemoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAbilityByID(Z_Param_ID,Z_Param_Out_SuccessfullyRemoved); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAbilitiesByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityClass); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyRemoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAbilitiesByClass(Z_Param_AbilityClass,Z_Param_Out_SuccessfullyRemoved); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAbility) \
	{ \
		P_GET_OBJECT(UAbility,Z_Param_Ability); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyRemoved); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAbility(Z_Param_Ability,Z_Param_Out_SuccessfullyRemoved); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAbility) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_UBOOL_REF(Z_Param_Out_SuccessfullyAdded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAbility(Z_Param_AbilityClass,Z_Param_id,Z_Param_Out_SuccessfullyAdded); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitiesComponent(); \
	friend struct Z_Construct_UClass_UAbilitiesComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilitiesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAbilitiesComponent)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitiesComponent(); \
	friend struct Z_Construct_UClass_UAbilitiesComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilitiesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAbilitiesComponent)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitiesComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitiesComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitiesComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitiesComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitiesComponent(UAbilitiesComponent&&); \
	NO_API UAbilitiesComponent(const UAbilitiesComponent&); \
public:


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitiesComponent(UAbilitiesComponent&&); \
	NO_API UAbilitiesComponent(const UAbilitiesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitiesComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitiesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilitiesComponent)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_PROLOG
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_RPC_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_INCLASS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_INCLASS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
