// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FVector;
struct FStatsModifications;
class AStats_Effect_Base;
#ifdef STATSPLUGIN_Stats_Projectile_generated_h
#error "Stats_Projectile.generated.h already included, missing '#pragma once' in Stats_Projectile.h"
#endif
#define STATSPLUGIN_Stats_Projectile_generated_h

#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_RPC_WRAPPERS \
	virtual void AttachProjectile_Implementation(UPrimitiveComponent* NewParentComponent, FName slot); \
 \
	DECLARE_FUNCTION(execAttachProjectile) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewParentComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttachProjectile_Implementation(Z_Param_NewParentComponent,Z_Param_slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectilePeriodEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProjectilePeriodEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrace) \
	{ \
		P_GET_UBOOL(Z_Param_multi); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Trace(Z_Param_multi); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyModsAndEffects) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_HitActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_multiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyModsAndEffects(Z_Param_HitActor,Z_Param_multiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBounce) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBounce(Z_Param_Out_ImpactResult,Z_Param_Out_ImpactVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnProjectileMovementCollisionHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnProjectileMovementCollisionHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitiateProjectile) \
	{ \
		P_GET_TARRAY(FStatsModifications,Z_Param_NewStatsModifications); \
		P_GET_TARRAY(TSubclassOf<AStats_Effect_Base> ,Z_Param_NewEffects); \
		P_GET_UBOOL(Z_Param_mele); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewParentComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->InitiateProjectile(Z_Param_NewStatsModifications,Z_Param_NewEffects,Z_Param_mele,Z_Param_NewParentComponent,Z_Param_slot); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttachProjectile) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewParentComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttachProjectile_Implementation(Z_Param_NewParentComponent,Z_Param_slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectilePeriodEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProjectilePeriodEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrace) \
	{ \
		P_GET_UBOOL(Z_Param_multi); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Trace(Z_Param_multi); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyModsAndEffects) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_HitActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_multiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyModsAndEffects(Z_Param_HitActor,Z_Param_multiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBounce) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBounce(Z_Param_Out_ImpactResult,Z_Param_Out_ImpactVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnProjectileMovementCollisionHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnProjectileMovementCollisionHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitiateProjectile) \
	{ \
		P_GET_TARRAY(FStatsModifications,Z_Param_NewStatsModifications); \
		P_GET_TARRAY(TSubclassOf<AStats_Effect_Base> ,Z_Param_NewEffects); \
		P_GET_UBOOL(Z_Param_mele); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewParentComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->InitiateProjectile(Z_Param_NewStatsModifications,Z_Param_NewEffects,Z_Param_mele,Z_Param_NewParentComponent,Z_Param_slot); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_EVENT_PARMS \
	struct Stats_Projectile_eventAttachProjectile_Parms \
	{ \
		UPrimitiveComponent* NewParentComponent; \
		FName slot; \
	};


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_CALLBACK_WRAPPERS
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStats_Projectile(); \
	friend struct Z_Construct_UClass_AStats_Projectile_Statics; \
public: \
	DECLARE_CLASS(AStats_Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStats_Projectile)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAStats_Projectile(); \
	friend struct Z_Construct_UClass_AStats_Projectile_Statics; \
public: \
	DECLARE_CLASS(AStats_Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStats_Projectile)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStats_Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStats_Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStats_Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStats_Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStats_Projectile(AStats_Projectile&&); \
	NO_API AStats_Projectile(const AStats_Projectile&); \
public:


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStats_Projectile(AStats_Projectile&&); \
	NO_API AStats_Projectile(const AStats_Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStats_Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStats_Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStats_Projectile)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_PRIVATE_PROPERTY_OFFSET
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_16_PROLOG \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_EVENT_PARMS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_RPC_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_CALLBACK_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_INCLASS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_CALLBACK_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_INCLASS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
