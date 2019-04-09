// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/Projectile_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile_Base() {}
// Cross Module References
	STATSPLUGIN_API UClass* Z_Construct_UClass_AProjectile_Base_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AProjectile_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_OnBounce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_OnHit();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_OnProjectileCrit();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_OnProjectileHit();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_OnProjectilePeriod();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_OnReact();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_ProjectileCrit();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AProjectile_Base_ProjectilePeriodEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_Effect_Base_NoRegister();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsModifications();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EReactRule();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	static FName NAME_AProjectile_Base_OnProjectileApplyModsAndEffects = FName(TEXT("OnProjectileApplyModsAndEffects"));
	void AProjectile_Base::OnProjectileApplyModsAndEffects(AActor* ReactHitResult)
	{
		Projectile_Base_eventOnProjectileApplyModsAndEffects_Parms Parms;
		Parms.ReactHitResult=ReactHitResult;
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_Base_OnProjectileApplyModsAndEffects),&Parms);
	}
	static FName NAME_AProjectile_Base_OnProjectileBounce = FName(TEXT("OnProjectileBounce"));
	void AProjectile_Base::OnProjectileBounce(FHitResult const& ReactHitResult)
	{
		Projectile_Base_eventOnProjectileBounce_Parms Parms;
		Parms.ReactHitResult=ReactHitResult;
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_Base_OnProjectileBounce),&Parms);
	}
	static FName NAME_AProjectile_Base_OnProjectileCrit = FName(TEXT("OnProjectileCrit"));
	void AProjectile_Base::OnProjectileCrit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_Base_OnProjectileCrit),NULL);
	}
	static FName NAME_AProjectile_Base_OnProjectileHit = FName(TEXT("OnProjectileHit"));
	void AProjectile_Base::OnProjectileHit(FHitResult const& ReactHitResult)
	{
		Projectile_Base_eventOnProjectileHit_Parms Parms;
		Parms.ReactHitResult=ReactHitResult;
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_Base_OnProjectileHit),&Parms);
	}
	static FName NAME_AProjectile_Base_OnProjectilePeriod = FName(TEXT("OnProjectilePeriod"));
	void AProjectile_Base::OnProjectilePeriod()
	{
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_Base_OnProjectilePeriod),NULL);
	}
	static FName NAME_AProjectile_Base_OnReact = FName(TEXT("OnReact"));
	void AProjectile_Base::OnReact(FHitResult ReactHitResult)
	{
		Projectile_Base_eventOnReact_Parms Parms;
		Parms.ReactHitResult=ReactHitResult;
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_Base_OnReact),&Parms);
	}
	static FName NAME_AProjectile_Base_ProjectileCrit = FName(TEXT("ProjectileCrit"));
	void AProjectile_Base::ProjectileCrit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AProjectile_Base_ProjectileCrit),NULL);
	}
	void AProjectile_Base::StaticRegisterNativesAProjectile_Base()
	{
		UClass* Class = AProjectile_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBounce", &AProjectile_Base::execOnBounce },
			{ "OnHit", &AProjectile_Base::execOnHit },
			{ "ProjectileApplyInRadius", &AProjectile_Base::execProjectileApplyInRadius },
			{ "ProjectileApplyModsAndEffects", &AProjectile_Base::execProjectileApplyModsAndEffects },
			{ "ProjectileCrit", &AProjectile_Base::execProjectileCrit },
			{ "ProjectilePeriodEffect", &AProjectile_Base::execProjectilePeriodEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics
	{
		struct Projectile_Base_eventOnBounce_Parms
		{
			FHitResult ImpactResult;
			FVector ImpactVelocity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::NewProp_ImpactVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventOnBounce_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::NewProp_ImpactVelocity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::NewProp_ImpactVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::NewProp_ImpactResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventOnBounce_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::NewProp_ImpactResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::NewProp_ImpactResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::NewProp_ImpactVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::NewProp_ImpactResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "OnBounce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(Projectile_Base_eventOnBounce_Parms), Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_OnBounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_OnBounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_Base_OnHit_Statics
	{
		struct Projectile_Base_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_OtherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_HitComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HitComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_HitComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "OnHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(Projectile_Base_eventOnHit_Parms), Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReactHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects_Statics::NewProp_ReactHitResult = { UE4CodeGen_Private::EPropertyClass::Object, "ReactHitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventOnProjectileApplyModsAndEffects_Parms, ReactHitResult), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects_Statics::NewProp_ReactHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "OnProjectileApplyModsAndEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(Projectile_Base_eventOnProjectileApplyModsAndEffects_Parms), Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReactHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::NewProp_ReactHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::NewProp_ReactHitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ReactHitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventOnProjectileBounce_Parms, ReactHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::NewProp_ReactHitResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::NewProp_ReactHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::NewProp_ReactHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "OnProjectileBounce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420800, sizeof(Projectile_Base_eventOnProjectileBounce_Parms), Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_Base_OnProjectileCrit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnProjectileCrit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_OnProjectileCrit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "OnProjectileCrit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnProjectileCrit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnProjectileCrit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_OnProjectileCrit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_OnProjectileCrit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReactHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::NewProp_ReactHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::NewProp_ReactHitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ReactHitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventOnProjectileHit_Parms, ReactHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::NewProp_ReactHitResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::NewProp_ReactHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::NewProp_ReactHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "OnProjectileHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420800, sizeof(Projectile_Base_eventOnProjectileHit_Parms), Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_OnProjectileHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_OnProjectileHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_Base_OnProjectilePeriod_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnProjectilePeriod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_OnProjectilePeriod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "OnProjectilePeriod", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnProjectilePeriod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnProjectilePeriod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_OnProjectilePeriod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_OnProjectilePeriod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_Base_OnReact_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReactHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_Base_OnReact_Statics::NewProp_ReactHitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ReactHitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000080, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventOnReact_Parms, ReactHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_Base_OnReact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_OnReact_Statics::NewProp_ReactHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_OnReact_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileReaction" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_OnReact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "OnReact", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Projectile_Base_eventOnReact_Parms), Z_Construct_UFunction_AProjectile_Base_OnReact_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnReact_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_OnReact_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_OnReact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_OnReact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_OnReact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics
	{
		struct Projectile_Base_eventProjectileApplyInRadius_Parms
		{
			bool period;
		};
		static void NewProp_period_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_period;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::NewProp_period_SetBit(void* Obj)
	{
		((Projectile_Base_eventProjectileApplyInRadius_Parms*)Obj)->period = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::NewProp_period = { UE4CodeGen_Private::EPropertyClass::Bool, "period", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Projectile_Base_eventProjectileApplyInRadius_Parms), &Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::NewProp_period_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::NewProp_period,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "ProjectileApplyInRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Projectile_Base_eventProjectileApplyInRadius_Parms), Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics
	{
		struct Projectile_Base_eventProjectileApplyModsAndEffects_Parms
		{
			AActor* HitActor;
			FVector location;
			bool periodReact;
		};
		static void NewProp_periodReact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_periodReact;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::NewProp_periodReact_SetBit(void* Obj)
	{
		((Projectile_Base_eventProjectileApplyModsAndEffects_Parms*)Obj)->periodReact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::NewProp_periodReact = { UE4CodeGen_Private::EPropertyClass::Bool, "periodReact", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Projectile_Base_eventProjectileApplyModsAndEffects_Parms), &Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::NewProp_periodReact_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventProjectileApplyModsAndEffects_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::NewProp_HitActor = { UE4CodeGen_Private::EPropertyClass::Object, "HitActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Projectile_Base_eventProjectileApplyModsAndEffects_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::NewProp_periodReact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::NewProp_HitActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "ProjectileApplyModsAndEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(Projectile_Base_eventProjectileApplyModsAndEffects_Parms), Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_Base_ProjectileCrit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_ProjectileCrit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_ProjectileCrit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "ProjectileCrit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_ProjectileCrit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_ProjectileCrit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_ProjectileCrit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_ProjectileCrit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectile_Base_ProjectilePeriodEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_Base_ProjectilePeriodEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_ProjectilePeriodEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, "ProjectilePeriodEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_Base_ProjectilePeriodEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_ProjectilePeriodEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_Base_ProjectilePeriodEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_Base_ProjectilePeriodEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectile_Base_NoRegister()
	{
		return AProjectile_Base::StaticClass();
	}
	struct Z_Construct_UClass_AProjectile_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfBounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeriodResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PeriodResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PeriodResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsModifications_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatsModifications;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatsModifications_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingReactObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockingReactObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlockingReactObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounceCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBounceCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounce_MetaData[];
#endif
		static void NewProp_Bounce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CritChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CritChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAltCollision_MetaData[];
#endif
		static void NewProp_UseAltCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAltCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyModifyWithFalloff_MetaData[];
#endif
		static void NewProp_ApplyModifyWithFalloff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyModifyWithFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_massUseIinTheReaction_MetaData[];
#endif
		static void NewProp_massUseIinTheReaction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_massUseIinTheReaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectilePeriodEffectTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectilePeriodEffectTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedProjectilePeriodEffect_MetaData[];
#endif
		static void NewProp_NeedProjectilePeriodEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedProjectilePeriodEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyOnPeriodReact_MetaData[];
#endif
		static void NewProp_DestroyOnPeriodReact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestroyOnPeriodReact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCrit_MetaData[];
#endif
		static void NewProp_IsCrit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCrit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyOnReact_MetaData[];
#endif
		static void NewProp_DestroyOnReact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestroyOnReact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReactionRules;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReactionRules_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReactionRules_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReactObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReactObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileRadiusEffectCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileRadiusEffectCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckCollisionCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckCollisionCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TeamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectile_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectile_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectile_Base_OnBounce, "OnBounce" }, // 2855643576
		{ &Z_Construct_UFunction_AProjectile_Base_OnHit, "OnHit" }, // 1118990025
		{ &Z_Construct_UFunction_AProjectile_Base_OnProjectileApplyModsAndEffects, "OnProjectileApplyModsAndEffects" }, // 1675449520
		{ &Z_Construct_UFunction_AProjectile_Base_OnProjectileBounce, "OnProjectileBounce" }, // 2802486735
		{ &Z_Construct_UFunction_AProjectile_Base_OnProjectileCrit, "OnProjectileCrit" }, // 4116255955
		{ &Z_Construct_UFunction_AProjectile_Base_OnProjectileHit, "OnProjectileHit" }, // 3392653151
		{ &Z_Construct_UFunction_AProjectile_Base_OnProjectilePeriod, "OnProjectilePeriod" }, // 3313003819
		{ &Z_Construct_UFunction_AProjectile_Base_OnReact, "OnReact" }, // 109903562
		{ &Z_Construct_UFunction_AProjectile_Base_ProjectileApplyInRadius, "ProjectileApplyInRadius" }, // 144798842
		{ &Z_Construct_UFunction_AProjectile_Base_ProjectileApplyModsAndEffects, "ProjectileApplyModsAndEffects" }, // 247120774
		{ &Z_Construct_UFunction_AProjectile_Base_ProjectileCrit, "ProjectileCrit" }, // 3321969636
		{ &Z_Construct_UFunction_AProjectile_Base_ProjectilePeriodEffect, "ProjectilePeriodEffect" }, // 2275064178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile_Base.h" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
		{ "ToolTip", "FGameplayTag Stat, float inputValue, EStatChangeType ChangeType, EStatValueType ValueType, TArray<FStatsAffectingParameters> AffectingStats" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NumberOfBounce_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NumberOfBounce = { UE4CodeGen_Private::EPropertyClass::Int, "NumberOfBounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, NumberOfBounce), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NumberOfBounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NumberOfBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_PeriodResults_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_PeriodResults = { UE4CodeGen_Private::EPropertyClass::Array, "PeriodResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, PeriodResults), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_PeriodResults_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_PeriodResults_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_PeriodResults_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PeriodResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_HitResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_HitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_HitResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_OldLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_OldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, OldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_OldLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_OldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "ProjectileConfig|Effects" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Effects = { UE4CodeGen_Private::EPropertyClass::Array, "Effects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, Effects), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Effects_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Effects_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Effects_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Effects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AStats_Effect_Base_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_StatsModifications_MetaData[] = {
		{ "Category", "ProjectileConfig|Modification" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_StatsModifications = { UE4CodeGen_Private::EPropertyClass::Array, "StatsModifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, StatsModifications), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_StatsModifications_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_StatsModifications_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_StatsModifications_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StatsModifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsModifications, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_BlockingReactObjectTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ECollisionChannel" },
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
		{ "ToolTip", "Stats Modifications\n**********\nfor example, we inflict magical damage (the effect on this change we indicate a magical attack) and inflict physical damage (the effect on this change we indicate a physical attack)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_BlockingReactObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "BlockingReactObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, BlockingReactObjectTypes), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_BlockingReactObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_BlockingReactObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_BlockingReactObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "BlockingReactObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_MaxBounceCount_MetaData[] = {
		{ "Category", "ProjectileConfig|Bounce" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
		{ "ToolTip", "How many bounces?" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_MaxBounceCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxBounceCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, MaxBounceCount), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_MaxBounceCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_MaxBounceCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Bounce_MetaData[] = {
		{ "Category", "ProjectileConfig|Bounce" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
		{ "ToolTip", "Need to bounce?" },
	};
#endif
	void Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Bounce_SetBit(void* Obj)
	{
		((AProjectile_Base*)Obj)->Bounce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Bounce = { UE4CodeGen_Private::EPropertyClass::Bool, "Bounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AProjectile_Base), &Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Bounce_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Bounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Bounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_CritChance_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_CritChance = { UE4CodeGen_Private::EPropertyClass::Float, "CritChance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, CritChance), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_CritChance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_CritChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_UseAltCollision_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	void Z_Construct_UClass_AProjectile_Base_Statics::NewProp_UseAltCollision_SetBit(void* Obj)
	{
		((AProjectile_Base*)Obj)->UseAltCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_UseAltCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "UseAltCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AProjectile_Base), &Z_Construct_UClass_AProjectile_Base_Statics::NewProp_UseAltCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_UseAltCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_UseAltCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ApplyModifyWithFalloff_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	void Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ApplyModifyWithFalloff_SetBit(void* Obj)
	{
		((AProjectile_Base*)Obj)->ApplyModifyWithFalloff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ApplyModifyWithFalloff = { UE4CodeGen_Private::EPropertyClass::Bool, "ApplyModifyWithFalloff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AProjectile_Base), &Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ApplyModifyWithFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ApplyModifyWithFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ApplyModifyWithFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_massUseIinTheReaction_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "DisplayName", "massUseInTheReaction" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	void Z_Construct_UClass_AProjectile_Base_Statics::NewProp_massUseIinTheReaction_SetBit(void* Obj)
	{
		((AProjectile_Base*)Obj)->massUseIinTheReaction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_massUseIinTheReaction = { UE4CodeGen_Private::EPropertyClass::Bool, "massUseIinTheReaction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AProjectile_Base), &Z_Construct_UClass_AProjectile_Base_Statics::NewProp_massUseIinTheReaction_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_massUseIinTheReaction_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_massUseIinTheReaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectilePeriodEffectTime_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectilePeriodEffectTime = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectilePeriodEffectTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, ProjectilePeriodEffectTime), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectilePeriodEffectTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectilePeriodEffectTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NeedProjectilePeriodEffect_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	void Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NeedProjectilePeriodEffect_SetBit(void* Obj)
	{
		((AProjectile_Base*)Obj)->NeedProjectilePeriodEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NeedProjectilePeriodEffect = { UE4CodeGen_Private::EPropertyClass::Bool, "NeedProjectilePeriodEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AProjectile_Base), &Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NeedProjectilePeriodEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NeedProjectilePeriodEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NeedProjectilePeriodEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnPeriodReact_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	void Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnPeriodReact_SetBit(void* Obj)
	{
		((AProjectile_Base*)Obj)->DestroyOnPeriodReact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnPeriodReact = { UE4CodeGen_Private::EPropertyClass::Bool, "DestroyOnPeriodReact", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AProjectile_Base), &Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnPeriodReact_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnPeriodReact_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnPeriodReact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_IsCrit_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	void Z_Construct_UClass_AProjectile_Base_Statics::NewProp_IsCrit_SetBit(void* Obj)
	{
		((AProjectile_Base*)Obj)->IsCrit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_IsCrit = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCrit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AProjectile_Base), &Z_Construct_UClass_AProjectile_Base_Statics::NewProp_IsCrit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_IsCrit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_IsCrit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnReact_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
		{ "ToolTip", "Destroy projectile on reaction" },
	};
#endif
	void Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnReact_SetBit(void* Obj)
	{
		((AProjectile_Base*)Obj)->DestroyOnReact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnReact = { UE4CodeGen_Private::EPropertyClass::Bool, "DestroyOnReact", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AProjectile_Base), &Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnReact_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnReact_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnReact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactionRules_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
		{ "ToolTip", "To whom the projector will respond (friends \\ enemies \\ neutrals \\ others)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactionRules = { UE4CodeGen_Private::EPropertyClass::Array, "ReactionRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, ReactionRules), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactionRules_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactionRules_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactionRules_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "ReactionRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_StatsPlugin_EReactRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactionRules_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactObjectTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ECollisionChannel" },
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
		{ "ToolTip", "An array of collisions to which the projectile reacts." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ReactObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, ReactObjectTypes), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReactObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileRadiusEffectCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileRadiusEffectCollision = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileRadiusEffectCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, ProjectileRadiusEffectCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileRadiusEffectCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileRadiusEffectCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_CheckCollisionCenter_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_CheckCollisionCenter = { UE4CodeGen_Private::EPropertyClass::Object, "CheckCollisionCenter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, CheckCollisionCenter), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_CheckCollisionCenter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_CheckCollisionCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileCollision = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, ProjectileCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileMovement = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Base_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Projectile_Base.h" },
		{ "ToolTip", "TeamID of Parent Actor\n\nConst Neutrals TeamID = Neutral\nConst Other TeamID = None\n\nIf an actor does not have a \"StatsComponent\" component, its TeamID is considered \"None\"" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_TeamID = { UE4CodeGen_Private::EPropertyClass::Name, "TeamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000024, 1, nullptr, STRUCT_OFFSET(AProjectile_Base, TeamID), METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_TeamID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::NewProp_TeamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectile_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NumberOfBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_PeriodResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_PeriodResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_OldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Effects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Effects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_StatsModifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_StatsModifications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_BlockingReactObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_BlockingReactObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_MaxBounceCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_Bounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_CritChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_UseAltCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ApplyModifyWithFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_massUseIinTheReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectilePeriodEffectTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_NeedProjectilePeriodEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnPeriodReact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_IsCrit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_DestroyOnReact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactionRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactionRules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactionRules_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ReactObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileRadiusEffectCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_CheckCollisionCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_ProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_TeamID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectile_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectile_Base_Statics::ClassParams = {
		&AProjectile_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AProjectile_Base_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProjectile_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectile_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectile_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectile_Base, 1876992801);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile_Base(Z_Construct_UClass_AProjectile_Base, &AProjectile_Base::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("AProjectile_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
