// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
class UPrimitiveComponent;
#ifdef STATSPLUGIN_Projectile_Base_generated_h
#error "Projectile_Base.generated.h already included, missing '#pragma once' in Projectile_Base.h"
#endif
#define STATSPLUGIN_Projectile_Base_generated_h

#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProjectileApplyModsAndEffects) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_HitActor); \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_GET_UBOOL(Z_Param_periodReact); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProjectileApplyModsAndEffects(Z_Param_HitActor,Z_Param_location,Z_Param_periodReact); \
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
	DECLARE_FUNCTION(execProjectileApplyInRadius) \
	{ \
		P_GET_UBOOL(Z_Param_period); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProjectileApplyInRadius(Z_Param_period); \
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
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProjectileApplyModsAndEffects) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_HitActor); \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_GET_UBOOL(Z_Param_periodReact); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProjectileApplyModsAndEffects(Z_Param_HitActor,Z_Param_location,Z_Param_periodReact); \
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
	DECLARE_FUNCTION(execProjectileApplyInRadius) \
	{ \
		P_GET_UBOOL(Z_Param_period); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProjectileApplyInRadius(Z_Param_period); \
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
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_EVENT_PARMS \
	struct Projectile_Base_eventOnProjectileApplyModsAndEffects_Parms \
	{ \
		AActor* ReactHitResult; \
	}; \
	struct Projectile_Base_eventOnProjectileBounce_Parms \
	{ \
		FHitResult ReactHitResult; \
	}; \
	struct Projectile_Base_eventOnProjectileHit_Parms \
	{ \
		FHitResult ReactHitResult; \
	}; \
	struct Projectile_Base_eventOnReact_Parms \
	{ \
		FHitResult ReactHitResult; \
	};


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_CALLBACK_WRAPPERS
#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile_Base(); \
	friend struct Z_Construct_UClass_AProjectile_Base_Statics; \
public: \
	DECLARE_CLASS(AProjectile_Base, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AProjectile_Base)


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile_Base(); \
	friend struct Z_Construct_UClass_AProjectile_Base_Statics; \
public: \
	DECLARE_CLASS(AProjectile_Base, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AProjectile_Base)


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile_Base(AProjectile_Base&&); \
	NO_API AProjectile_Base(const AProjectile_Base&); \
public:


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile_Base(AProjectile_Base&&); \
	NO_API AProjectile_Base(const AProjectile_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile_Base)


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_PRIVATE_PROPERTY_OFFSET
#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_24_PROLOG \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_EVENT_PARMS


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_RPC_WRAPPERS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_CALLBACK_WRAPPERS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_INCLASS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_CALLBACK_WRAPPERS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_INCLASS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Projectile_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
