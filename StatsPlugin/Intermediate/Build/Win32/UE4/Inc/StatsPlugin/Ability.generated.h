// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STATSPLUGIN_Ability_generated_h
#error "Ability.generated.h already included, missing '#pragma once' in Ability.h"
#endif
#define STATSPLUGIN_Ability_generated_h

#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAbilityRelease) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActionIniciator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AbilityRelease(Z_Param_ActionIniciator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbilityPress) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActionIniciator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AbilityPress(Z_Param_ActionIniciator); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAbilityRelease) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActionIniciator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AbilityRelease(Z_Param_ActionIniciator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbilityPress) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActionIniciator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AbilityPress(Z_Param_ActionIniciator); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAbility(); \
	friend struct Z_Construct_UClass_AAbility_Statics; \
public: \
	DECLARE_CLASS(AAbility, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AAbility)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAAbility(); \
	friend struct Z_Construct_UClass_AAbility_Statics; \
public: \
	DECLARE_CLASS(AAbility, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AAbility)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbility(AAbility&&); \
	NO_API AAbility(const AAbility&); \
public:


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbility(AAbility&&); \
	NO_API AAbility(const AAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAbility)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_PRIVATE_PROPERTY_OFFSET
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_17_PROLOG
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_RPC_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_INCLASS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_INCLASS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Ability_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
