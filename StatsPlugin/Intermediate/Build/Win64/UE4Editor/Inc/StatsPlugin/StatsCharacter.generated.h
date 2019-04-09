// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UStats_CharacterMovementComponent;
#ifdef STATSPLUGIN_StatsCharacter_generated_h
#error "StatsCharacter.generated.h already included, missing '#pragma once' in StatsCharacter.h"
#endif
#define STATSPLUGIN_StatsCharacter_generated_h

#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_11_DELEGATE \
struct _Script_StatsPlugin_eventVoidZoneDelegate_Parms \
{ \
	AActor* Actor; \
}; \
static inline void FVoidZoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& VoidZoneDelegate, AActor* Actor) \
{ \
	_Script_StatsPlugin_eventVoidZoneDelegate_Parms Parms; \
	Parms.Actor=Actor; \
	VoidZoneDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStatsMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStats_CharacterMovementComponent**)Z_Param__Result=P_THIS->GetStatsMovementComponent(); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStatsMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStats_CharacterMovementComponent**)Z_Param__Result=P_THIS->GetStatsMovementComponent(); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStatsCharacter(); \
	friend struct Z_Construct_UClass_AStatsCharacter_Statics; \
public: \
	DECLARE_CLASS(AStatsCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStatsCharacter)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAStatsCharacter(); \
	friend struct Z_Construct_UClass_AStatsCharacter_Statics; \
public: \
	DECLARE_CLASS(AStatsCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStatsCharacter)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStatsCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStatsCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatsCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatsCharacter(AStatsCharacter&&); \
	NO_API AStatsCharacter(const AStatsCharacter&); \
public:


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatsCharacter(AStatsCharacter&&); \
	NO_API AStatsCharacter(const AStatsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatsCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStatsCharacter)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_PRIVATE_PROPERTY_OFFSET
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_14_PROLOG
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_RPC_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_INCLASS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_INCLASS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_StatsCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
