// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
#ifdef STATSPLUGIN_StatModifyZone_generated_h
#error "StatModifyZone.generated.h already included, missing '#pragma once' in StatModifyZone.h"
#endif
#define STATSPLUGIN_StatModifyZone_generated_h

#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_24_DELEGATE \
struct _Script_StatsPlugin_eventOneParamsDelegateZone_Parms \
{ \
	AActor* actor; \
}; \
static inline void FOneParamsDelegateZone_DelegateWrapper(const FMulticastScriptDelegate& OneParamsDelegateZone, AActor* actor) \
{ \
	_Script_StatsPlugin_eventOneParamsDelegateZone_Parms Parms; \
	Parms.actor=actor; \
	OneParamsDelegateZone.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActorLeaveZone) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorLeave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorLeaveZone(Z_Param_ActorLeave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewActorInZone) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewActorInZone(Z_Param_NewActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoneApplyModsAndEffectsToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZoneApplyModsAndEffectsToActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoneApplyModsAndEffects) \
	{ \
		P_GET_TARRAY(FHitResult,Z_Param_ReactHitResults); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZoneApplyModsAndEffects(Z_Param_ReactHitResults); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActorLeaveZone) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorLeave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorLeaveZone(Z_Param_ActorLeave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewActorInZone) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewActorInZone(Z_Param_NewActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoneApplyModsAndEffectsToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZoneApplyModsAndEffectsToActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZoneApplyModsAndEffects) \
	{ \
		P_GET_TARRAY(FHitResult,Z_Param_ReactHitResults); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZoneApplyModsAndEffects(Z_Param_ReactHitResults); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStatModifyZone(); \
	friend struct Z_Construct_UClass_AStatModifyZone_Statics; \
public: \
	DECLARE_CLASS(AStatModifyZone, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStatModifyZone)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAStatModifyZone(); \
	friend struct Z_Construct_UClass_AStatModifyZone_Statics; \
public: \
	DECLARE_CLASS(AStatModifyZone, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStatModifyZone)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStatModifyZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStatModifyZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatModifyZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatModifyZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatModifyZone(AStatModifyZone&&); \
	NO_API AStatModifyZone(const AStatModifyZone&); \
public:


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatModifyZone(AStatModifyZone&&); \
	NO_API AStatModifyZone(const AStatModifyZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatModifyZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatModifyZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStatModifyZone)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_PRIVATE_PROPERTY_OFFSET
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_26_PROLOG
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_RPC_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_INCLASS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_INCLASS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatModifyZone_h


#define FOREACH_ENUM_EZONETYPE(op) \
	op(EZoneType::ZT_PeriodAplication) \
	op(EZoneType::ZT_OnEnterAplication) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
