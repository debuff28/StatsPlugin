// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef STATSPLUGIN_AbilitiesComponent_generated_h
#error "AbilitiesComponent.generated.h already included, missing '#pragma once' in AbilitiesComponent.h"
#endif
#define STATSPLUGIN_AbilitiesComponent_generated_h

#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAbilitiesStatus) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAbilitiesStatus(Z_Param_AbilityTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbilitiesCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilitiesCheck(); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAbilitiesStatus) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAbilitiesStatus(Z_Param_AbilityTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbilitiesCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbilitiesCheck(); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitiesComponent(); \
	friend struct Z_Construct_UClass_UAbilitiesComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilitiesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAbilitiesComponent)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitiesComponent(); \
	friend struct Z_Construct_UClass_UAbilitiesComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilitiesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAbilitiesComponent)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_STANDARD_CONSTRUCTORS \
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


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitiesComponent(UAbilitiesComponent&&); \
	NO_API UAbilitiesComponent(const UAbilitiesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitiesComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitiesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilitiesComponent)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_12_PROLOG
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_RPC_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_INCLASS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_INCLASS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_AbilitiesComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
