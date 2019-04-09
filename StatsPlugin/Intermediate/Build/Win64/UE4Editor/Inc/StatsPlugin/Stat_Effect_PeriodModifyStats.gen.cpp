// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/Stat_Effect_PeriodModifyStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStat_Effect_PeriodModifyStats() {}
// Cross Module References
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStat_Effect_PeriodModifyStats_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStat_Effect_PeriodModifyStats();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_Effect_Base();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_ApplyModificators();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_FinishEffect();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_StartEffect();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsModifications();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stat_Effect_PeriodModifyStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin, "NoParamsDelegatePeriodModifyStats__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AStat_Effect_PeriodModifyStats_FinishEffect = FName(TEXT("FinishEffect"));
	void AStat_Effect_PeriodModifyStats::FinishEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStat_Effect_PeriodModifyStats_FinishEffect),NULL);
	}
	static FName NAME_AStat_Effect_PeriodModifyStats_StartEffect = FName(TEXT("StartEffect"));
	void AStat_Effect_PeriodModifyStats::StartEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStat_Effect_PeriodModifyStats_StartEffect),NULL);
	}
	void AStat_Effect_PeriodModifyStats::StaticRegisterNativesAStat_Effect_PeriodModifyStats()
	{
		UClass* Class = AStat_Effect_PeriodModifyStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyModificators", &AStat_Effect_PeriodModifyStats::execApplyModificators },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_ApplyModificators_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_ApplyModificators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stat_Effect_PeriodModifyStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_ApplyModificators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStat_Effect_PeriodModifyStats, "ApplyModificators", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_ApplyModificators_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_ApplyModificators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_ApplyModificators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_ApplyModificators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_FinishEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_FinishEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectEvents" },
		{ "ModuleRelativePath", "Public/Stat_Effect_PeriodModifyStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_FinishEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStat_Effect_PeriodModifyStats, "FinishEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_FinishEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_FinishEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_FinishEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_FinishEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_StartEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_StartEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectEvents" },
		{ "ModuleRelativePath", "Public/Stat_Effect_PeriodModifyStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_StartEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStat_Effect_PeriodModifyStats, "StartEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_StartEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_StartEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_StartEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_StartEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStat_Effect_PeriodModifyStats_NoRegister()
	{
		return AStat_Effect_PeriodModifyStats::StaticClass();
	}
	struct Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishEffect_Server_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FinishEffect_Server;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishEffect_Multicast_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FinishEffect_Multicast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartEffect_Server_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StartEffect_Server;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartEffect_Multicast_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StartEffect_Multicast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyModificatorsPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ApplyModificatorsPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsModifications_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatsModifications;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatsModifications_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStats_Effect_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_ApplyModificators, "ApplyModificators" }, // 658961457
		{ &Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_FinishEffect, "FinishEffect" }, // 2434062170
		{ &Z_Construct_UFunction_AStat_Effect_PeriodModifyStats_StartEffect, "StartEffect" }, // 2383176397
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stat_Effect_PeriodModifyStats.h" },
		{ "ModuleRelativePath", "Public/Stat_Effect_PeriodModifyStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_FinishEffect_Server_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stat_Effect_PeriodModifyStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_FinishEffect_Server = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "FinishEffect_Server", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AStat_Effect_PeriodModifyStats, FinishEffect_Server), Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_FinishEffect_Server_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_FinishEffect_Server_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_FinishEffect_Multicast_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stat_Effect_PeriodModifyStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_FinishEffect_Multicast = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "FinishEffect_Multicast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AStat_Effect_PeriodModifyStats, FinishEffect_Multicast), Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_FinishEffect_Multicast_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_FinishEffect_Multicast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StartEffect_Server_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stat_Effect_PeriodModifyStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StartEffect_Server = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "StartEffect_Server", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AStat_Effect_PeriodModifyStats, StartEffect_Server), Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StartEffect_Server_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StartEffect_Server_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StartEffect_Multicast_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stat_Effect_PeriodModifyStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StartEffect_Multicast = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "StartEffect_Multicast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AStat_Effect_PeriodModifyStats, StartEffect_Multicast), Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StartEffect_Multicast_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StartEffect_Multicast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_ApplyModificatorsPeriod_MetaData[] = {
		{ "Category", "Effect|Modification" },
		{ "ModuleRelativePath", "Public/Stat_Effect_PeriodModifyStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_ApplyModificatorsPeriod = { UE4CodeGen_Private::EPropertyClass::Float, "ApplyModificatorsPeriod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStat_Effect_PeriodModifyStats, ApplyModificatorsPeriod), METADATA_PARAMS(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_ApplyModificatorsPeriod_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_ApplyModificatorsPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StatsModifications_MetaData[] = {
		{ "Category", "Effect|Modification" },
		{ "ModuleRelativePath", "Public/Stat_Effect_PeriodModifyStats.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StatsModifications = { UE4CodeGen_Private::EPropertyClass::Array, "StatsModifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStat_Effect_PeriodModifyStats, StatsModifications), METADATA_PARAMS(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StatsModifications_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StatsModifications_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StatsModifications_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StatsModifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsModifications, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_FinishEffect_Server,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_FinishEffect_Multicast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StartEffect_Server,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StartEffect_Multicast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_ApplyModificatorsPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StatsModifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::NewProp_StatsModifications_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStat_Effect_PeriodModifyStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::ClassParams = {
		&AStat_Effect_PeriodModifyStats::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStat_Effect_PeriodModifyStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStat_Effect_PeriodModifyStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStat_Effect_PeriodModifyStats, 3091992339);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStat_Effect_PeriodModifyStats(Z_Construct_UClass_AStat_Effect_PeriodModifyStats, &AStat_Effect_PeriodModifyStats::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("AStat_Effect_PeriodModifyStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStat_Effect_PeriodModifyStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
