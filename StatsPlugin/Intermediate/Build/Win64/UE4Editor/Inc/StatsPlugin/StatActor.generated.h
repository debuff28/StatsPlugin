// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
enum class EStatValueType : uint8;
#ifdef STATSPLUGIN_StatActor_generated_h
#error "StatActor.generated.h already included, missing '#pragma once' in StatActor.h"
#endif
#define STATSPLUGIN_StatActor_generated_h

#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_13_DELEGATE \
struct _Script_StatsPlugin_eventCurrentAStatDelegate_Parms \
{ \
	FGameplayTag tag; \
}; \
static inline void FCurrentAStatDelegate_DelegateWrapper(const FMulticastScriptDelegate& CurrentAStatDelegate, FGameplayTag tag) \
{ \
	_Script_StatsPlugin_eventCurrentAStatDelegate_Parms Parms; \
	Parms.tag=tag; \
	CurrentAStatDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_ENUM(EStatValueType,Z_Param_ValueType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValue(EStatValueType(Z_Param_ValueType),Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_GET_ENUM(EStatValueType,Z_Param_ValueType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValue(EStatValueType(Z_Param_ValueType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegen) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltatime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Regen(Z_Param_deltatime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetRegenIsStoped) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setRegenIsStoped(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitStat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitStat(); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_ENUM(EStatValueType,Z_Param_ValueType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValue(EStatValueType(Z_Param_ValueType),Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_GET_ENUM(EStatValueType,Z_Param_ValueType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValue(EStatValueType(Z_Param_ValueType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegen) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltatime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Regen(Z_Param_deltatime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetRegenIsStoped) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setRegenIsStoped(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitStat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitStat(); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStatActor(); \
	friend struct Z_Construct_UClass_AStatActor_Statics; \
public: \
	DECLARE_CLASS(AStatActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStatActor)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAStatActor(); \
	friend struct Z_Construct_UClass_AStatActor_Statics; \
public: \
	DECLARE_CLASS(AStatActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStatActor)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStatActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStatActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatActor(AStatActor&&); \
	NO_API AStatActor(const AStatActor&); \
public:


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatActor(AStatActor&&); \
	NO_API AStatActor(const AStatActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStatActor)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_PRIVATE_PROPERTY_OFFSET
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_15_PROLOG
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_RPC_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_INCLASS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_INCLASS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
