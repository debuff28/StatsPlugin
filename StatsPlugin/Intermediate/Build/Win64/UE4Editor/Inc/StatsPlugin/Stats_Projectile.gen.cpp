// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/Stats_Projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStats_Projectile() {}
// Cross Module References
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_Projectile_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_Projectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Projectile_AttachProjectile();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Projectile_InitiateProjectile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_Effect_Base_NoRegister();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsModifications();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Projectile_OnBounce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Projectile_ProjectilePeriodEffect();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Projectile_Trace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EReactRule();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	static FName NAME_AStats_Projectile_AttachProjectile = FName(TEXT("AttachProjectile"));
	void AStats_Projectile::AttachProjectile(UPrimitiveComponent* NewParentComponent, FName slot)
	{
		Stats_Projectile_eventAttachProjectile_Parms Parms;
		Parms.NewParentComponent=NewParentComponent;
		Parms.slot=slot;
		ProcessEvent(FindFunctionChecked(NAME_AStats_Projectile_AttachProjectile),&Parms);
	}
	void AStats_Projectile::StaticRegisterNativesAStats_Projectile()
	{
		UClass* Class = AStats_Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyModsAndEffects", &AStats_Projectile::execApplyModsAndEffects },
			{ "AttachProjectile", &AStats_Projectile::execAttachProjectile },
			{ "InitiateProjectile", &AStats_Projectile::execInitiateProjectile },
			{ "OnBounce", &AStats_Projectile::execOnBounce },
			{ "OnProjectileMovementCollisionHit", &AStats_Projectile::execOnProjectileMovementCollisionHit },
			{ "ProjectilePeriodEffect", &AStats_Projectile::execProjectilePeriodEffect },
			{ "Trace", &AStats_Projectile::execTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics
	{
		struct Stats_Projectile_eventApplyModsAndEffects_Parms
		{
			AActor* HitActor;
			float multiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::NewProp_multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "multiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventApplyModsAndEffects_Parms, multiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::NewProp_HitActor = { UE4CodeGen_Private::EPropertyClass::Object, "HitActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventApplyModsAndEffects_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::NewProp_HitActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Projectile, "ApplyModsAndEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Stats_Projectile_eventApplyModsAndEffects_Parms), Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewParentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewParentComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::NewProp_slot = { UE4CodeGen_Private::EPropertyClass::Name, "slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventAttachProjectile_Parms, slot), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::NewProp_NewParentComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::NewProp_NewParentComponent = { UE4CodeGen_Private::EPropertyClass::Object, "NewParentComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventAttachProjectile_Parms, NewParentComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::NewProp_NewParentComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::NewProp_NewParentComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::NewProp_NewParentComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Projectile, "AttachProjectile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, sizeof(Stats_Projectile_eventAttachProjectile_Parms), Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Projectile_AttachProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Projectile_AttachProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics
	{
		struct Stats_Projectile_eventInitiateProjectile_Parms
		{
			TArray<FStatsModifications> NewStatsModifications;
			TArray<TSubclassOf<AStats_Effect_Base> > NewEffects;
			bool mele;
			UPrimitiveComponent* NewParentComponent;
			FName slot;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewParentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewParentComponent;
		static void NewProp_mele_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mele;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewEffects;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewEffects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewStatsModifications;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewStatsModifications_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Stats_Projectile_eventInitiateProjectile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Stats_Projectile_eventInitiateProjectile_Parms), &Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_slot = { UE4CodeGen_Private::EPropertyClass::Name, "slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventInitiateProjectile_Parms, slot), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewParentComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewParentComponent = { UE4CodeGen_Private::EPropertyClass::Object, "NewParentComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventInitiateProjectile_Parms, NewParentComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewParentComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewParentComponent_MetaData)) };
	void Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_mele_SetBit(void* Obj)
	{
		((Stats_Projectile_eventInitiateProjectile_Parms*)Obj)->mele = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_mele = { UE4CodeGen_Private::EPropertyClass::Bool, "mele", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Stats_Projectile_eventInitiateProjectile_Parms), &Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_mele_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewEffects = { UE4CodeGen_Private::EPropertyClass::Array, "NewEffects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventInitiateProjectile_Parms, NewEffects), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewEffects_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "NewEffects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AStats_Effect_Base_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewStatsModifications = { UE4CodeGen_Private::EPropertyClass::Array, "NewStatsModifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventInitiateProjectile_Parms, NewStatsModifications), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewStatsModifications_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "NewStatsModifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsModifications, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewParentComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_mele,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewStatsModifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::NewProp_NewStatsModifications_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Projectile, "InitiateProjectile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(Stats_Projectile_eventInitiateProjectile_Parms), Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Projectile_InitiateProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Projectile_InitiateProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics
	{
		struct Stats_Projectile_eventOnBounce_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::NewProp_ImpactVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventOnBounce_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::NewProp_ImpactVelocity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::NewProp_ImpactVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::NewProp_ImpactResult = { UE4CodeGen_Private::EPropertyClass::Struct, "ImpactResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventOnBounce_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::NewProp_ImpactResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::NewProp_ImpactResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::NewProp_ImpactVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::NewProp_ImpactResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Projectile, "OnBounce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(Stats_Projectile_eventOnBounce_Parms), Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Projectile_OnBounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Projectile_OnBounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics
	{
		struct Stats_Projectile_eventOnProjectileMovementCollisionHit_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventOnProjectileMovementCollisionHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventOnProjectileMovementCollisionHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_OtherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventOnProjectileMovementCollisionHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventOnProjectileMovementCollisionHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_HitComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HitComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Stats_Projectile_eventOnProjectileMovementCollisionHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_HitComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Projectile, "OnProjectileMovementCollisionHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(Stats_Projectile_eventOnProjectileMovementCollisionHit_Parms), Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Projectile_ProjectilePeriodEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_ProjectilePeriodEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Projectile_ProjectilePeriodEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Projectile, "ProjectilePeriodEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_ProjectilePeriodEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_ProjectilePeriodEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Projectile_ProjectilePeriodEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Projectile_ProjectilePeriodEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Projectile_Trace_Statics
	{
		struct Stats_Projectile_eventTrace_Parms
		{
			bool multi;
		};
		static void NewProp_multi_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_multi;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStats_Projectile_Trace_Statics::NewProp_multi_SetBit(void* Obj)
	{
		((Stats_Projectile_eventTrace_Parms*)Obj)->multi = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStats_Projectile_Trace_Statics::NewProp_multi = { UE4CodeGen_Private::EPropertyClass::Bool, "multi", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Stats_Projectile_eventTrace_Parms), &Z_Construct_UFunction_AStats_Projectile_Trace_Statics::NewProp_multi_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStats_Projectile_Trace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Projectile_Trace_Statics::NewProp_multi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Projectile_Trace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Projectile_Trace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Projectile, "Trace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Stats_Projectile_eventTrace_Parms), Z_Construct_UFunction_AStats_Projectile_Trace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_Trace_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Projectile_Trace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Projectile_Trace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Projectile_Trace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Projectile_Trace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStats_Projectile_NoRegister()
	{
		return AStats_Projectile::StaticClass();
	}
	struct Z_Construct_UClass_AStats_Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLocation;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingReactObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockingReactObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlockingReactObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfBounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inited_MetaData[];
#endif
		static void NewProp_Inited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Inited;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectilePeriodEffectTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectilePeriodEffectTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyModifyWithFalloff_MetaData[];
#endif
		static void NewProp_ApplyModifyWithFalloff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyModifyWithFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_massUseInTheReaction_MetaData[];
#endif
		static void NewProp_massUseInTheReaction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_massUseInTheReaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyOnPeriodReact_MetaData[];
#endif
		static void NewProp_DestroyOnPeriodReact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestroyOnPeriodReact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyOnReact_MetaData[];
#endif
		static void NewProp_DestroyOnReact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestroyOnReact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedProjectilePeriodEffect_MetaData[];
#endif
		static void NewProp_NeedProjectilePeriodEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedProjectilePeriodEffect;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TeamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileRadiusEffectCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileRadiusEffectCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStats_Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStats_Projectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStats_Projectile_ApplyModsAndEffects, "ApplyModsAndEffects" }, // 3838887186
		{ &Z_Construct_UFunction_AStats_Projectile_AttachProjectile, "AttachProjectile" }, // 3676539966
		{ &Z_Construct_UFunction_AStats_Projectile_InitiateProjectile, "InitiateProjectile" }, // 10170563
		{ &Z_Construct_UFunction_AStats_Projectile_OnBounce, "OnBounce" }, // 1190965565
		{ &Z_Construct_UFunction_AStats_Projectile_OnProjectileMovementCollisionHit, "OnProjectileMovementCollisionHit" }, // 3657027901
		{ &Z_Construct_UFunction_AStats_Projectile_ProjectilePeriodEffect, "ProjectilePeriodEffect" }, // 3950509524
		{ &Z_Construct_UFunction_AStats_Projectile_Trace, "Trace" }, // 2722176712
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stats_Projectile.h" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_OldLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_OldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, OldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_OldLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_OldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_PeriodResults_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_PeriodResults = { UE4CodeGen_Private::EPropertyClass::Array, "PeriodResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, PeriodResults), METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_PeriodResults_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_PeriodResults_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_PeriodResults_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PeriodResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_HitResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_HitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_HitResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_BlockingReactObjectTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ECollisionChannel" },
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_BlockingReactObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "BlockingReactObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, BlockingReactObjectTypes), METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_BlockingReactObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_BlockingReactObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_BlockingReactObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "BlockingReactObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NumberOfBounce_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NumberOfBounce = { UE4CodeGen_Private::EPropertyClass::Int, "NumberOfBounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, NumberOfBounce), METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NumberOfBounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NumberOfBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Inited_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	void Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Inited_SetBit(void* Obj)
	{
		((AStats_Projectile*)Obj)->Inited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Inited = { UE4CodeGen_Private::EPropertyClass::Bool, "Inited", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStats_Projectile), &Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Inited_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Inited_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Inited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_MaxBounceCount_MetaData[] = {
		{ "Category", "ProjectileConfig|Bounce" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
		{ "ToolTip", "How many bounces?" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_MaxBounceCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxBounceCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, MaxBounceCount), METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_MaxBounceCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_MaxBounceCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Bounce_MetaData[] = {
		{ "Category", "ProjectileConfig|Bounce" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
		{ "ToolTip", "Need to bounce?" },
	};
#endif
	void Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Bounce_SetBit(void* Obj)
	{
		((AStats_Projectile*)Obj)->Bounce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Bounce = { UE4CodeGen_Private::EPropertyClass::Bool, "Bounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStats_Projectile), &Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Bounce_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Bounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Bounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Effects = { UE4CodeGen_Private::EPropertyClass::Array, "Effects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000014, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, Effects), METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Effects_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Effects_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Effects_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Effects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AStats_Effect_Base_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_StatsModifications_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_StatsModifications = { UE4CodeGen_Private::EPropertyClass::Array, "StatsModifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, StatsModifications), METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_StatsModifications_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_StatsModifications_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_StatsModifications_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StatsModifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsModifications, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectilePeriodEffectTime_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectilePeriodEffectTime = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectilePeriodEffectTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, ProjectilePeriodEffectTime), METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectilePeriodEffectTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectilePeriodEffectTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ApplyModifyWithFalloff_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	void Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ApplyModifyWithFalloff_SetBit(void* Obj)
	{
		((AStats_Projectile*)Obj)->ApplyModifyWithFalloff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ApplyModifyWithFalloff = { UE4CodeGen_Private::EPropertyClass::Bool, "ApplyModifyWithFalloff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStats_Projectile), &Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ApplyModifyWithFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ApplyModifyWithFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ApplyModifyWithFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_massUseInTheReaction_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	void Z_Construct_UClass_AStats_Projectile_Statics::NewProp_massUseInTheReaction_SetBit(void* Obj)
	{
		((AStats_Projectile*)Obj)->massUseInTheReaction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_massUseInTheReaction = { UE4CodeGen_Private::EPropertyClass::Bool, "massUseInTheReaction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStats_Projectile), &Z_Construct_UClass_AStats_Projectile_Statics::NewProp_massUseInTheReaction_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_massUseInTheReaction_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_massUseInTheReaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnPeriodReact_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	void Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnPeriodReact_SetBit(void* Obj)
	{
		((AStats_Projectile*)Obj)->DestroyOnPeriodReact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnPeriodReact = { UE4CodeGen_Private::EPropertyClass::Bool, "DestroyOnPeriodReact", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStats_Projectile), &Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnPeriodReact_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnPeriodReact_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnPeriodReact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnReact_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	void Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnReact_SetBit(void* Obj)
	{
		((AStats_Projectile*)Obj)->DestroyOnReact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnReact = { UE4CodeGen_Private::EPropertyClass::Bool, "DestroyOnReact", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStats_Projectile), &Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnReact_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnReact_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnReact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NeedProjectilePeriodEffect_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	void Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NeedProjectilePeriodEffect_SetBit(void* Obj)
	{
		((AStats_Projectile*)Obj)->NeedProjectilePeriodEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NeedProjectilePeriodEffect = { UE4CodeGen_Private::EPropertyClass::Bool, "NeedProjectilePeriodEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStats_Projectile), &Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NeedProjectilePeriodEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NeedProjectilePeriodEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NeedProjectilePeriodEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactionRules_MetaData[] = {
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
		{ "ToolTip", "To whom the projector will respond (friends \\ enemies \\ neutrals \\ others)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactionRules = { UE4CodeGen_Private::EPropertyClass::Array, "ReactionRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, ReactionRules), METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactionRules_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactionRules_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactionRules_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "ReactionRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_StatsPlugin_EReactRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactionRules_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactObjectTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ECollisionChannel" },
		{ "Category", "ProjectileConfig|Behavior" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
		{ "ToolTip", "An array of collisions to which the projectile reacts." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ReactObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, ReactObjectTypes), METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReactObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
		{ "ToolTip", "TeamID of Parent Actor\n\nConst Neutrals TeamID = Neutral\nConst Other TeamID = None\n\nIf an actor does not have a \"StatsComponent\" component, its TeamID is considered \"None\"" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_TeamID = { UE4CodeGen_Private::EPropertyClass::Name, "TeamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, TeamID), METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_TeamID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_TeamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileRadiusEffectCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileRadiusEffectCollision = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileRadiusEffectCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, ProjectileRadiusEffectCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileRadiusEffectCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileRadiusEffectCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileCollision = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, ProjectileCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileMovementCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileMovementCollision = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovementCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, ProjectileMovementCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileMovementCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileMovementCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stats_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileMovement = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AStats_Projectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStats_Projectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_OldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_PeriodResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_PeriodResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_BlockingReactObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_BlockingReactObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NumberOfBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Inited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_MaxBounceCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Bounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Effects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_Effects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_StatsModifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_StatsModifications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectilePeriodEffectTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ApplyModifyWithFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_massUseInTheReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnPeriodReact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_DestroyOnReact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_NeedProjectilePeriodEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactionRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactionRules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactionRules_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ReactObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileRadiusEffectCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileMovementCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Projectile_Statics::NewProp_ProjectileMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStats_Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStats_Projectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStats_Projectile_Statics::ClassParams = {
		&AStats_Projectile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AStats_Projectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStats_Projectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStats_Projectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStats_Projectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStats_Projectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStats_Projectile, 3944519483);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStats_Projectile(Z_Construct_UClass_AStats_Projectile, &AStats_Projectile::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("AStats_Projectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStats_Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
