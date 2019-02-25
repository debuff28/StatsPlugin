// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/StructsObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructsObject() {}
// Cross Module References
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsModifications();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsAffectingParameters();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStatValueType();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStatChangeType();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatInputModifyAffects();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInputModifyRetargeting();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsDatabase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_ERegenRule();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FReplicateTmapSupportStruct();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FZoneAplicatedEffects();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStructsObject_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStructsObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FStatsModifications::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStatsModifications_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatsModifications, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("StatsModifications"), sizeof(FStatsModifications), Get_Z_Construct_UScriptStruct_FStatsModifications_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatsModifications(FStatsModifications::StaticStruct, TEXT("/Script/StatsPlugin"), TEXT("StatsModifications"), false, nullptr, nullptr);
static struct FScriptStruct_StatsPlugin_StaticRegisterNativesFStatsModifications
{
	FScriptStruct_StatsPlugin_StaticRegisterNativesFStatsModifications()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatsModifications")),new UScriptStruct::TCppStructOps<FStatsModifications>);
	}
} ScriptStruct_StatsPlugin_StaticRegisterNativesFStatsModifications;
	struct Z_Construct_UScriptStruct_FStatsModifications_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionInfoTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionInfoTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionInfoTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearChange_MetaData[];
#endif
		static void NewProp_ClearChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClearChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyDamageIfNotFoundStatsComponent_MetaData[];
#endif
		static void NewProp_ApplyDamageIfNotFoundStatsComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyDamageIfNotFoundStatsComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectingStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AffectingStats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AffectingStats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChangeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChangeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModificationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsModifications_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatsModifications_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatsModifications>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AdditionInfoTags_MetaData[] = {
		{ "Category", "StatsModifications" },
		{ "DisplayName", "AdditionTags" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "Addition info like Fire\\Ice Damage, Heal, buff, etc" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AdditionInfoTags = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionInfoTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsModifications, AdditionInfoTags), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AdditionInfoTags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AdditionInfoTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AdditionInfoTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AdditionInfoTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ClearChange_MetaData[] = {
		{ "Category", "StatsModifications" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "Target actor stats affect to stat modification" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ClearChange_SetBit(void* Obj)
	{
		((FStatsModifications*)Obj)->ClearChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ClearChange = { UE4CodeGen_Private::EPropertyClass::Bool, "ClearChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStatsModifications), &Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ClearChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ClearChange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ClearChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ApplyDamageIfNotFoundStatsComponent_MetaData[] = {
		{ "Category", "StatsModifications" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "apply standard damage if there is no StatsComponent" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ApplyDamageIfNotFoundStatsComponent_SetBit(void* Obj)
	{
		((FStatsModifications*)Obj)->ApplyDamageIfNotFoundStatsComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ApplyDamageIfNotFoundStatsComponent = { UE4CodeGen_Private::EPropertyClass::Bool, "ApplyDamageIfNotFoundStatsComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStatsModifications), &Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ApplyDamageIfNotFoundStatsComponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ApplyDamageIfNotFoundStatsComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ApplyDamageIfNotFoundStatsComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AffectingStats_MetaData[] = {
		{ "Category", "StatsModifications" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "What stats and how do they affect the modification. From owners stats." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AffectingStats = { UE4CodeGen_Private::EPropertyClass::Array, "AffectingStats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsModifications, AffectingStats), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AffectingStats_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AffectingStats_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AffectingStats_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AffectingStats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsAffectingParameters, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ValueType_MetaData[] = {
		{ "Category", "StatsModifications" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "What value is changing" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ValueType = { UE4CodeGen_Private::EPropertyClass::Enum, "ValueType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsModifications, ValueType), Z_Construct_UEnum_StatsPlugin_EStatValueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ValueType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ValueType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ValueType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ChangeType_MetaData[] = {
		{ "Category", "StatsModifications" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "How to change" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ChangeType = { UE4CodeGen_Private::EPropertyClass::Enum, "ChangeType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsModifications, ChangeType), Z_Construct_UEnum_StatsPlugin_EStatChangeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ChangeType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ChangeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ChangeType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ModificationValue_MetaData[] = {
		{ "Category", "StatsModifications" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "modification value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ModificationValue = { UE4CodeGen_Private::EPropertyClass::Float, "ModificationValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsModifications, ModificationValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ModificationValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ModificationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_Stat_MetaData[] = {
		{ "Category", "StatsModifications" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "Stat tag to modification" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_Stat = { UE4CodeGen_Private::EPropertyClass::Struct, "Stat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsModifications, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_Stat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_Stat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatsModifications_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AdditionInfoTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AdditionInfoTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ClearChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ApplyDamageIfNotFoundStatsComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AffectingStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_AffectingStats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ChangeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ChangeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_ModificationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsModifications_Statics::NewProp_Stat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatsModifications_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
		nullptr,
		&NewStructOps,
		"StatsModifications",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStatsModifications),
		alignof(FStatsModifications),
		Z_Construct_UScriptStruct_FStatsModifications_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifications_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsModifications_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsModifications_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatsModifications()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatsModifications_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatsModifications"), sizeof(FStatsModifications), Get_Z_Construct_UScriptStruct_FStatsModifications_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatsModifications_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatsModifications_CRC() { return 3461007201U; }
class UScriptStruct* FStatInputModifyAffects::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStatInputModifyAffects_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatInputModifyAffects, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("StatInputModifyAffects"), sizeof(FStatInputModifyAffects), Get_Z_Construct_UScriptStruct_FStatInputModifyAffects_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatInputModifyAffects(FStatInputModifyAffects::StaticStruct, TEXT("/Script/StatsPlugin"), TEXT("StatInputModifyAffects"), false, nullptr, nullptr);
static struct FScriptStruct_StatsPlugin_StaticRegisterNativesFStatInputModifyAffects
{
	FScriptStruct_StatsPlugin_StaticRegisterNativesFStatInputModifyAffects()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatInputModifyAffects")),new UScriptStruct::TCppStructOps<FStatInputModifyAffects>);
	}
} ScriptStruct_StatsPlugin_StaticRegisterNativesFStatInputModifyAffects;
	struct Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Affects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Affects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Affects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputModifyTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputModifyTag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputModifyTag_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatInputModifyAffects>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_Affects_MetaData[] = {
		{ "Category", "StatAffects" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_Affects = { UE4CodeGen_Private::EPropertyClass::Array, "Affects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatInputModifyAffects, Affects), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_Affects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_Affects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_Affects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Affects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsAffectingParameters, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_InputModifyTag_MetaData[] = {
		{ "Category", "StatAffects" },
		{ "DisplayName", "ModifyTags_InputOrAdiitions" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_InputModifyTag = { UE4CodeGen_Private::EPropertyClass::Array, "InputModifyTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatInputModifyAffects, InputModifyTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_InputModifyTag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_InputModifyTag_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_InputModifyTag_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InputModifyTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_Affects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_Affects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_InputModifyTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::NewProp_InputModifyTag_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
		nullptr,
		&NewStructOps,
		"StatInputModifyAffects",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStatInputModifyAffects),
		alignof(FStatInputModifyAffects),
		Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatInputModifyAffects()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatInputModifyAffects_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatInputModifyAffects"), sizeof(FStatInputModifyAffects), Get_Z_Construct_UScriptStruct_FStatInputModifyAffects_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatInputModifyAffects_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatInputModifyAffects_CRC() { return 1376115808U; }
class UScriptStruct* FInputModifyRetargeting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FInputModifyRetargeting_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputModifyRetargeting, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("InputModifyRetargeting"), sizeof(FInputModifyRetargeting), Get_Z_Construct_UScriptStruct_FInputModifyRetargeting_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputModifyRetargeting(FInputModifyRetargeting::StaticStruct, TEXT("/Script/StatsPlugin"), TEXT("InputModifyRetargeting"), false, nullptr, nullptr);
static struct FScriptStruct_StatsPlugin_StaticRegisterNativesFInputModifyRetargeting
{
	FScriptStruct_StatsPlugin_StaticRegisterNativesFInputModifyRetargeting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputModifyRetargeting")),new UScriptStruct::TCppStructOps<FInputModifyRetargeting>);
	}
} ScriptStruct_StatsPlugin_StaticRegisterNativesFInputModifyRetargeting;
	struct Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetModifyMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RetargetModifyMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RetargetValues;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RetargetValues_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RetargetValues_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetModifyTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RetargetModifyTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputModifyTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputModifyTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputModifyRetargeting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetModifyMultiplier_MetaData[] = {
		{ "Category", "StatRetarget" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetModifyMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "RetargetModifyMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputModifyRetargeting, RetargetModifyMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetModifyMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetModifyMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetValues_MetaData[] = {
		{ "Category", "StatRetarget" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetValues = { UE4CodeGen_Private::EPropertyClass::Array, "RetargetValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputModifyRetargeting, RetargetValues), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetValues_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetValues_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetValues_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "RetargetValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_StatsPlugin_EStatValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetValues_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetModifyTag_MetaData[] = {
		{ "Category", "StatRetarget" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetModifyTag = { UE4CodeGen_Private::EPropertyClass::Struct, "RetargetModifyTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputModifyRetargeting, RetargetModifyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetModifyTag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetModifyTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_InputModifyTag_MetaData[] = {
		{ "Category", "StatRetarget" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_InputModifyTag = { UE4CodeGen_Private::EPropertyClass::Struct, "InputModifyTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputModifyRetargeting, InputModifyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_InputModifyTag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_InputModifyTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetModifyMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetValues_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_RetargetModifyTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::NewProp_InputModifyTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
		nullptr,
		&NewStructOps,
		"InputModifyRetargeting",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FInputModifyRetargeting),
		alignof(FInputModifyRetargeting),
		Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputModifyRetargeting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputModifyRetargeting_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputModifyRetargeting"), sizeof(FInputModifyRetargeting), Get_Z_Construct_UScriptStruct_FInputModifyRetargeting_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputModifyRetargeting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputModifyRetargeting_CRC() { return 2621517418U; }
class UScriptStruct* FStatsDatabase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStatsDatabase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatsDatabase, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("StatsDatabase"), sizeof(FStatsDatabase), Get_Z_Construct_UScriptStruct_FStatsDatabase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatsDatabase(FStatsDatabase::StaticStruct, TEXT("/Script/StatsPlugin"), TEXT("StatsDatabase"), false, nullptr, nullptr);
static struct FScriptStruct_StatsPlugin_StaticRegisterNativesFStatsDatabase
{
	FScriptStruct_StatsPlugin_StaticRegisterNativesFStatsDatabase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatsDatabase")),new UScriptStruct::TCppStructOps<FStatsDatabase>);
	}
} ScriptStruct_StatsPlugin_StaticRegisterNativesFStatsDatabase;
	struct Z_Construct_UScriptStruct_FStatsDatabase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueWasChanged_MetaData[];
#endif
		static void NewProp_ValueWasChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValueWasChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegenIsStoped_MetaData[];
#endif
		static void NewProp_RegenIsStoped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RegenIsStoped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PauseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopRegenOnMinValue_MetaData[];
#endif
		static void NewProp_StopRegenOnMinValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopRegenOnMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegenPauseLenght_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RegenPauseLenght;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regenRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_regenRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_regenRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMinCurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatMinCurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMinBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatMinBaseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMaxCurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatMaxCurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMaxBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatMaxBaseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatRegenCurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatRegenCurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatRegenBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatRegenBaseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatCurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatBaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatsDatabase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_ValueWasChanged_MetaData[] = {
		{ "Category", "StatsDatabase||" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_ValueWasChanged_SetBit(void* Obj)
	{
		((FStatsDatabase*)Obj)->ValueWasChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_ValueWasChanged = { UE4CodeGen_Private::EPropertyClass::Bool, "ValueWasChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStatsDatabase), &Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_ValueWasChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_ValueWasChanged_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_ValueWasChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenIsStoped_MetaData[] = {
		{ "Category", "StatsDatabase||" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenIsStoped_SetBit(void* Obj)
	{
		((FStatsDatabase*)Obj)->RegenIsStoped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenIsStoped = { UE4CodeGen_Private::EPropertyClass::Bool, "RegenIsStoped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStatsDatabase), &Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenIsStoped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenIsStoped_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenIsStoped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_PauseTime_MetaData[] = {
		{ "Category", "StatsDatabase||" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_PauseTime = { UE4CodeGen_Private::EPropertyClass::Struct, "PauseTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FStatsDatabase, PauseTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_PauseTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_PauseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StopRegenOnMinValue_MetaData[] = {
		{ "Category", "StatsDatabase" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StopRegenOnMinValue_SetBit(void* Obj)
	{
		((FStatsDatabase*)Obj)->StopRegenOnMinValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StopRegenOnMinValue = { UE4CodeGen_Private::EPropertyClass::Bool, "StopRegenOnMinValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStatsDatabase), &Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StopRegenOnMinValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StopRegenOnMinValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StopRegenOnMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenPauseLenght_MetaData[] = {
		{ "Category", "StatsDatabase" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenPauseLenght = { UE4CodeGen_Private::EPropertyClass::Float, "RegenPauseLenght", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsDatabase, RegenPauseLenght), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenPauseLenght_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenPauseLenght_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_regenRule_MetaData[] = {
		{ "Category", "StatsDatabase" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_regenRule = { UE4CodeGen_Private::EPropertyClass::Enum, "regenRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsDatabase, regenRule), Z_Construct_UEnum_StatsPlugin_ERegenRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_regenRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_regenRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_regenRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMinCurrentValue_MetaData[] = {
		{ "Category", "StatsDatabase||" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMinCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMinCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FStatsDatabase, StatMinCurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMinCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMinCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMinBaseValue_MetaData[] = {
		{ "Category", "StatsDatabase" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMinBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMinBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsDatabase, StatMinBaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMinBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMinBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMaxCurrentValue_MetaData[] = {
		{ "Category", "StatsDatabase||" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMaxCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMaxCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FStatsDatabase, StatMaxCurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMaxCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMaxCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMaxBaseValue_MetaData[] = {
		{ "Category", "StatsDatabase" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMaxBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMaxBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsDatabase, StatMaxBaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMaxBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMaxBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatRegenCurrentValue_MetaData[] = {
		{ "Category", "StatsDatabase||" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatRegenCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatRegenCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FStatsDatabase, StatRegenCurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatRegenCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatRegenCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatRegenBaseValue_MetaData[] = {
		{ "Category", "StatsDatabase" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatRegenBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatRegenBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsDatabase, StatRegenBaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatRegenBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatRegenBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatCurrentValue_MetaData[] = {
		{ "Category", "StatsDatabase||" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FStatsDatabase, StatCurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatBaseValue_MetaData[] = {
		{ "Category", "StatsDatabase" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsDatabase, StatBaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatBaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatsDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_ValueWasChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenIsStoped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_PauseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StopRegenOnMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_RegenPauseLenght,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_regenRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_regenRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMinCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMinBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMaxCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatMaxBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatRegenCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatRegenBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsDatabase_Statics::NewProp_StatBaseValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatsDatabase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
		nullptr,
		&NewStructOps,
		"StatsDatabase",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStatsDatabase),
		alignof(FStatsDatabase),
		Z_Construct_UScriptStruct_FStatsDatabase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsDatabase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsDatabase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatsDatabase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatsDatabase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatsDatabase"), sizeof(FStatsDatabase), Get_Z_Construct_UScriptStruct_FStatsDatabase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatsDatabase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatsDatabase_CRC() { return 3501781364U; }
class UScriptStruct* FReplicateTmapSupportStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("ReplicateTmapSupportStruct"), sizeof(FReplicateTmapSupportStruct), Get_Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplicateTmapSupportStruct(FReplicateTmapSupportStruct::StaticStruct, TEXT("/Script/StatsPlugin"), TEXT("ReplicateTmapSupportStruct"), false, nullptr, nullptr);
static struct FScriptStruct_StatsPlugin_StaticRegisterNativesFReplicateTmapSupportStruct
{
	FScriptStruct_StatsPlugin_StaticRegisterNativesFReplicateTmapSupportStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplicateTmapSupportStruct")),new UScriptStruct::TCppStructOps<FReplicateTmapSupportStruct>);
	}
} ScriptStruct_StatsPlugin_StaticRegisterNativesFReplicateTmapSupportStruct;
	struct Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegenIsStoped_MetaData[];
#endif
		static void NewProp_RegenIsStoped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RegenIsStoped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PauseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopRegenOnMinValue_MetaData[];
#endif
		static void NewProp_StopRegenOnMinValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopRegenOnMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegenPauseLenght_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RegenPauseLenght;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regenRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_regenRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_regenRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMinCurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatMinCurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMinBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatMinBaseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMaxCurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatMaxCurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMaxBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatMaxBaseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatRegenCurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatRegenCurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatRegenBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatRegenBaseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatCurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatBaseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicateTmapSupportStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenIsStoped_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenIsStoped_SetBit(void* Obj)
	{
		((FReplicateTmapSupportStruct*)Obj)->RegenIsStoped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenIsStoped = { UE4CodeGen_Private::EPropertyClass::Bool, "RegenIsStoped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FReplicateTmapSupportStruct), &Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenIsStoped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenIsStoped_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenIsStoped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_PauseTime_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_PauseTime = { UE4CodeGen_Private::EPropertyClass::Struct, "PauseTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, PauseTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_PauseTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_PauseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StopRegenOnMinValue_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StopRegenOnMinValue_SetBit(void* Obj)
	{
		((FReplicateTmapSupportStruct*)Obj)->StopRegenOnMinValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StopRegenOnMinValue = { UE4CodeGen_Private::EPropertyClass::Bool, "StopRegenOnMinValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FReplicateTmapSupportStruct), &Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StopRegenOnMinValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StopRegenOnMinValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StopRegenOnMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenPauseLenght_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenPauseLenght = { UE4CodeGen_Private::EPropertyClass::Float, "RegenPauseLenght", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, RegenPauseLenght), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenPauseLenght_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenPauseLenght_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_regenRule_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_regenRule = { UE4CodeGen_Private::EPropertyClass::Enum, "regenRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, regenRule), Z_Construct_UEnum_StatsPlugin_ERegenRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_regenRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_regenRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_regenRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMinCurrentValue_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMinCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMinCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, StatMinCurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMinCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMinCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMinBaseValue_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMinBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMinBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, StatMinBaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMinBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMinBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMaxCurrentValue_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMaxCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMaxCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, StatMaxCurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMaxCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMaxCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMaxBaseValue_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMaxBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMaxBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, StatMaxBaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMaxBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMaxBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatRegenCurrentValue_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatRegenCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatRegenCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, StatRegenCurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatRegenCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatRegenCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatRegenBaseValue_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatRegenBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatRegenBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, StatRegenBaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatRegenBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatRegenBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatCurrentValue_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, StatCurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatBaseValue_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, StatBaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_tag_MetaData[] = {
		{ "Category", "ReplicateTmapSupportStruct" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_tag = { UE4CodeGen_Private::EPropertyClass::Struct, "tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReplicateTmapSupportStruct, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_tag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenIsStoped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_PauseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StopRegenOnMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_RegenPauseLenght,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_regenRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_regenRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMinCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMinBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMaxCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatMaxBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatRegenCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatRegenBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_StatBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::NewProp_tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
		nullptr,
		&NewStructOps,
		"ReplicateTmapSupportStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FReplicateTmapSupportStruct),
		alignof(FReplicateTmapSupportStruct),
		Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicateTmapSupportStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplicateTmapSupportStruct"), sizeof(FReplicateTmapSupportStruct), Get_Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplicateTmapSupportStruct_CRC() { return 1769062471U; }
class UScriptStruct* FZoneAplicatedEffects::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FZoneAplicatedEffects_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneAplicatedEffects, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("ZoneAplicatedEffects"), sizeof(FZoneAplicatedEffects), Get_Z_Construct_UScriptStruct_FZoneAplicatedEffects_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FZoneAplicatedEffects(FZoneAplicatedEffects::StaticStruct, TEXT("/Script/StatsPlugin"), TEXT("ZoneAplicatedEffects"), false, nullptr, nullptr);
static struct FScriptStruct_StatsPlugin_StaticRegisterNativesFZoneAplicatedEffects
{
	FScriptStruct_StatsPlugin_StaticRegisterNativesFZoneAplicatedEffects()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ZoneAplicatedEffects")),new UScriptStruct::TCppStructOps<FZoneAplicatedEffects>);
	}
} ScriptStruct_StatsPlugin_StaticRegisterNativesFZoneAplicatedEffects;
	struct Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AplicatedEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AplicatedEffects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AplicatedEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneAplicatedEffects>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_AplicatedEffects_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "How do we affecting to modification" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_AplicatedEffects = { UE4CodeGen_Private::EPropertyClass::Array, "AplicatedEffects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FZoneAplicatedEffects, AplicatedEffects), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_AplicatedEffects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_AplicatedEffects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_AplicatedEffects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AplicatedEffects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_TargetActor = { UE4CodeGen_Private::EPropertyClass::Object, "TargetActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FZoneAplicatedEffects, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_TargetActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_AplicatedEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_AplicatedEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::NewProp_TargetActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
		nullptr,
		&NewStructOps,
		"ZoneAplicatedEffects",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FZoneAplicatedEffects),
		alignof(FZoneAplicatedEffects),
		Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneAplicatedEffects()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FZoneAplicatedEffects_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ZoneAplicatedEffects"), sizeof(FZoneAplicatedEffects), Get_Z_Construct_UScriptStruct_FZoneAplicatedEffects_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FZoneAplicatedEffects_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FZoneAplicatedEffects_CRC() { return 628428390U; }
class UScriptStruct* FStatsAffectingParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStatsAffectingParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatsAffectingParameters, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("StatsAffectingParameters"), sizeof(FStatsAffectingParameters), Get_Z_Construct_UScriptStruct_FStatsAffectingParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatsAffectingParameters(FStatsAffectingParameters::StaticStruct, TEXT("/Script/StatsPlugin"), TEXT("StatsAffectingParameters"), false, nullptr, nullptr);
static struct FScriptStruct_StatsPlugin_StaticRegisterNativesFStatsAffectingParameters
{
	FScriptStruct_StatsPlugin_StaticRegisterNativesFStatsAffectingParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatsAffectingParameters")),new UScriptStruct::TCppStructOps<FStatsAffectingParameters>);
	}
} ScriptStruct_StatsPlugin_StaticRegisterNativesFStatsAffectingParameters;
	struct Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectingMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_affectingMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectingValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_affectingValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_affectingValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_affectingType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_affectingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectingStatTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_affectingStatTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatsAffectingParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingMultiplier_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "affecting multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "affectingMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsAffectingParameters, affectingMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingValue_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "What value is affecting" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingValue = { UE4CodeGen_Private::EPropertyClass::Enum, "affectingValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsAffectingParameters, affectingValue), Z_Construct_UEnum_StatsPlugin_EStatValueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingType_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "How do we affecting to modification" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingType = { UE4CodeGen_Private::EPropertyClass::Enum, "affectingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsAffectingParameters, affectingType), Z_Construct_UEnum_StatsPlugin_EStatChangeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingStatTag_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
		{ "ToolTip", "Stat tag which affects to modification" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingStatTag = { UE4CodeGen_Private::EPropertyClass::Struct, "affectingStatTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsAffectingParameters, affectingStatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingStatTag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingStatTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::NewProp_affectingStatTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
		nullptr,
		&NewStructOps,
		"StatsAffectingParameters",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStatsAffectingParameters),
		alignof(FStatsAffectingParameters),
		Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatsAffectingParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatsAffectingParameters_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatsAffectingParameters"), sizeof(FStatsAffectingParameters), Get_Z_Construct_UScriptStruct_FStatsAffectingParameters_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatsAffectingParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatsAffectingParameters_CRC() { return 1909628882U; }
	void UStructsObject::StaticRegisterNativesUStructsObject()
	{
	}
	UClass* Z_Construct_UClass_UStructsObject_NoRegister()
	{
		return UStructsObject::StaticClass();
	}
	struct Z_Construct_UClass_UStructsObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStructsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructsObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructsObject.h" },
		{ "ModuleRelativePath", "Public/StructsObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStructsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructsObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStructsObject_Statics::ClassParams = {
		&UStructsObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStructsObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStructsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStructsObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStructsObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStructsObject, 2207326764);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStructsObject(Z_Construct_UClass_UStructsObject, &UStructsObject::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("UStructsObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStructsObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
