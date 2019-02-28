// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/Stats_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStats_HUD() {}
// Cross Module References
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAbilities();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UAbility_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_HUD_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_HUD_getData();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UAbilitiesComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FAbilities::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAbilities_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilities, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("Abilities"), sizeof(FAbilities), Get_Z_Construct_UScriptStruct_FAbilities_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAbilities(FAbilities::StaticStruct, TEXT("/Script/StatsPlugin"), TEXT("Abilities"), false, nullptr, nullptr);
static struct FScriptStruct_StatsPlugin_StaticRegisterNativesFAbilities
{
	FScriptStruct_StatsPlugin_StaticRegisterNativesFAbilities()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Abilities")),new UScriptStruct::TCppStructOps<FAbilities>);
	}
} ScriptStruct_StatsPlugin_StaticRegisterNativesFAbilities;
	struct Z_Construct_UScriptStruct_FAbilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilities_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Stats_HUD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilities_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilities>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "Ability" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stats_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Ability = { UE4CodeGen_Private::EPropertyClass::Object, "Ability", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(FAbilities, Ability), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Ability_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Stats_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAbilities, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_ID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_Ability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilities_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilities_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
		nullptr,
		&NewStructOps,
		"Abilities",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FAbilities),
		alignof(FAbilities),
		Z_Construct_UScriptStruct_FAbilities_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilities_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilities_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilities()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAbilities_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Abilities"), sizeof(FAbilities), Get_Z_Construct_UScriptStruct_FAbilities_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAbilities_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAbilities_CRC() { return 202612668U; }
	void AStats_HUD::StaticRegisterNativesAStats_HUD()
	{
		UClass* Class = AStats_HUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getData", &AStats_HUD::execgetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStats_HUD_getData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_HUD_getData_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsHUD" },
		{ "ModuleRelativePath", "Public/Stats_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_HUD_getData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_HUD, "getData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_HUD_getData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_HUD_getData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_HUD_getData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_HUD_getData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStats_HUD_NoRegister()
	{
		return AStats_HUD::StaticClass();
	}
	struct Z_Construct_UClass_AStats_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatsComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityesComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityesComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_getDataPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_getDataPeriod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStats_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStats_HUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStats_HUD_getData, "getData" }, // 3342264955
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Stats_HUD.h" },
		{ "ModuleRelativePath", "Public/Stats_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_HUD_Statics::NewProp_StatsComponent_MetaData[] = {
		{ "Category", "info" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stats_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStats_HUD_Statics::NewProp_StatsComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StatsComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008001c, 1, nullptr, STRUCT_OFFSET(AStats_HUD, StatsComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStats_HUD_Statics::NewProp_StatsComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_HUD_Statics::NewProp_StatsComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_HUD_Statics::NewProp_AbilityesComponent_MetaData[] = {
		{ "Category", "info" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stats_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStats_HUD_Statics::NewProp_AbilityesComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AbilityesComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008001c, 1, nullptr, STRUCT_OFFSET(AStats_HUD, AbilityesComponent), Z_Construct_UClass_UAbilitiesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStats_HUD_Statics::NewProp_AbilityesComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_HUD_Statics::NewProp_AbilityesComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_HUD_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "info" },
		{ "ModuleRelativePath", "Public/Stats_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStats_HUD_Statics::NewProp_Abilities = { UE4CodeGen_Private::EPropertyClass::Array, "Abilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000014, 1, nullptr, STRUCT_OFFSET(AStats_HUD, Abilities), METADATA_PARAMS(Z_Construct_UClass_AStats_HUD_Statics::NewProp_Abilities_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_HUD_Statics::NewProp_Abilities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStats_HUD_Statics::NewProp_Abilities_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Abilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAbilities, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_HUD_Statics::NewProp_getDataPeriod_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Stats_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStats_HUD_Statics::NewProp_getDataPeriod = { UE4CodeGen_Private::EPropertyClass::Float, "getDataPeriod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AStats_HUD, getDataPeriod), METADATA_PARAMS(Z_Construct_UClass_AStats_HUD_Statics::NewProp_getDataPeriod_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_HUD_Statics::NewProp_getDataPeriod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStats_HUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_HUD_Statics::NewProp_StatsComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_HUD_Statics::NewProp_AbilityesComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_HUD_Statics::NewProp_Abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_HUD_Statics::NewProp_Abilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_HUD_Statics::NewProp_getDataPeriod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStats_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStats_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStats_HUD_Statics::ClassParams = {
		&AStats_HUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AStats_HUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStats_HUD_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStats_HUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStats_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStats_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStats_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStats_HUD, 2586319450);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStats_HUD(Z_Construct_UClass_AStats_HUD, &AStats_HUD::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("AStats_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStats_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
