// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FStatsRating;
struct FIgnoreRule;
#ifdef STATSPLUGIN_AI_Sight_generated_h
#error "AI_Sight.generated.h already included, missing '#pragma once' in AI_Sight.h"
#endif
#define STATSPLUGIN_AI_Sight_generated_h

#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatsRating_Statics; \
	STATSPLUGIN_API static class UScriptStruct* StaticStruct();


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIgnoreRule_Statics; \
	STATSPLUGIN_API static class UScriptStruct* StaticStruct();


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckActor(Z_Param_Actors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrderByDistance) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OrderByDistance(Z_Param_Actors,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindByRatingTarget) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_TARRAY(FStatsRating,Z_Param_RatingRules); \
		P_GET_TARRAY(FIgnoreRule,Z_Param_IgnoreRule); \
		P_GET_UBOOL(Z_Param_MaxRating); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindByRatingTarget(Z_Param_Actors,Z_Param_RatingRules,Z_Param_IgnoreRule,Z_Param_MaxRating,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindFarthestTarget) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_TARRAY(FIgnoreRule,Z_Param_IgnoreRule); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindFarthestTarget(Z_Param_Actors,Z_Param_IgnoreRule,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNearestTarget) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_TARRAY(FIgnoreRule,Z_Param_IgnoreRule); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindNearestTarget(Z_Param_Actors,Z_Param_IgnoreRule,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Update(); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckActor(Z_Param_Actors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrderByDistance) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OrderByDistance(Z_Param_Actors,Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindByRatingTarget) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_TARRAY(FStatsRating,Z_Param_RatingRules); \
		P_GET_TARRAY(FIgnoreRule,Z_Param_IgnoreRule); \
		P_GET_UBOOL(Z_Param_MaxRating); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindByRatingTarget(Z_Param_Actors,Z_Param_RatingRules,Z_Param_IgnoreRule,Z_Param_MaxRating,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindFarthestTarget) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_TARRAY(FIgnoreRule,Z_Param_IgnoreRule); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindFarthestTarget(Z_Param_Actors,Z_Param_IgnoreRule,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNearestTarget) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_TARRAY(FIgnoreRule,Z_Param_IgnoreRule); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindNearestTarget(Z_Param_Actors,Z_Param_IgnoreRule,Z_Param_Out_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Update(); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_EVENT_PARMS \
	struct AI_Sight_eventEnemyIsLost_Parms \
	{ \
		AActor* Actor; \
	}; \
	struct AI_Sight_eventFriendIsLost_Parms \
	{ \
		AActor* Actor; \
	}; \
	struct AI_Sight_eventNewEnemy_Parms \
	{ \
		AActor* Actor; \
	}; \
	struct AI_Sight_eventNewFriend_Parms \
	{ \
		AActor* Actor; \
	};


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_CALLBACK_WRAPPERS
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAI_Sight(); \
	friend struct Z_Construct_UClass_UAI_Sight_Statics; \
public: \
	DECLARE_CLASS(UAI_Sight, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAI_Sight)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUAI_Sight(); \
	friend struct Z_Construct_UClass_UAI_Sight_Statics; \
public: \
	DECLARE_CLASS(UAI_Sight, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAI_Sight)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAI_Sight(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAI_Sight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAI_Sight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAI_Sight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAI_Sight(UAI_Sight&&); \
	NO_API UAI_Sight(const UAI_Sight&); \
public:


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAI_Sight(UAI_Sight&&); \
	NO_API UAI_Sight(const UAI_Sight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAI_Sight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAI_Sight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAI_Sight)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_PRIVATE_PROPERTY_OFFSET
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_63_PROLOG \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_EVENT_PARMS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_RPC_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_CALLBACK_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_INCLASS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_CALLBACK_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_INCLASS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_AI_Sight_h


#define FOREACH_ENUM_ETARGETSELECTINGRULE(op) \
	op(ETargetSelectingRule::TSR_DistanceNearest) \
	op(ETargetSelectingRule::TSR_DistanceFarthest) \
	op(ETargetSelectingRule::TSR_Rating) 
#define FOREACH_ENUM_ESTATSIGNOREVALUE(op) \
	op(EStatsIgnoreValue::SIV_MaxValue) \
	op(EStatsIgnoreValue::SIV_MinValue) 
#define FOREACH_ENUM_ESTATSSELECTINGVALUE(op) \
	op(EStatsSelectingValue::SSV_CurrentValue) \
	op(EStatsSelectingValue::SSV_MaxValue) \
	op(EStatsSelectingValue::SSV_Percent) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
