// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AStats_Effect_Base;
class AActor;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGameplayTag; struct FStatsEffects;
enum class EStatValueType : uint8;
enum class ERegenRule : uint8;
enum class EStatChangeType : uint8;
struct FStatsAffectingParameters;
struct FReplicateTmapSupportStruct;
struct FStatsDatabase;
#ifdef STATSPLUGIN_StatsComponent_generated_h
#error "StatsComponent.generated.h already included, missing '#pragma once' in StatsComponent.h"
#endif
#define STATSPLUGIN_StatsComponent_generated_h

#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatsEffects_Statics; \
	STATSPLUGIN_API static class UScriptStruct* StaticStruct();


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_36_DELEGATE \
struct _Script_StatsPlugin_eventAplicationDelegate_Parms \
{ \
	AStats_Effect_Base* Effect; \
	AActor* EffectOnActor; \
}; \
static inline void FAplicationDelegate_DelegateWrapper(const FMulticastScriptDelegate& AplicationDelegate, AStats_Effect_Base* Effect, AActor* EffectOnActor) \
{ \
	_Script_StatsPlugin_eventAplicationDelegate_Parms Parms; \
	Parms.Effect=Effect; \
	Parms.EffectOnActor=EffectOnActor; \
	AplicationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_34_DELEGATE \
struct _Script_StatsPlugin_eventStatDelegate_Parms \
{ \
	FGameplayTag tag; \
}; \
static inline void FStatDelegate_DelegateWrapper(const FMulticastScriptDelegate& StatDelegate, FGameplayTag tag) \
{ \
	_Script_StatsPlugin_eventStatDelegate_Parms Parms; \
	Parms.tag=tag; \
	StatDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_32_DELEGATE \
struct _Script_StatsPlugin_eventStatModDelegate_Parms \
{ \
	AActor* ModificationIniciator; \
	AActor* ModificationTargert; \
	FGameplayTag tag; \
	FGameplayTagContainer AdditinsTags; \
	float deltaChange; \
	float NewValue; \
}; \
static inline void FStatModDelegate_DelegateWrapper(const FMulticastScriptDelegate& StatModDelegate, AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange, float NewValue) \
{ \
	_Script_StatsPlugin_eventStatModDelegate_Parms Parms; \
	Parms.ModificationIniciator=ModificationIniciator; \
	Parms.ModificationTargert=ModificationTargert; \
	Parms.tag=tag; \
	Parms.AdditinsTags=AdditinsTags; \
	Parms.deltaChange=deltaChange; \
	Parms.NewValue=NewValue; \
	StatModDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_RPC_WRAPPERS \
	virtual void Client_RemoveStat_Implementation(const FGameplayTag NewName); \
	virtual bool Server_SetName_Validate(const FName ); \
	virtual void Server_SetName_Implementation(const FName NewName); \
	virtual void Client_onStatMinValue_Implementation(const FGameplayTag tag); \
	virtual void Client_TestReplicateStats_Implementation(TArray<FReplicateTmapSupportStruct> const& ArrayOfStats); \
 \
	DECLARE_FUNCTION(execAddEffect) \
	{ \
		P_GET_OBJECT(AStats_Effect_Base,Z_Param_EffectBase); \
		P_GET_TMAP(FGameplayTag,FStatsEffects,Z_Param_EffectsTemp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddEffect(Z_Param_EffectBase,Z_Param_EffectsTemp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStatValue) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_ENUM(EStatValueType,Z_Param_ValueType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStatValue(Z_Param_Stat,EStatValueType(Z_Param_ValueType),Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_RemoveStat) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_RemoveStat_Implementation(Z_Param_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveStat) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveStat(Z_Param_Stat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execaddStat) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CurrentValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RegenValue); \
		P_GET_ENUM(ERegenRule,Z_Param_RegenRule); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RegenPauseLenght); \
		P_GET_UBOOL(Z_Param_StopOnMinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->addStat(Z_Param_Stat,Z_Param_CurrentValue,Z_Param_MinValue,Z_Param_MaxValue,Z_Param_RegenValue,ERegenRule(Z_Param_RegenRule),Z_Param_RegenPauseLenght,Z_Param_StopOnMinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRegenEnable) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_UBOOL(Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRegenEnable(Z_Param_Stat,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyStat) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_initiator); \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inputValue); \
		P_GET_ENUM(EStatChangeType,Z_Param_ChangeType); \
		P_GET_ENUM(EStatValueType,Z_Param_ValueType); \
		P_GET_TARRAY(FStatsAffectingParameters,Z_Param_AffectingStats); \
		P_GET_UBOOL_REF(Z_Param_Out_Modify); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_deltaChangeValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_ResultValue); \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_ChangedStat); \
		P_GET_UBOOL(Z_Param_clear); \
		P_GET_TARRAY(FGameplayTag,Z_Param_AdditionTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ModifyStat(Z_Param_initiator,Z_Param_Stat,Z_Param_inputValue,EStatChangeType(Z_Param_ChangeType),EStatValueType(Z_Param_ValueType),Z_Param_AffectingStats,Z_Param_Out_Modify,Z_Param_Out_deltaChangeValue,Z_Param_Out_ResultValue,Z_Param_Out_ChangedStat,Z_Param_clear,Z_Param_AdditionTags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReplicateTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeam) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewTeam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeam(Z_Param_NewTeam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetName_Validate(Z_Param_NewName)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetName_Validate")); \
			return; \
		} \
		P_THIS->Server_SetName_Implementation(Z_Param_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_onStatMinValue) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_onStatMinValue_Implementation(Z_Param_tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_TestReplicateStats) \
	{ \
		P_GET_TARRAY(FReplicateTmapSupportStruct,Z_Param_ArrayOfStats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_TestReplicateStats_Implementation(Z_Param_ArrayOfStats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectsByInfoTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_InfoTag); \
		P_GET_UBOOL_REF(Z_Param_Out_found); \
		P_GET_TARRAY_REF(AStats_Effect_Base*,Z_Param_Out_FoundedEffects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEffectsByInfoTag(Z_Param_InfoTag,Z_Param_Out_found,Z_Param_Out_FoundedEffects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatSelectedValueByTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_ENUM(EStatValueType,Z_Param_ValueToReturn); \
		P_GET_UBOOL_REF(Z_Param_Out_found); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StatsValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetStatSelectedValueByTag(Z_Param_Stat,EStatValueType(Z_Param_ValueToReturn),Z_Param_Out_found,Z_Param_Out_StatsValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatByTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_UBOOL_REF(Z_Param_Out_found); \
		P_GET_STRUCT_REF(FStatsDatabase,Z_Param_Out_StatsValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetStatByTag(Z_Param_Stat,Z_Param_Out_found,Z_Param_Out_StatsValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitStats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitStats(); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddEffect) \
	{ \
		P_GET_OBJECT(AStats_Effect_Base,Z_Param_EffectBase); \
		P_GET_TMAP(FGameplayTag,FStatsEffects,Z_Param_EffectsTemp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddEffect(Z_Param_EffectBase,Z_Param_EffectsTemp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStatValue) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_ENUM(EStatValueType,Z_Param_ValueType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStatValue(Z_Param_Stat,EStatValueType(Z_Param_ValueType),Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_RemoveStat) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_RemoveStat_Implementation(Z_Param_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveStat) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveStat(Z_Param_Stat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execaddStat) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CurrentValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RegenValue); \
		P_GET_ENUM(ERegenRule,Z_Param_RegenRule); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RegenPauseLenght); \
		P_GET_UBOOL(Z_Param_StopOnMinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->addStat(Z_Param_Stat,Z_Param_CurrentValue,Z_Param_MinValue,Z_Param_MaxValue,Z_Param_RegenValue,ERegenRule(Z_Param_RegenRule),Z_Param_RegenPauseLenght,Z_Param_StopOnMinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRegenEnable) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_UBOOL(Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRegenEnable(Z_Param_Stat,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyStat) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_initiator); \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inputValue); \
		P_GET_ENUM(EStatChangeType,Z_Param_ChangeType); \
		P_GET_ENUM(EStatValueType,Z_Param_ValueType); \
		P_GET_TARRAY(FStatsAffectingParameters,Z_Param_AffectingStats); \
		P_GET_UBOOL_REF(Z_Param_Out_Modify); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_deltaChangeValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_ResultValue); \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_ChangedStat); \
		P_GET_UBOOL(Z_Param_clear); \
		P_GET_TARRAY(FGameplayTag,Z_Param_AdditionTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ModifyStat(Z_Param_initiator,Z_Param_Stat,Z_Param_inputValue,EStatChangeType(Z_Param_ChangeType),EStatValueType(Z_Param_ValueType),Z_Param_AffectingStats,Z_Param_Out_Modify,Z_Param_Out_deltaChangeValue,Z_Param_Out_ResultValue,Z_Param_Out_ChangedStat,Z_Param_clear,Z_Param_AdditionTags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReplicateTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeam) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewTeam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeam(Z_Param_NewTeam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetName_Validate(Z_Param_NewName)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetName_Validate")); \
			return; \
		} \
		P_THIS->Server_SetName_Implementation(Z_Param_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_onStatMinValue) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_onStatMinValue_Implementation(Z_Param_tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_TestReplicateStats) \
	{ \
		P_GET_TARRAY(FReplicateTmapSupportStruct,Z_Param_ArrayOfStats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_TestReplicateStats_Implementation(Z_Param_ArrayOfStats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectsByInfoTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_InfoTag); \
		P_GET_UBOOL_REF(Z_Param_Out_found); \
		P_GET_TARRAY_REF(AStats_Effect_Base*,Z_Param_Out_FoundedEffects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEffectsByInfoTag(Z_Param_InfoTag,Z_Param_Out_found,Z_Param_Out_FoundedEffects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatSelectedValueByTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_ENUM(EStatValueType,Z_Param_ValueToReturn); \
		P_GET_UBOOL_REF(Z_Param_Out_found); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StatsValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetStatSelectedValueByTag(Z_Param_Stat,EStatValueType(Z_Param_ValueToReturn),Z_Param_Out_found,Z_Param_Out_StatsValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatByTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_Stat); \
		P_GET_UBOOL_REF(Z_Param_Out_found); \
		P_GET_STRUCT_REF(FStatsDatabase,Z_Param_Out_StatsValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetStatByTag(Z_Param_Stat,Z_Param_Out_found,Z_Param_Out_StatsValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitStats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitStats(); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_EVENT_PARMS \
	struct StatsComponent_eventClient_onStatMinValue_Parms \
	{ \
		FGameplayTag tag; \
	}; \
	struct StatsComponent_eventClient_RemoveStat_Parms \
	{ \
		FGameplayTag NewName; \
	}; \
	struct StatsComponent_eventClient_TestReplicateStats_Parms \
	{ \
		TArray<FReplicateTmapSupportStruct> ArrayOfStats; \
	}; \
	struct StatsComponent_eventServer_SetName_Parms \
	{ \
		FName NewName; \
	};


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_CALLBACK_WRAPPERS
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsComponent(); \
	friend struct Z_Construct_UClass_UStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStatsComponent)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUStatsComponent(); \
	friend struct Z_Construct_UClass_UStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStatsComponent)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatsComponent(UStatsComponent&&); \
	NO_API UStatsComponent(const UStatsComponent&); \
public:


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatsComponent(UStatsComponent&&); \
	NO_API UStatsComponent(const UStatsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatsComponent)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_PRIVATE_PROPERTY_OFFSET
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_40_PROLOG \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_EVENT_PARMS


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_RPC_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_CALLBACK_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_INCLASS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_CALLBACK_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_INCLASS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
