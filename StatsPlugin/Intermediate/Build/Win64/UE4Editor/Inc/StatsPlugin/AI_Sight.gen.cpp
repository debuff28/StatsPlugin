// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/AI_Sight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Sight() {}
// Cross Module References
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_ETargetSelectingRule();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStatsIgnoreValue();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStatsSelectingValue();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsRating();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FIgnoreRule();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UAI_Sight_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UAI_Sight();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAI_Sight_CheckActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAI_Sight_EnemyIsLost();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAI_Sight_FindByRatingTarget();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAI_Sight_FindFarthestTarget();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAI_Sight_FindNearestTarget();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAI_Sight_FriendIsLost();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAI_Sight_NewEnemy();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAI_Sight_NewFriend();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAI_Sight_OrderByDistance();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAI_Sight_Update();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* ETargetSelectingRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_ETargetSelectingRule, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("ETargetSelectingRule"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETargetSelectingRule(ETargetSelectingRule_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("ETargetSelectingRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_ETargetSelectingRule_CRC() { return 8999762U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_ETargetSelectingRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETargetSelectingRule"), 0, Get_Z_Construct_UEnum_StatsPlugin_ETargetSelectingRule_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETargetSelectingRule::TSR_DistanceNearest", (int64)ETargetSelectingRule::TSR_DistanceNearest },
				{ "ETargetSelectingRule::TSR_DistanceFarthest", (int64)ETargetSelectingRule::TSR_DistanceFarthest },
				{ "ETargetSelectingRule::TSR_Rating", (int64)ETargetSelectingRule::TSR_Rating },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AI_Sight.h" },
				{ "TSR_DistanceFarthest.DisplayName", "Farthest" },
				{ "TSR_DistanceNearest.DisplayName", "Nearest" },
				{ "TSR_Rating.DisplayName", "Rating" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETargetSelectingRule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETargetSelectingRule",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStatsIgnoreValue_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_EStatsIgnoreValue, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("EStatsIgnoreValue"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatsIgnoreValue(EStatsIgnoreValue_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("EStatsIgnoreValue"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_EStatsIgnoreValue_CRC() { return 3443845420U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_EStatsIgnoreValue()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatsIgnoreValue"), 0, Get_Z_Construct_UEnum_StatsPlugin_EStatsIgnoreValue_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatsIgnoreValue::SIV_MaxValue", (int64)EStatsIgnoreValue::SIV_MaxValue },
				{ "EStatsIgnoreValue::SIV_MinValue", (int64)EStatsIgnoreValue::SIV_MinValue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AI_Sight.h" },
				{ "SIV_MaxValue.DisplayName", "MaxValue" },
				{ "SIV_MinValue.DisplayName", "MinValue" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStatsIgnoreValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EStatsIgnoreValue",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStatsSelectingValue_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_EStatsSelectingValue, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("EStatsSelectingValue"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatsSelectingValue(EStatsSelectingValue_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("EStatsSelectingValue"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_EStatsSelectingValue_CRC() { return 4267707204U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_EStatsSelectingValue()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatsSelectingValue"), 0, Get_Z_Construct_UEnum_StatsPlugin_EStatsSelectingValue_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatsSelectingValue::SSV_CurrentValue", (int64)EStatsSelectingValue::SSV_CurrentValue },
				{ "EStatsSelectingValue::SSV_MaxValue", (int64)EStatsSelectingValue::SSV_MaxValue },
				{ "EStatsSelectingValue::SSV_Percent", (int64)EStatsSelectingValue::SSV_Percent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AI_Sight.h" },
				{ "SSV_CurrentValue.DisplayName", "CurrentValue" },
				{ "SSV_MaxValue.DisplayName", "MaxValue" },
				{ "SSV_Percent.DisplayName", "Percent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStatsSelectingValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EStatsSelectingValue",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FStatsRating::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStatsRating_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatsRating, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("StatsRating"), sizeof(FStatsRating), Get_Z_Construct_UScriptStruct_FStatsRating_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatsRating(FStatsRating::StaticStruct, TEXT("/Script/StatsPlugin"), TEXT("StatsRating"), false, nullptr, nullptr);
static struct FScriptStruct_StatsPlugin_StaticRegisterNativesFStatsRating
{
	FScriptStruct_StatsPlugin_StaticRegisterNativesFStatsRating()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatsRating")),new UScriptStruct::TCppStructOps<FStatsRating>);
	}
} ScriptStruct_StatsPlugin_StaticRegisterNativesFStatsRating;
	struct Z_Construct_UScriptStruct_FStatsRating_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RatingMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RatingMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatsValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatsValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsRating_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatsRating_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatsRating>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_RatingMultiplier_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_RatingMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "RatingMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsRating, RatingMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_RatingMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_RatingMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatsValue_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatsValue = { UE4CodeGen_Private::EPropertyClass::Enum, "StatsValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsRating, StatsValue), Z_Construct_UEnum_StatsPlugin_EStatsSelectingValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatsValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatsValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatsValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatTag_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatTag = { UE4CodeGen_Private::EPropertyClass::Struct, "StatTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsRating, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatTag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatsRating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_RatingMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatsValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatsValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsRating_Statics::NewProp_StatTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatsRating_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
		nullptr,
		&NewStructOps,
		"StatsRating",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStatsRating),
		alignof(FStatsRating),
		Z_Construct_UScriptStruct_FStatsRating_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsRating_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsRating_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsRating_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatsRating()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatsRating_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatsRating"), sizeof(FStatsRating), Get_Z_Construct_UScriptStruct_FStatsRating_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatsRating_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatsRating_CRC() { return 3133587519U; }
class UScriptStruct* FIgnoreRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FIgnoreRule_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIgnoreRule, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("IgnoreRule"), sizeof(FIgnoreRule), Get_Z_Construct_UScriptStruct_FIgnoreRule_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIgnoreRule(FIgnoreRule::StaticStruct, TEXT("/Script/StatsPlugin"), TEXT("IgnoreRule"), false, nullptr, nullptr);
static struct FScriptStruct_StatsPlugin_StaticRegisterNativesFIgnoreRule
{
	FScriptStruct_StatsPlugin_StaticRegisterNativesFIgnoreRule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IgnoreRule")),new UScriptStruct::TCppStructOps<FIgnoreRule>);
	}
} ScriptStruct_StatsPlugin_StaticRegisterNativesFIgnoreRule;
	struct Z_Construct_UScriptStruct_FIgnoreRule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreIfCurrentValueEqual_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IgnoreIfCurrentValueEqual;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IgnoreIfCurrentValueEqual_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIgnoreRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIgnoreRule>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_IgnoreIfCurrentValueEqual_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_IgnoreIfCurrentValueEqual = { UE4CodeGen_Private::EPropertyClass::Enum, "IgnoreIfCurrentValueEqual", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FIgnoreRule, IgnoreIfCurrentValueEqual), Z_Construct_UEnum_StatsPlugin_EStatsIgnoreValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_IgnoreIfCurrentValueEqual_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_IgnoreIfCurrentValueEqual_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_IgnoreIfCurrentValueEqual_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_StatTag_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_StatTag = { UE4CodeGen_Private::EPropertyClass::Struct, "StatTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FIgnoreRule, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_StatTag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_StatTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIgnoreRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_IgnoreIfCurrentValueEqual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_IgnoreIfCurrentValueEqual_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIgnoreRule_Statics::NewProp_StatTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIgnoreRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
		nullptr,
		&NewStructOps,
		"IgnoreRule",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FIgnoreRule),
		alignof(FIgnoreRule),
		Z_Construct_UScriptStruct_FIgnoreRule_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FIgnoreRule_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIgnoreRule_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIgnoreRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIgnoreRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIgnoreRule_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IgnoreRule"), sizeof(FIgnoreRule), Get_Z_Construct_UScriptStruct_FIgnoreRule_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIgnoreRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIgnoreRule_CRC() { return 2078898400U; }
	static FName NAME_UAI_Sight_EnemyIsLost = FName(TEXT("EnemyIsLost"));
	void UAI_Sight::EnemyIsLost(AActor* Actor)
	{
		AI_Sight_eventEnemyIsLost_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_UAI_Sight_EnemyIsLost),&Parms);
	}
	static FName NAME_UAI_Sight_FriendIsLost = FName(TEXT("FriendIsLost"));
	void UAI_Sight::FriendIsLost(AActor* Actor)
	{
		AI_Sight_eventFriendIsLost_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_UAI_Sight_FriendIsLost),&Parms);
	}
	static FName NAME_UAI_Sight_NewEnemy = FName(TEXT("NewEnemy"));
	void UAI_Sight::NewEnemy(AActor* Actor)
	{
		AI_Sight_eventNewEnemy_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_UAI_Sight_NewEnemy),&Parms);
	}
	static FName NAME_UAI_Sight_NewFriend = FName(TEXT("NewFriend"));
	void UAI_Sight::NewFriend(AActor* Actor)
	{
		AI_Sight_eventNewFriend_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_UAI_Sight_NewFriend),&Parms);
	}
	void UAI_Sight::StaticRegisterNativesUAI_Sight()
	{
		UClass* Class = UAI_Sight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckActor", &UAI_Sight::execCheckActor },
			{ "FindByRatingTarget", &UAI_Sight::execFindByRatingTarget },
			{ "FindFarthestTarget", &UAI_Sight::execFindFarthestTarget },
			{ "FindNearestTarget", &UAI_Sight::execFindNearestTarget },
			{ "OrderByDistance", &UAI_Sight::execOrderByDistance },
			{ "Update", &UAI_Sight::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAI_Sight_CheckActor_Statics
	{
		struct AI_Sight_eventCheckActor_Parms
		{
			AActor* Actors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_CheckActor_Statics::NewProp_Actors = { UE4CodeGen_Private::EPropertyClass::Object, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventCheckActor_Parms, Actors), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAI_Sight_CheckActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_CheckActor_Statics::NewProp_Actors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Sight_CheckActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightAction" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAI_Sight_CheckActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAI_Sight, "CheckActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(AI_Sight_eventCheckActor_Parms), Z_Construct_UFunction_UAI_Sight_CheckActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_CheckActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAI_Sight_CheckActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_CheckActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAI_Sight_CheckActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAI_Sight_CheckActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAI_Sight_EnemyIsLost_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_EnemyIsLost_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventEnemyIsLost_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAI_Sight_EnemyIsLost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_EnemyIsLost_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Sight_EnemyIsLost_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightEvents" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAI_Sight_EnemyIsLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAI_Sight, "EnemyIsLost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, sizeof(AI_Sight_eventEnemyIsLost_Parms), Z_Construct_UFunction_UAI_Sight_EnemyIsLost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_EnemyIsLost_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAI_Sight_EnemyIsLost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_EnemyIsLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAI_Sight_EnemyIsLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAI_Sight_EnemyIsLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics
	{
		struct AI_Sight_eventFindByRatingTarget_Parms
		{
			TArray<AActor*> Actors;
			TArray<FStatsRating> RatingRules;
			TArray<FIgnoreRule> IgnoreRule;
			bool MaxRating;
			AActor* Target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_MaxRating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MaxRating;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreRule;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IgnoreRule_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RatingRules;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RatingRules_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventFindByRatingTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_MaxRating_SetBit(void* Obj)
	{
		((AI_Sight_eventFindByRatingTarget_Parms*)Obj)->MaxRating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_MaxRating = { UE4CodeGen_Private::EPropertyClass::Bool, "MaxRating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AI_Sight_eventFindByRatingTarget_Parms), &Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_MaxRating_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_IgnoreRule = { UE4CodeGen_Private::EPropertyClass::Array, "IgnoreRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventFindByRatingTarget_Parms, IgnoreRule), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_IgnoreRule_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "IgnoreRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIgnoreRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_RatingRules = { UE4CodeGen_Private::EPropertyClass::Array, "RatingRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventFindByRatingTarget_Parms, RatingRules), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_RatingRules_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RatingRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsRating, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_Actors = { UE4CodeGen_Private::EPropertyClass::Array, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventFindByRatingTarget_Parms, Actors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_Actors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_MaxRating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_IgnoreRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_IgnoreRule_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_RatingRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_RatingRules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightAction" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAI_Sight, "FindByRatingTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AI_Sight_eventFindByRatingTarget_Parms), Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAI_Sight_FindByRatingTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAI_Sight_FindByRatingTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics
	{
		struct AI_Sight_eventFindFarthestTarget_Parms
		{
			TArray<AActor*> Actors;
			TArray<FIgnoreRule> IgnoreRule;
			AActor* Target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreRule;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IgnoreRule_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventFindFarthestTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::NewProp_IgnoreRule = { UE4CodeGen_Private::EPropertyClass::Array, "IgnoreRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventFindFarthestTarget_Parms, IgnoreRule), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::NewProp_IgnoreRule_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "IgnoreRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIgnoreRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::NewProp_Actors = { UE4CodeGen_Private::EPropertyClass::Array, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventFindFarthestTarget_Parms, Actors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::NewProp_Actors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::NewProp_IgnoreRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::NewProp_IgnoreRule_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightAction" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAI_Sight, "FindFarthestTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AI_Sight_eventFindFarthestTarget_Parms), Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAI_Sight_FindFarthestTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAI_Sight_FindFarthestTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics
	{
		struct AI_Sight_eventFindNearestTarget_Parms
		{
			TArray<AActor*> Actors;
			TArray<FIgnoreRule> IgnoreRule;
			AActor* Target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreRule;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IgnoreRule_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventFindNearestTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::NewProp_IgnoreRule = { UE4CodeGen_Private::EPropertyClass::Array, "IgnoreRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventFindNearestTarget_Parms, IgnoreRule), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::NewProp_IgnoreRule_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "IgnoreRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIgnoreRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::NewProp_Actors = { UE4CodeGen_Private::EPropertyClass::Array, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventFindNearestTarget_Parms, Actors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::NewProp_Actors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::NewProp_IgnoreRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::NewProp_IgnoreRule_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightAction" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAI_Sight, "FindNearestTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AI_Sight_eventFindNearestTarget_Parms), Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAI_Sight_FindNearestTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAI_Sight_FindNearestTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAI_Sight_FriendIsLost_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_FriendIsLost_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventFriendIsLost_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAI_Sight_FriendIsLost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_FriendIsLost_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Sight_FriendIsLost_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightEvents" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAI_Sight_FriendIsLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAI_Sight, "FriendIsLost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, sizeof(AI_Sight_eventFriendIsLost_Parms), Z_Construct_UFunction_UAI_Sight_FriendIsLost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_FriendIsLost_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAI_Sight_FriendIsLost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_FriendIsLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAI_Sight_FriendIsLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAI_Sight_FriendIsLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAI_Sight_NewEnemy_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_NewEnemy_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventNewEnemy_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAI_Sight_NewEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_NewEnemy_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Sight_NewEnemy_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightEvents" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAI_Sight_NewEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAI_Sight, "NewEnemy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, sizeof(AI_Sight_eventNewEnemy_Parms), Z_Construct_UFunction_UAI_Sight_NewEnemy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_NewEnemy_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAI_Sight_NewEnemy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_NewEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAI_Sight_NewEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAI_Sight_NewEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAI_Sight_NewFriend_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_NewFriend_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventNewFriend_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAI_Sight_NewFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_NewFriend_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Sight_NewFriend_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightEvents" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAI_Sight_NewFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAI_Sight, "NewFriend", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, sizeof(AI_Sight_eventNewFriend_Parms), Z_Construct_UFunction_UAI_Sight_NewFriend_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_NewFriend_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAI_Sight_NewFriend_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_NewFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAI_Sight_NewFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAI_Sight_NewFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics
	{
		struct AI_Sight_eventOrderByDistance_Parms
		{
			TArray<AActor*> Actors;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::NewProp_OutActors = { UE4CodeGen_Private::EPropertyClass::Array, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventOrderByDistance_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::NewProp_OutActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::NewProp_Actors = { UE4CodeGen_Private::EPropertyClass::Array, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AI_Sight_eventOrderByDistance_Parms, Actors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::NewProp_Actors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightAction" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAI_Sight, "OrderByDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AI_Sight_eventOrderByDistance_Parms), Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAI_Sight_OrderByDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAI_Sight_OrderByDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAI_Sight_Update_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Sight_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightAction" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAI_Sight_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAI_Sight, "Update", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAI_Sight_Update_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAI_Sight_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAI_Sight_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAI_Sight_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAI_Sight_NoRegister()
	{
		return UAI_Sight::StaticClass();
	}
	struct Z_Construct_UClass_UAI_Sight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetFriend_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetFriend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetFriendSetupTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetFriendSetupTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetEnemySetupTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetEnemySetupTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DangerousZones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DangerousZones;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DangerousZones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsefulZones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsefulZones;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsefulZones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DangerousProjectiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DangerousProjectiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DangerousProjectiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsefulProjectiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsefulProjectiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsefulProjectiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LostEnemys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LostEnemys;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LostEnemys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemys;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LostFriends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LostFriends;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LostFriends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Friends;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Friends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FindedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FindedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FindedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendIgnoreRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FriendIgnoreRule;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendIgnoreRule_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendTargetSelectMaxRating_MetaData[];
#endif
		static void NewProp_FriendTargetSelectMaxRating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FriendTargetSelectMaxRating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendTargetRating_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FriendTargetRating;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendTargetRating_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendTargetSelectingRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FriendTargetSelectingRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FriendTargetSelectingRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyIgnoreRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnemyIgnoreRule;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyIgnoreRule_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyTargetSelectMaxRating_MetaData[];
#endif
		static void NewProp_EnemyTargetSelectMaxRating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnemyTargetSelectMaxRating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyTargetRating_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnemyTargetRating;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyTargetRating_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyTargetSelectingRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnemyTargetSelectingRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyTargetSelectingRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingSightObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockingSightObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlockingSightObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SightObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SightObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastSight_MetaData[];
#endif
		static void NewProp_FastSight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FastSight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatePeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdatePeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClassFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClassFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAI_Sight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAI_Sight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAI_Sight_CheckActor, "CheckActor" }, // 1593954068
		{ &Z_Construct_UFunction_UAI_Sight_EnemyIsLost, "EnemyIsLost" }, // 1259733154
		{ &Z_Construct_UFunction_UAI_Sight_FindByRatingTarget, "FindByRatingTarget" }, // 889861344
		{ &Z_Construct_UFunction_UAI_Sight_FindFarthestTarget, "FindFarthestTarget" }, // 986756303
		{ &Z_Construct_UFunction_UAI_Sight_FindNearestTarget, "FindNearestTarget" }, // 1220918071
		{ &Z_Construct_UFunction_UAI_Sight_FriendIsLost, "FriendIsLost" }, // 1226244962
		{ &Z_Construct_UFunction_UAI_Sight_NewEnemy, "NewEnemy" }, // 3521157704
		{ &Z_Construct_UFunction_UAI_Sight_NewFriend, "NewFriend" }, // 1553811899
		{ &Z_Construct_UFunction_UAI_Sight_OrderByDistance, "OrderByDistance" }, // 1537747966
		{ &Z_Construct_UFunction_UAI_Sight_Update, "Update" }, // 2374639399
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AI_Sight.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_PeriodResults_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_PeriodResults = { UE4CodeGen_Private::EPropertyClass::Array, "PeriodResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UAI_Sight, PeriodResults), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_PeriodResults_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_PeriodResults_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_PeriodResults_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PeriodResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_HitResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_HitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UAI_Sight, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_HitResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetFriend_MetaData[] = {
		{ "Category", "SightResult" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetFriend = { UE4CodeGen_Private::EPropertyClass::Object, "TargetFriend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAI_Sight, TargetFriend), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetFriend_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetFriend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetFriendSetupTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetFriendSetupTime = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetFriendSetupTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAI_Sight, TargetFriendSetupTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetFriendSetupTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetFriendSetupTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetEnemySetupTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetEnemySetupTime = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetEnemySetupTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAI_Sight, TargetEnemySetupTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetEnemySetupTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetEnemySetupTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetEnemy_MetaData[] = {
		{ "Category", "SightResult" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetEnemy = { UE4CodeGen_Private::EPropertyClass::Object, "TargetEnemy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAI_Sight, TargetEnemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetEnemy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousZones_MetaData[] = {
		{ "Category", "SightResult" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousZones = { UE4CodeGen_Private::EPropertyClass::Array, "DangerousZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAI_Sight, DangerousZones), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousZones_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousZones_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousZones_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DangerousZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulZones_MetaData[] = {
		{ "Category", "SightResult" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulZones = { UE4CodeGen_Private::EPropertyClass::Array, "UsefulZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAI_Sight, UsefulZones), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulZones_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulZones_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulZones_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "UsefulZones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousProjectiles_MetaData[] = {
		{ "Category", "SightResult" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousProjectiles = { UE4CodeGen_Private::EPropertyClass::Array, "DangerousProjectiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAI_Sight, DangerousProjectiles), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousProjectiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousProjectiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousProjectiles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DangerousProjectiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulProjectiles_MetaData[] = {
		{ "Category", "SightResult" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulProjectiles = { UE4CodeGen_Private::EPropertyClass::Array, "UsefulProjectiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAI_Sight, UsefulProjectiles), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulProjectiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulProjectiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulProjectiles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "UsefulProjectiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostEnemys_MetaData[] = {
		{ "Category", "SightResult" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostEnemys = { UE4CodeGen_Private::EPropertyClass::Array, "LostEnemys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAI_Sight, LostEnemys), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostEnemys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostEnemys_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostEnemys_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LostEnemys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_Enemys_MetaData[] = {
		{ "Category", "SightResult" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_Enemys = { UE4CodeGen_Private::EPropertyClass::Array, "Enemys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAI_Sight, Enemys), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_Enemys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_Enemys_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_Enemys_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Enemys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostFriends_MetaData[] = {
		{ "Category", "SightResult" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostFriends = { UE4CodeGen_Private::EPropertyClass::Array, "LostFriends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAI_Sight, LostFriends), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostFriends_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostFriends_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostFriends_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LostFriends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_Friends_MetaData[] = {
		{ "Category", "SightResult" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_Friends = { UE4CodeGen_Private::EPropertyClass::Array, "Friends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAI_Sight, Friends), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_Friends_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_Friends_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_Friends_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Friends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_FindedActors_MetaData[] = {
		{ "Category", "SightConfig" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_FindedActors = { UE4CodeGen_Private::EPropertyClass::Array, "FindedActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UAI_Sight, FindedActors), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FindedActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FindedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_FindedActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FindedActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "SightConfig" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UAI_Sight, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_StatComponent_MetaData[] = {
		{ "Category", "Info" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_StatComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StatComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UAI_Sight, StatComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_StatComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_StatComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendIgnoreRule_MetaData[] = {
		{ "Category", "TargetSelectingConfig|Enemy" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendIgnoreRule = { UE4CodeGen_Private::EPropertyClass::Array, "FriendIgnoreRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAI_Sight, FriendIgnoreRule), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendIgnoreRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendIgnoreRule_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendIgnoreRule_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendIgnoreRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIgnoreRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectMaxRating_MetaData[] = {
		{ "Category", "TargetSelectingConfig|Frined" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	void Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectMaxRating_SetBit(void* Obj)
	{
		((UAI_Sight*)Obj)->FriendTargetSelectMaxRating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectMaxRating = { UE4CodeGen_Private::EPropertyClass::Bool, "FriendTargetSelectMaxRating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAI_Sight), &Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectMaxRating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectMaxRating_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectMaxRating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetRating_MetaData[] = {
		{ "Category", "TargetSelectingConfig|Frined" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetRating = { UE4CodeGen_Private::EPropertyClass::Array, "FriendTargetRating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAI_Sight, FriendTargetRating), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetRating_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetRating_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetRating_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendTargetRating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsRating, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectingRule_MetaData[] = {
		{ "Category", "TargetSelectingConfig|Frined" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectingRule = { UE4CodeGen_Private::EPropertyClass::Enum, "FriendTargetSelectingRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAI_Sight, FriendTargetSelectingRule), Z_Construct_UEnum_StatsPlugin_ETargetSelectingRule, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectingRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectingRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectingRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyIgnoreRule_MetaData[] = {
		{ "Category", "TargetSelectingConfig|Enemy" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyIgnoreRule = { UE4CodeGen_Private::EPropertyClass::Array, "EnemyIgnoreRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAI_Sight, EnemyIgnoreRule), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyIgnoreRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyIgnoreRule_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyIgnoreRule_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EnemyIgnoreRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIgnoreRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectMaxRating_MetaData[] = {
		{ "Category", "TargetSelectingConfig|Enemy" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	void Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectMaxRating_SetBit(void* Obj)
	{
		((UAI_Sight*)Obj)->EnemyTargetSelectMaxRating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectMaxRating = { UE4CodeGen_Private::EPropertyClass::Bool, "EnemyTargetSelectMaxRating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAI_Sight), &Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectMaxRating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectMaxRating_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectMaxRating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetRating_MetaData[] = {
		{ "Category", "TargetSelectingConfig|Enemy" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetRating = { UE4CodeGen_Private::EPropertyClass::Array, "EnemyTargetRating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAI_Sight, EnemyTargetRating), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetRating_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetRating_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetRating_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EnemyTargetRating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsRating, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectingRule_MetaData[] = {
		{ "Category", "TargetSelectingConfig|Enemy" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectingRule = { UE4CodeGen_Private::EPropertyClass::Enum, "EnemyTargetSelectingRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAI_Sight, EnemyTargetSelectingRule), Z_Construct_UEnum_StatsPlugin_ETargetSelectingRule, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectingRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectingRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectingRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_BlockingSightObjectTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ECollisionChannel" },
		{ "Category", "SightConfig" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_BlockingSightObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "BlockingSightObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAI_Sight, BlockingSightObjectTypes), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_BlockingSightObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_BlockingSightObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_BlockingSightObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "BlockingSightObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightObjectTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ECollisionChannel" },
		{ "Category", "SightConfig" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "SightObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAI_Sight, SightObjectTypes), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightObjectTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "SightObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_FastSight_MetaData[] = {
		{ "Category", "SightConfig" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	void Z_Construct_UClass_UAI_Sight_Statics::NewProp_FastSight_SetBit(void* Obj)
	{
		((UAI_Sight*)Obj)->FastSight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_FastSight = { UE4CodeGen_Private::EPropertyClass::Bool, "FastSight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAI_Sight), &Z_Construct_UClass_UAI_Sight_Statics::NewProp_FastSight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FastSight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_FastSight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightRadius_MetaData[] = {
		{ "Category", "SightConfig" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SightRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAI_Sight, SightRadius), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_UpdatePeriod_MetaData[] = {
		{ "Category", "SightConfig" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_UpdatePeriod = { UE4CodeGen_Private::EPropertyClass::Float, "UpdatePeriod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAI_Sight, UpdatePeriod), METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_UpdatePeriod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_UpdatePeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorClassFilter_MetaData[] = {
		{ "Category", "SightConfig" },
		{ "ModuleRelativePath", "Public/AI_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorClassFilter = { UE4CodeGen_Private::EPropertyClass::Class, "ActorClassFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAI_Sight, ActorClassFilter), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorClassFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorClassFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAI_Sight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_PeriodResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_PeriodResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetFriendSetupTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetEnemySetupTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_TargetEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousZones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousZones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulZones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulZones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousProjectiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_DangerousProjectiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulProjectiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_UsefulProjectiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostEnemys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostEnemys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_Enemys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_Enemys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostFriends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_LostFriends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_Friends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_Friends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_FindedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_FindedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_StatComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendIgnoreRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendIgnoreRule_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectMaxRating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetRating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetRating_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectingRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_FriendTargetSelectingRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyIgnoreRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyIgnoreRule_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectMaxRating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetRating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetRating_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectingRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_EnemyTargetSelectingRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_BlockingSightObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_BlockingSightObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_FastSight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_SightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_UpdatePeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAI_Sight_Statics::NewProp_ActorClassFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAI_Sight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAI_Sight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAI_Sight_Statics::ClassParams = {
		&UAI_Sight::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAI_Sight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAI_Sight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAI_Sight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAI_Sight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAI_Sight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAI_Sight, 2551595964);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAI_Sight(Z_Construct_UClass_UAI_Sight, &UAI_Sight::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("UAI_Sight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAI_Sight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
