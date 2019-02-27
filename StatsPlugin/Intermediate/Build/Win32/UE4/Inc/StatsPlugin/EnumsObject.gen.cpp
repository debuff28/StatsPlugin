// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/EnumsObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumsObject() {}
// Cross Module References
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EAbilityActivationRule();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EAbilityRearmRule();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EEffectModifyType();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_ESpellActiveType();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_ESpellBaseType();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStackCountRules();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStackRules();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EReactRule();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStatValueType();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_ERegenRule();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStatChangeType();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UEnumsObject_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UEnumsObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAbilityActivationRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_EAbilityActivationRule, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("EAbilityActivationRule"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAbilityActivationRule(EAbilityActivationRule_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("EAbilityActivationRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_EAbilityActivationRule_CRC() { return 1891417873U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_EAbilityActivationRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAbilityActivationRule"), 0, Get_Z_Construct_UEnum_StatsPlugin_EAbilityActivationRule_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAbilityActivationRule::AAR_OneClick", (int64)EAbilityActivationRule::AAR_OneClick },
				{ "EAbilityActivationRule::AAR_KeyHold", (int64)EAbilityActivationRule::AAR_KeyHold },
				{ "EAbilityActivationRule::AAR_KeyHoldOrClicks", (int64)EAbilityActivationRule::AAR_KeyHoldOrClicks },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AAR_KeyHold.DisplayName", "KeyHold" },
				{ "AAR_KeyHoldOrClicks.DisplayName", "KeyHoldOrClicks" },
				{ "AAR_OneClick.DisplayName", "OneClick" },
				{ "BlueprintType", "true" },
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/EnumsObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAbilityActivationRule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAbilityActivationRule",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAbilityRearmRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_EAbilityRearmRule, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("EAbilityRearmRule"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAbilityRearmRule(EAbilityRearmRule_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("EAbilityRearmRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_EAbilityRearmRule_CRC() { return 4288056786U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_EAbilityRearmRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAbilityRearmRule"), 0, Get_Z_Construct_UEnum_StatsPlugin_EAbilityRearmRule_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAbilityRearmRule::ARR_NoRearm", (int64)EAbilityRearmRule::ARR_NoRearm },
				{ "EAbilityRearmRule::ARR_RearmAfterAbilityFinishWork", (int64)EAbilityRearmRule::ARR_RearmAfterAbilityFinishWork },
				{ "EAbilityRearmRule::ARR_RearmAfterAbilityStartWork", (int64)EAbilityRearmRule::ARR_RearmAfterAbilityStartWork },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ARR_NoRearm.DisplayName", "NoCooldown" },
				{ "ARR_RearmAfterAbilityFinishWork.DisplayName", "StartCooldownAfterAbilityFinishWork" },
				{ "ARR_RearmAfterAbilityStartWork.DisplayName", "StartCooldownAfterAbilityStartWork" },
				{ "BlueprintType", "true" },
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/EnumsObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAbilityRearmRule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAbilityRearmRule",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEffectModifyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_EEffectModifyType, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("EEffectModifyType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEffectModifyType(EEffectModifyType_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("EEffectModifyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_EEffectModifyType_CRC() { return 2321463748U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_EEffectModifyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEffectModifyType"), 0, Get_Z_Construct_UEnum_StatsPlugin_EEffectModifyType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEffectModifyType::EMT_Permanent", (int64)EEffectModifyType::EMT_Permanent },
				{ "EEffectModifyType::EMT_Temporary", (int64)EEffectModifyType::EMT_Temporary },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMT_Permanent.DisplayName", "Permanent" },
				{ "EMT_Temporary.DisplayName", "Temporary" },
				{ "ModuleRelativePath", "Public/EnumsObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEffectModifyType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EEffectModifyType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpellActiveType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_ESpellActiveType, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("ESpellActiveType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpellActiveType(ESpellActiveType_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("ESpellActiveType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_ESpellActiveType_CRC() { return 2784103807U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_ESpellActiveType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpellActiveType"), 0, Get_Z_Construct_UEnum_StatsPlugin_ESpellActiveType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpellActiveType::SAT_OneClick", (int64)ESpellActiveType::SAT_OneClick },
				{ "ESpellActiveType::SAT_KeyHold", (int64)ESpellActiveType::SAT_KeyHold },
				{ "ESpellActiveType::SAT_KeyHoldOrFastClicks", (int64)ESpellActiveType::SAT_KeyHoldOrFastClicks },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EnumsObject.h" },
				{ "SAT_KeyHold.DisplayName", "KeyHold" },
				{ "SAT_KeyHoldOrFastClicks.DisplayName", "KeyHoldOrFastClicks" },
				{ "SAT_OneClick.DisplayName", "OneClick" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpellActiveType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESpellActiveType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpellBaseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_ESpellBaseType, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("ESpellBaseType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpellBaseType(ESpellBaseType_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("ESpellBaseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_ESpellBaseType_CRC() { return 4189209410U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_ESpellBaseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpellBaseType"), 0, Get_Z_Construct_UEnum_StatsPlugin_ESpellBaseType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpellBaseType::SBT_SpellSpawner", (int64)ESpellBaseType::SBT_SpellSpawner },
				{ "ESpellBaseType::SBT_Projectile", (int64)ESpellBaseType::SBT_Projectile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EnumsObject.h" },
				{ "SBT_Projectile.DisplayName", "SpawnProjectile" },
				{ "SBT_SpellSpawner.DisplayName", "SpawnSpellSpawner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpellBaseType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESpellBaseType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStackCountRules_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_EStackCountRules, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("EStackCountRules"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStackCountRules(EStackCountRules_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("EStackCountRules"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_EStackCountRules_CRC() { return 3151761836U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_EStackCountRules()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStackCountRules"), 0, Get_Z_Construct_UEnum_StatsPlugin_EStackCountRules_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStackCountRules::SCR_ReplaceTheOldest", (int64)EStackCountRules::SCR_ReplaceTheOldest },
				{ "EStackCountRules::SCR_ReplaceTheNewest", (int64)EStackCountRules::SCR_ReplaceTheNewest },
				{ "EStackCountRules::SCR_None", (int64)EStackCountRules::SCR_None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EnumsObject.h" },
				{ "SCR_None.DisplayName", "None" },
				{ "SCR_ReplaceTheNewest.DisplayName", "ReplaceTheNewest" },
				{ "SCR_ReplaceTheOldest.DisplayName", "ReplaceTheOldest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStackCountRules",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EStackCountRules",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStackRules_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_EStackRules, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("EStackRules"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStackRules(EStackRules_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("EStackRules"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_EStackRules_CRC() { return 3171545414U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_EStackRules()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStackRules"), 0, Get_Z_Construct_UEnum_StatsPlugin_EStackRules_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStackRules::SR_EachStackHasItsOwnTime", (int64)EStackRules::SR_EachStackHasItsOwnTime },
				{ "EStackRules::SR_AllStacksHaveATotalTime", (int64)EStackRules::SR_AllStacksHaveATotalTime },
				{ "EStackRules::SR_NewStackReplacesOld", (int64)EStackRules::SR_NewStackReplacesOld },
				{ "EStackRules::SR_NewStackNotReplacesOld", (int64)EStackRules::SR_NewStackNotReplacesOld },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EnumsObject.h" },
				{ "SR_AllStacksHaveATotalTime.DisplayName", "AllStacksHaveATotalTime" },
				{ "SR_EachStackHasItsOwnTime.DisplayName", "EachStackHasItsOwnTime" },
				{ "SR_NewStackNotReplacesOld.DisplayName", "NewStackNotReplacesOld" },
				{ "SR_NewStackReplacesOld.DisplayName", "NewStackReplacesOld" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStackRules",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EStackRules",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EReactRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_EReactRule, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("EReactRule"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReactRule(EReactRule_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("EReactRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_EReactRule_CRC() { return 535660903U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_EReactRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReactRule"), 0, Get_Z_Construct_UEnum_StatsPlugin_EReactRule_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReactRule::RR_Frieds", (int64)EReactRule::RR_Frieds },
				{ "EReactRule::RR_Enemys", (int64)EReactRule::RR_Enemys },
				{ "EReactRule::RR_Neutrals", (int64)EReactRule::RR_Neutrals },
				{ "EReactRule::RR_Other", (int64)EReactRule::RR_Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EnumsObject.h" },
				{ "RR_Enemys.DisplayName", "Enemys" },
				{ "RR_Frieds.DisplayName", "Friends" },
				{ "RR_Neutrals.DisplayName", "Neutrals " },
				{ "RR_Other.DisplayName", "Other" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EReactRule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EReactRule",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStatValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_EStatValueType, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("EStatValueType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatValueType(EStatValueType_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("EStatValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_EStatValueType_CRC() { return 2223466586U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_EStatValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatValueType"), 0, Get_Z_Construct_UEnum_StatsPlugin_EStatValueType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatValueType::SVT_Base", (int64)EStatValueType::SVT_Base },
				{ "EStatValueType::SVT_Current", (int64)EStatValueType::SVT_Current },
				{ "EStatValueType::SVT_RegenBase", (int64)EStatValueType::SVT_RegenBase },
				{ "EStatValueType::SVT_RegenCurrent", (int64)EStatValueType::SVT_RegenCurrent },
				{ "EStatValueType::SVT_MaxBase", (int64)EStatValueType::SVT_MaxBase },
				{ "EStatValueType::SVT_MaxCurrent", (int64)EStatValueType::SVT_MaxCurrent },
				{ "EStatValueType::SVT_MinBase", (int64)EStatValueType::SVT_MinBase },
				{ "EStatValueType::SVT_MinCurrent", (int64)EStatValueType::SVT_MinCurrent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EnumsObject.h" },
				{ "SVT_Base.DisplayName", "Base" },
				{ "SVT_Current.DisplayName", "Current" },
				{ "SVT_MaxBase.DisplayName", "MaxBase" },
				{ "SVT_MaxCurrent.DisplayName", "MaxCurrent" },
				{ "SVT_MinBase.DisplayName", "MinBase" },
				{ "SVT_MinCurrent.DisplayName", "MinCurrent" },
				{ "SVT_RegenBase.DisplayName", "RegenBase" },
				{ "SVT_RegenCurrent.DisplayName", "RegenCurrent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStatValueType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EStatValueType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERegenRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_ERegenRule, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("ERegenRule"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERegenRule(ERegenRule_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("ERegenRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_ERegenRule_CRC() { return 944194361U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_ERegenRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERegenRule"), 0, Get_Z_Construct_UEnum_StatsPlugin_ERegenRule_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERegenRule::RR_ConstantRegen", (int64)ERegenRule::RR_ConstantRegen },
				{ "ERegenRule::RR_PauseRegenAfterModify", (int64)ERegenRule::RR_PauseRegenAfterModify },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EnumsObject.h" },
				{ "RR_ConstantRegen.DisplayName", "Constant" },
				{ "RR_PauseRegenAfterModify.DisplayName", "PauseRegenAfterModify" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERegenRule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERegenRule",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStatChangeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsPlugin_EStatChangeType, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("EStatChangeType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatChangeType(EStatChangeType_StaticEnum, TEXT("/Script/StatsPlugin"), TEXT("EStatChangeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsPlugin_EStatChangeType_CRC() { return 795894143U; }
	UEnum* Z_Construct_UEnum_StatsPlugin_EStatChangeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatChangeType"), 0, Get_Z_Construct_UEnum_StatsPlugin_EStatChangeType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatChangeType::SCT_Add", (int64)EStatChangeType::SCT_Add },
				{ "EStatChangeType::SCT_Sub", (int64)EStatChangeType::SCT_Sub },
				{ "EStatChangeType::SCT_Multiply", (int64)EStatChangeType::SCT_Multiply },
				{ "EStatChangeType::SCT_Divide", (int64)EStatChangeType::SCT_Divide },
				{ "EStatChangeType::SCT_AddPercent", (int64)EStatChangeType::SCT_AddPercent },
				{ "EStatChangeType::SCT_SubtractPercent", (int64)EStatChangeType::SCT_SubtractPercent },
				{ "EStatChangeType::SCT_SetValue", (int64)EStatChangeType::SCT_SetValue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/EnumsObject.h" },
				{ "SCT_Add.DisplayName", "Add" },
				{ "SCT_AddPercent.DisplayName", "AddPercent" },
				{ "SCT_Divide.DisplayName", "Divide" },
				{ "SCT_Multiply.DisplayName", "Multiply" },
				{ "SCT_SetValue.DisplayName", "SetValue" },
				{ "SCT_Sub.DisplayName", "Subtract" },
				{ "SCT_SubtractPercent.DisplayName", "SubtractPercent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStatChangeType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EStatChangeType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEnumsObject::StaticRegisterNativesUEnumsObject()
	{
	}
	UClass* Z_Construct_UClass_UEnumsObject_NoRegister()
	{
		return UEnumsObject::StaticClass();
	}
	struct Z_Construct_UClass_UEnumsObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnumsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnumsObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnumsObject.h" },
		{ "ModuleRelativePath", "Public/EnumsObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnumsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnumsObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnumsObject_Statics::ClassParams = {
		&UEnumsObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEnumsObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnumsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnumsObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnumsObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnumsObject, 1207633380);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnumsObject(Z_Construct_UClass_UEnumsObject, &UEnumsObject::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("UEnumsObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnumsObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
