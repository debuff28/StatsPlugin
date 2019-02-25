// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/AbilitiesComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitiesComponent() {}
// Cross Module References
	STATSPLUGIN_API UClass* Z_Construct_UClass_UAbilitiesComponent_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UAbilitiesComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_AbilitiesCheck();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AAbility_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UAbilitiesComponent::StaticRegisterNativesUAbilitiesComponent()
	{
		UClass* Class = UAbilitiesComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbilitiesCheck", &UAbilitiesComponent::execAbilitiesCheck },
			{ "GetAbilitiesStatus", &UAbilitiesComponent::execGetAbilitiesStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_AbilitiesCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_AbilitiesCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_AbilitiesCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "AbilitiesCheck", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_AbilitiesCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AbilitiesCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_AbilitiesCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_AbilitiesCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus_Statics
	{
		struct AbilitiesComponent_eventGetAbilitiesStatus_Parms
		{
			FGameplayTag AbilityTag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus_Statics::NewProp_AbilityTag = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventGetAbilitiesStatus_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus_Statics::NewProp_AbilityTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "GetAbilitiesStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AbilitiesComponent_eventGetAbilitiesStatus_Parms), Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilitiesComponent_NoRegister()
	{
		return UAbilitiesComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitiesComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitiesCheckPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbilitiesCheckPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitiesClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilitiesClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilitiesClasses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitiesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilitiesComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilitiesComponent_AbilitiesCheck, "AbilitiesCheck" }, // 3680231374
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesStatus, "GetAbilitiesStatus" }, // 2455329024
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitiesComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbilitiesComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities = { UE4CodeGen_Private::EPropertyClass::Array, "Abilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UAbilitiesComponent, Abilities), METADATA_PARAMS(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Abilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesCheckPeriod_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesCheckPeriod = { UE4CodeGen_Private::EPropertyClass::Float, "AbilitiesCheckPeriod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UAbilitiesComponent, AbilitiesCheckPeriod), METADATA_PARAMS(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesCheckPeriod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesCheckPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesClasses_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesClasses = { UE4CodeGen_Private::EPropertyClass::Array, "AbilitiesClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010005, 1, nullptr, STRUCT_OFFSET(UAbilitiesComponent, AbilitiesClasses), METADATA_PARAMS(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "AbilitiesClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitiesComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesCheckPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilitiesClasses_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitiesComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitiesComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilitiesComponent_Statics::ClassParams = {
		&UAbilitiesComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAbilitiesComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAbilitiesComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilitiesComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilitiesComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilitiesComponent, 388883895);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilitiesComponent(Z_Construct_UClass_UAbilitiesComponent, &UAbilitiesComponent::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("UAbilitiesComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitiesComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
