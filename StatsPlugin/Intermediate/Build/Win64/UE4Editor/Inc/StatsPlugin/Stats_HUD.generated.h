// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSPLUGIN_Stats_HUD_generated_h
#error "Stats_HUD.generated.h already included, missing '#pragma once' in Stats_HUD.h"
#endif
#define STATSPLUGIN_Stats_HUD_generated_h

#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilities_Statics; \
	STATSPLUGIN_API static class UScriptStruct* StaticStruct();


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->getData(); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->getData(); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStats_HUD(); \
	friend struct Z_Construct_UClass_AStats_HUD_Statics; \
public: \
	DECLARE_CLASS(AStats_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStats_HUD)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAStats_HUD(); \
	friend struct Z_Construct_UClass_AStats_HUD_Statics; \
public: \
	DECLARE_CLASS(AStats_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStats_HUD)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStats_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStats_HUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStats_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStats_HUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStats_HUD(AStats_HUD&&); \
	NO_API AStats_HUD(const AStats_HUD&); \
public:


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStats_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStats_HUD(AStats_HUD&&); \
	NO_API AStats_HUD(const AStats_HUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStats_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStats_HUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStats_HUD)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_PRIVATE_PROPERTY_OFFSET
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_32_PROLOG
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_RPC_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_INCLASS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_INCLASS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
