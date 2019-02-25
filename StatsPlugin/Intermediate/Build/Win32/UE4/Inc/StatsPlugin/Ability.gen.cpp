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
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AAbility_AbilityPress();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AAbility_AbilityRelease();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EAbilityActivationRule();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityCooldown();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityAffects();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void AAbility::StaticRegisterNativesAAbility()
	{
		UClass* Class = AAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbilityPress", &AAbility::execAbilityPress },
			{ "AbilityRelease", &AAbility::execAbilityRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAbility_AbilityPress_Statics
	{
		struct Ability_eventAbilityPress_Parms
		{
			AActor* ActionIniciator;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionIniciator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAbility_AbilityPress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ability_eventAbilityPress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAbility_AbilityPress_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Ability_eventAbilityPress_Parms), &Z_Construct_UFunction_AAbility_AbilityPress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAbility_AbilityPress_Statics::NewProp_ActionIniciator = { UE4CodeGen_Private::EPropertyClass::Object, "ActionIniciator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventAbilityPress_Parms, ActionIniciator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAbility_AbilityPress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAbility_AbilityPress_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAbility_AbilityPress_Statics::NewProp_ActionIniciator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbility_AbilityPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbility_AbilityPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbility, "AbilityPress", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Ability_eventAbilityPress_Parms), Z_Construct_UFunction_AAbility_AbilityPress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAbility_AbilityPress_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbility_AbilityPress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAbility_AbilityPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbility_AbilityPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbility_AbilityPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAbility_AbilityRelease_Statics
	{
		struct Ability_eventAbilityRelease_Parms
		{
			AActor* ActionIniciator;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionIniciator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAbility_AbilityRelease_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ability_eventAbilityRelease_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAbility_AbilityRelease_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Ability_eventAbilityRelease_Parms), &Z_Construct_UFunction_AAbility_AbilityRelease_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAbility_AbilityRelease_Statics::NewProp_ActionIniciator = { UE4CodeGen_Private::EPropertyClass::Object, "ActionIniciator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventAbilityRelease_Parms, ActionIniciator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAbility_AbilityRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAbility_AbilityRelease_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAbility_AbilityRelease_Statics::NewProp_ActionIniciator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAbility_AbilityRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAbility_AbilityRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAbility, "AbilityRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Ability_eventAbilityRelease_Parms), Z_Construct_UFunction_AAbility_AbilityRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAbility_AbilityRelease_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAbility_AbilityRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAbility_AbilityRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAbility_AbilityRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAbility_AbilityRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAbility_NoRegister()
	{
		return AAbility::StaticClass();
	}
	struct Z_Construct_UClass_AAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerStatComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerStatComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActivationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActivationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RearmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityAffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityAffects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityAffects_Inner;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatComponent;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAbility_AbilityPress, "AbilityPress" }, // 2601487577
		{ &Z_Construct_UFunction_AAbility_AbilityRelease, "AbilityRelease" }, // 1980765020
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ability.h" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::NewProp_OwnerStatComponent_MetaData[] = {
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_OwnerStatComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerStatComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008001c, 1, nullptr, STRUCT_OFFSET(AAbility, OwnerStatComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::NewProp_OwnerStatComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::NewProp_OwnerStatComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRule_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "ActivationRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAbility, ActivationRule), Z_Construct_UEnum_StatsPlugin_EAbilityActivationRule, METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::NewProp_RearmLength_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_RearmLength = { UE4CodeGen_Private::EPropertyClass::Float, "RearmLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAbility, RearmLength), METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::NewProp_RearmLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::NewProp_RearmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::NewProp_CooldownRule_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_CooldownRule = { UE4CodeGen_Private::EPropertyClass::Struct, "CooldownRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAbility, CooldownRule), Z_Construct_UScriptStruct_FAbilityCooldown, METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::NewProp_CooldownRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::NewProp_CooldownRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::NewProp_AbilityAffects_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_AbilityAffects = { UE4CodeGen_Private::EPropertyClass::Array, "AbilityAffects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAbility, AbilityAffects), METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::NewProp_AbilityAffects_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::NewProp_AbilityAffects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_AbilityAffects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityAffects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAbilityAffects, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::NewProp_StatComponent_MetaData[] = {
		{ "Category", "Abilities|Stats" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_StatComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StatComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009000d, 1, nullptr, STRUCT_OFFSET(AAbility, StatComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::NewProp_StatComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::NewProp_StatComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbility_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAbility_Statics::NewProp_AbilityTag = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAbility, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AAbility_Statics::NewProp_AbilityTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAbility_Statics::NewProp_AbilityTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_OwnerStatComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_RearmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_CooldownRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_AbilityAffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_AbilityAffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRequiedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_ActivationRequiedTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_AbilityBlockingTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_AbilityBlockingTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_StatComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbility_Statics::NewProp_AbilityTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAbility_Statics::ClassParams = {
		&AAbility::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AAbility, 2285540025);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAbility(Z_Construct_UClass_AAbility, &AAbility::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("AAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
