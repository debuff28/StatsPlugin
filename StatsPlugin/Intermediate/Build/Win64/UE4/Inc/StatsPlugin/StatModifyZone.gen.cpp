// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/StatModifyZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatModifyZone() {}
// Cross Module References
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EZoneType();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStatModifyZone_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStatModifyZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStatModifyZone_CheckCollision();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStatModifyZone_NewActorInZone();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FZoneAplicatedEffects();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_Effect_Base_NoRegister();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsModifications();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EReactRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature_Statics
	{
		struct _Script_StatsPlugin_eventOneParamsDelegateZone_Parms
		{
			AActor* actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature_Statics::NewProp_actor = { UE4CodeGen_Private::EPropertyClass::Object, "actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventOneParamsDelegateZone_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin, "OneParamsDelegateZone__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_StatsPlugin_eventOneParamsDelegateZone_Parms), Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EZoneType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_EZoneType, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("EZoneType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EZoneType(EZoneType_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("EZoneType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_EZoneType_CRC() { return 582544899U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_EZoneType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EZoneType"), 0, Get_Z_Construct_UEnum_StatsPlugin_EZoneType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EZoneType::ZT_PeriodAplication", (int64)EZoneType::ZT_PeriodAplication },
				{ "EZoneType::ZT_OnEnterAplication", (int64)EZoneType::ZT_OnEnterAplication },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/StatModifyZone.h" },
				{ "ZT_OnEnterAplication.DisplayName", "OnEnterAplication" },
				{ "ZT_PeriodAplication.DisplayName", "PeriodAplication" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EZoneType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EZoneType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AStatModifyZone::StaticRegisterNativesAStatModifyZone()
	{
		UClass* Class = AStatModifyZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorLeaveZone", &AStatModifyZone::execActorLeaveZone },
			{ "CheckCollision", &AStatModifyZone::execCheckCollision },
			{ "NewActorInZone", &AStatModifyZone::execNewActorInZone },
			{ "ZoneApplyModsAndEffects", &AStatModifyZone::execZoneApplyModsAndEffects },
			{ "ZoneApplyModsAndEffectsToActor", &AStatModifyZone::execZoneApplyModsAndEffectsToActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone_Statics
	{
		struct StatModifyZone_eventActorLeaveZone_Parms
		{
			AActor* ActorLeave;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorLeave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone_Statics::NewProp_ActorLeave = { UE4CodeGen_Private::EPropertyClass::Object, "ActorLeave", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatModifyZone_eventActorLeaveZone_Parms, ActorLeave), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone_Statics::NewProp_ActorLeave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatModifyZone, "ActorLeaveZone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StatModifyZone_eventActorLeaveZone_Parms), Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatModifyZone_CheckCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatModifyZone_CheckCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatModifyZone_CheckCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatModifyZone, "CheckCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatModifyZone_CheckCollision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatModifyZone_CheckCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatModifyZone_CheckCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatModifyZone_CheckCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatModifyZone_NewActorInZone_Statics
	{
		struct StatModifyZone_eventNewActorInZone_Parms
		{
			AActor* NewActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatModifyZone_NewActorInZone_Statics::NewProp_NewActor = { UE4CodeGen_Private::EPropertyClass::Object, "NewActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatModifyZone_eventNewActorInZone_Parms, NewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatModifyZone_NewActorInZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatModifyZone_NewActorInZone_Statics::NewProp_NewActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatModifyZone_NewActorInZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatModifyZone_NewActorInZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatModifyZone, "NewActorInZone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StatModifyZone_eventNewActorInZone_Parms), Z_Construct_UFunction_AStatModifyZone_NewActorInZone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatModifyZone_NewActorInZone_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatModifyZone_NewActorInZone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatModifyZone_NewActorInZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatModifyZone_NewActorInZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatModifyZone_NewActorInZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics
	{
		struct StatModifyZone_eventZoneApplyModsAndEffects_Parms
		{
			TArray<FHitResult> ReactHitResults;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReactHitResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReactHitResults_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::NewProp_ReactHitResults = { UE4CodeGen_Private::EPropertyClass::Array, "ReactHitResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000080, 1, nullptr, STRUCT_OFFSET(StatModifyZone_eventZoneApplyModsAndEffects_Parms, ReactHitResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::NewProp_ReactHitResults_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReactHitResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::NewProp_ReactHitResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::NewProp_ReactHitResults_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatModifyZone, "ZoneApplyModsAndEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StatModifyZone_eventZoneApplyModsAndEffects_Parms), Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor_Statics
	{
		struct StatModifyZone_eventZoneApplyModsAndEffectsToActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatModifyZone_eventZoneApplyModsAndEffectsToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatModifyZone, "ZoneApplyModsAndEffectsToActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StatModifyZone_eventZoneApplyModsAndEffectsToActor_Parms), Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStatModifyZone_NoRegister()
	{
		return AStatModifyZone::StaticClass();
	}
	struct Z_Construct_UClass_AStatModifyZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorLeaveZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorLeaveZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNewActorInZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewActorInZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlapedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AplicatedEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AplicatedEffects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AplicatedEffects_Inner;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyOnReact_MetaData[];
#endif
		static void NewProp_DestroyOnReact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestroyOnReact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckCollisionPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckCollisionPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveAplicatedEffectOnLeaveZone_MetaData[];
#endif
		static void NewProp_RemoveAplicatedEffectOnLeaveZone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveAplicatedEffectOnLeaveZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneType_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ZoneType;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ZoneType_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZoneType_Inner_Underlying;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZoneCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TeamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStatModifyZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStatModifyZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStatModifyZone_ActorLeaveZone, "ActorLeaveZone" }, // 3435620394
		{ &Z_Construct_UFunction_AStatModifyZone_CheckCollision, "CheckCollision" }, // 623105416
		{ &Z_Construct_UFunction_AStatModifyZone_NewActorInZone, "NewActorInZone" }, // 1315510962
		{ &Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffects, "ZoneApplyModsAndEffects" }, // 2411092609
		{ &Z_Construct_UFunction_AStatModifyZone_ZoneApplyModsAndEffectsToActor, "ZoneApplyModsAndEffectsToActor" }, // 3120231358
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StatModifyZone.h" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OnActorLeaveZone_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OnActorLeaveZone = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnActorLeaveZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, OnActorLeaveZone), Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OnActorLeaveZone_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OnActorLeaveZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OnNewActorInZone_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OnNewActorInZone = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnNewActorInZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, OnNewActorInZone), Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OnNewActorInZone_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OnNewActorInZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_HitResults_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_HitResults = { UE4CodeGen_Private::EPropertyClass::Array, "HitResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, HitResults), METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_HitResults_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_HitResults_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_HitResults_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OverlapedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OverlapedActors = { UE4CodeGen_Private::EPropertyClass::Array, "OverlapedActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, OverlapedActors), METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OverlapedActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OverlapedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OverlapedActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapedActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_AplicatedEffects_MetaData[] = {
		{ "Category", "StatModifyZone" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_AplicatedEffects = { UE4CodeGen_Private::EPropertyClass::Array, "AplicatedEffects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, AplicatedEffects), METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_AplicatedEffects_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_AplicatedEffects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_AplicatedEffects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AplicatedEffects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FZoneAplicatedEffects, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "Zone|Effects" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_Effects = { UE4CodeGen_Private::EPropertyClass::Array, "Effects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, Effects), METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_Effects_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_Effects_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_Effects_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Effects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AStats_Effect_Base_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_StatsModifications_MetaData[] = {
		{ "Category", "Zone|Modification" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_StatsModifications = { UE4CodeGen_Private::EPropertyClass::Array, "StatsModifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, StatsModifications), METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_StatsModifications_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_StatsModifications_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_StatsModifications_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StatsModifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsModifications, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_DestroyOnReact_MetaData[] = {
		{ "Category", "Zone|Behavior" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	void Z_Construct_UClass_AStatModifyZone_Statics::NewProp_DestroyOnReact_SetBit(void* Obj)
	{
		((AStatModifyZone*)Obj)->DestroyOnReact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_DestroyOnReact = { UE4CodeGen_Private::EPropertyClass::Bool, "DestroyOnReact", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStatModifyZone), &Z_Construct_UClass_AStatModifyZone_Statics::NewProp_DestroyOnReact_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_DestroyOnReact_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_DestroyOnReact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_CheckCollisionPeriod_MetaData[] = {
		{ "Category", "Zone|Behavior" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_CheckCollisionPeriod = { UE4CodeGen_Private::EPropertyClass::Float, "CheckCollisionPeriod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, CheckCollisionPeriod), METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_CheckCollisionPeriod_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_CheckCollisionPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_RemoveAplicatedEffectOnLeaveZone_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ECollisionChannel" },
		{ "Category", "Zone|Behavior" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	void Z_Construct_UClass_AStatModifyZone_Statics::NewProp_RemoveAplicatedEffectOnLeaveZone_SetBit(void* Obj)
	{
		((AStatModifyZone*)Obj)->RemoveAplicatedEffectOnLeaveZone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_RemoveAplicatedEffectOnLeaveZone = { UE4CodeGen_Private::EPropertyClass::Bool, "RemoveAplicatedEffectOnLeaveZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStatModifyZone), &Z_Construct_UClass_AStatModifyZone_Statics::NewProp_RemoveAplicatedEffectOnLeaveZone_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_RemoveAplicatedEffectOnLeaveZone_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_RemoveAplicatedEffectOnLeaveZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneType_MetaData[] = {
		{ "Category", "Zone|Behavior" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneType = { UE4CodeGen_Private::EPropertyClass::Array, "ZoneType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, ZoneType), METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneType_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneType_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "ZoneType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_StatsPlugin_EZoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneType_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactionRules_MetaData[] = {
		{ "Category", "Zone|Behavior" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactionRules = { UE4CodeGen_Private::EPropertyClass::Array, "ReactionRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, ReactionRules), METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactionRules_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactionRules_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactionRules_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "ReactionRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_StatsPlugin_EReactRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactionRules_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactObjectTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ECollisionChannel" },
		{ "Category", "Zone|Behavior" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ReactObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, ReactObjectTypes), METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReactObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneCollision = { UE4CodeGen_Private::EPropertyClass::Object, "ZoneCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, ZoneCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatModifyZone_Statics::NewProp_TeamID_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ECollisionChannel" },
		{ "Category", "Zone" },
		{ "ModuleRelativePath", "Public/StatModifyZone.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AStatModifyZone_Statics::NewProp_TeamID = { UE4CodeGen_Private::EPropertyClass::Name, "TeamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStatModifyZone, TeamID), METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_TeamID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::NewProp_TeamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStatModifyZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OnActorLeaveZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OnNewActorInZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_HitResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_HitResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OverlapedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_OverlapedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_AplicatedEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_AplicatedEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_Effects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_Effects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_StatsModifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_StatsModifications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_DestroyOnReact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_CheckCollisionPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_RemoveAplicatedEffectOnLeaveZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneType_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneType_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactionRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactionRules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactionRules_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ReactObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_ZoneCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatModifyZone_Statics::NewProp_TeamID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStatModifyZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatModifyZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStatModifyZone_Statics::ClassParams = {
		&AStatModifyZone::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AStatModifyZone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStatModifyZone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStatModifyZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStatModifyZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStatModifyZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStatModifyZone, 2932131315);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStatModifyZone(Z_Construct_UClass_AStatModifyZone, &AStatModifyZone::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("AStatModifyZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStatModifyZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
