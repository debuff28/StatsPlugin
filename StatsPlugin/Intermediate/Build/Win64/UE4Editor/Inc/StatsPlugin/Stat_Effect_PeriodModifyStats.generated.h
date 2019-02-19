// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSPLUGIN_Stat_Effect_PeriodModifyStats_generated_h
#error "Stat_Effect_PeriodModifyStats.generated.h already included, missing '#pragma once' in Stat_Effect_PeriodModifyStats.h"
#endif
#define STATSPLUGIN_Stat_Effect_PeriodModifyStats_generated_h

#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_13_DELEGATE \
static inline void FNoParamsDelegatePeriodModifyStats_DelegateWrapper(const FMulticastScriptDelegate& NoParamsDelegatePeriodModifyStats) \
{ \
	NoParamsDelegatePeriodModifyStats.ProcessMulticastDelegate<UObject>(NULL); \
}


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyModificators) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyModificators(); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyModificators) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyModificators(); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStat_Effect_PeriodModifyStats(); \
	friend struct Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics; \
public: \
	DECLARE_CLASS(AStat_Effect_PeriodModifyStats, AStats_Effect_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStat_Effect_PeriodModifyStats)


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAStat_Effect_PeriodModifyStats(); \
	friend struct Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics; \
public: \
	DECLARE_CLASS(AStat_Effect_PeriodModifyStats, AStats_Effect_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStat_Effect_PeriodModifyStats)


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStat_Effect_PeriodModifyStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStat_Effect_PeriodModifyStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStat_Effect_PeriodModifyStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStat_Effect_PeriodModifyStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStat_Effect_PeriodModifyStats(AStat_Effect_PeriodModifyStats&&); \
	NO_API AStat_Effect_PeriodModifyStats(const AStat_Effect_PeriodModifyStats&); \
public:


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStat_Effect_PeriodModifyStats() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStat_Effect_PeriodModifyStats(AStat_Effect_PeriodModifyStats&&); \
	NO_API AStat_Effect_PeriodModifyStats(const AStat_Effect_PeriodModifyStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStat_Effect_PeriodModifyStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStat_Effect_PeriodModifyStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStat_Effect_PeriodModifyStats)


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_PRIVATE_PROPERTY_OFFSET
#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_15_PROLOG
#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_RPC_WRAPPERS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_INCLASS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_INCLASS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stat_Effect_PeriodModifyStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
