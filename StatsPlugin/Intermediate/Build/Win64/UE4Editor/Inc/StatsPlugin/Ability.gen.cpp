// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/Ability.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbility() {}
// Cross Module References
	STATSPLUGIN_API UClass* Z_Construct_UClass_AAbility_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AAbility();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EAbilityRearmRule();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void AAbility::StaticRegisterNativesAAbility()
	{
	}
	UClass* Z_Construct_UClass_AAbility_NoRegister()
	{
		return AAbility::StaticClass();
	}
	struct Z_Construct_UClass_AAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearmRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RearmRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RearmRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationRequiedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActivationRequiedTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationRequiedTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityBlockingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityBlockingTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityBlockingTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ability.h" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::NewProp_RearmRule_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_RearmRule = { UE4CodeGen_Private::EPropertyClass::Enum, "RearmRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAbility, RearmRule), Z_Construct_UEnum_StatsPlugin_EAbilityRearmRule, METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::NewProp_RearmRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::NewProp_RearmRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_RearmRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRequiedTags_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRequiedTags = { UE4CodeGen_Private::EPropertyClass::Array, "ActivationRequiedTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAbility, ActivationRequiedTags), METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRequiedTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRequiedTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRequiedTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActivationRequiedTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::NewProp_AbilityBlockingTags_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_AbilityBlockingTags = { UE4CodeGen_Private::EPropertyClass::Array, "AbilityBlockingTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAbility, AbilityBlockingTags), METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::NewProp_AbilityBlockingTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::NewProp_AbilityBlockingTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_AbilityBlockingTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityBlockingTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_AbilityTag = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAbility, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::NewProp_AbilityTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::NewProp_AbilityTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_RearmRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_RearmRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRequiedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRequiedTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_AbilityBlockingTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_AbilityBlockingTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_AbilityTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAbility_Statics::ClassParams = {
		&AAbility::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAbility, 1191624779);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAbility(Z_Construct_UClass_AAbility, &AAbility::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("AAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
