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
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UAbility_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UAbilitiesComponent_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UAbilitiesComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_AddAbility();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_Effect_Base_NoRegister();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsPlugin_eventAbilityActionsDelegate_Parms
		{
			UAbility* Ability;
			int32 ID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventAbilityActionsDelegate_Parms, ID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::NewProp_Ability_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::NewProp_Ability = { UE4CodeGen_Private::EPropertyClass::Object, "Ability", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventAbilityActionsDelegate_Parms, Ability), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::NewProp_Ability_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::NewProp_Ability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin, "AbilityActionsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_StatsPlugin_eventAbilityActionsDelegate_Parms), Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAbilitiesComponent::StaticRegisterNativesUAbilitiesComponent()
	{
		UClass* Class = UAbilitiesComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbilityWasActivated", &UAbilitiesComponent::execAbilityWasActivated },
			{ "AddAbility", &UAbilitiesComponent::execAddAbility },
			{ "GetAbilitiesTags", &UAbilitiesComponent::execGetAbilitiesTags },
			{ "GetEffectsTags", &UAbilitiesComponent::execGetEffectsTags },
			{ "GetOwnedEffects", &UAbilitiesComponent::execGetOwnedEffects },
			{ "RemoveAbilitiesByClass", &UAbilitiesComponent::execRemoveAbilitiesByClass },
			{ "RemoveAbility", &UAbilitiesComponent::execRemoveAbility },
			{ "RemoveAbilityByID", &UAbilitiesComponent::execRemoveAbilityByID },
			{ "TrBreakAbilityByID", &UAbilitiesComponent::execTrBreakAbilityByID },
			{ "TryActivateAbilityByClass", &UAbilitiesComponent::execTryActivateAbilityByClass },
			{ "TryActivateAbilityByID", &UAbilitiesComponent::execTryActivateAbilityByID },
			{ "TryActivateAbilityByTag", &UAbilitiesComponent::execTryActivateAbilityByTag },
			{ "TryDeactivateAbilityByClass", &UAbilitiesComponent::execTryDeactivateAbilityByClass },
			{ "TryDeactivateAbilityByID", &UAbilitiesComponent::execTryDeactivateAbilityByID },
			{ "TryDeactivateAbilityByTag", &UAbilitiesComponent::execTryDeactivateAbilityByTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics
	{
		struct AbilitiesComponent_eventAbilityWasActivated_Parms
		{
			UAbility* ActivatedAbility;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatedAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::NewProp_ActivatedAbility_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::NewProp_ActivatedAbility = { UE4CodeGen_Private::EPropertyClass::Object, "ActivatedAbility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventAbilityWasActivated_Parms, ActivatedAbility), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::NewProp_ActivatedAbility_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::NewProp_ActivatedAbility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::NewProp_ActivatedAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "AbilityWasActivated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(AbilitiesComponent_eventAbilityWasActivated_Parms), Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics
	{
		struct AbilitiesComponent_eventAddAbility_Parms
		{
			TSubclassOf<UAbility>  AbilityClass;
			int32 id;
			bool SuccessfullyAdded;
		};
		static void NewProp_SuccessfullyAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuccessfullyAdded;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::NewProp_SuccessfullyAdded_SetBit(void* Obj)
	{
		((AbilitiesComponent_eventAddAbility_Parms*)Obj)->SuccessfullyAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::NewProp_SuccessfullyAdded = { UE4CodeGen_Private::EPropertyClass::Bool, "SuccessfullyAdded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbilitiesComponent_eventAddAbility_Parms), &Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::NewProp_SuccessfullyAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::NewProp_id = { UE4CodeGen_Private::EPropertyClass::Int, "id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventAddAbility_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::NewProp_AbilityClass = { UE4CodeGen_Private::EPropertyClass::Class, "AbilityClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventAddAbility_Parms, AbilityClass), Z_Construct_UClass_UAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::NewProp_SuccessfullyAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::NewProp_AbilityClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "AddAbility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AbilitiesComponent_eventAddAbility_Parms), Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_AddAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_AddAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics
	{
		struct AbilitiesComponent_eventGetAbilitiesTags_Parms
		{
			TArray<FGameplayTag> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventGetAbilitiesTags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "GetAbilitiesTags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AbilitiesComponent_eventGetAbilitiesTags_Parms), Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics
	{
		struct AbilitiesComponent_eventGetEffectsTags_Parms
		{
			TArray<FGameplayTag> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventGetEffectsTags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "GetEffectsTags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AbilitiesComponent_eventGetEffectsTags_Parms), Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics
	{
		struct AbilitiesComponent_eventGetOwnedEffects_Parms
		{
			TArray<AStats_Effect_Base*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventGetOwnedEffects_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction|Activation" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "GetOwnedEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(AbilitiesComponent_eventGetOwnedEffects_Parms), Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics
	{
		struct AbilitiesComponent_eventRemoveAbilitiesByClass_Parms
		{
			TSubclassOf<UAbility>  AbilityClass;
			bool SuccessfullyRemoved;
		};
		static void NewProp_SuccessfullyRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuccessfullyRemoved;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::NewProp_SuccessfullyRemoved_SetBit(void* Obj)
	{
		((AbilitiesComponent_eventRemoveAbilitiesByClass_Parms*)Obj)->SuccessfullyRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::NewProp_SuccessfullyRemoved = { UE4CodeGen_Private::EPropertyClass::Bool, "SuccessfullyRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbilitiesComponent_eventRemoveAbilitiesByClass_Parms), &Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::NewProp_SuccessfullyRemoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::NewProp_AbilityClass = { UE4CodeGen_Private::EPropertyClass::Class, "AbilityClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventRemoveAbilitiesByClass_Parms, AbilityClass), Z_Construct_UClass_UAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::NewProp_SuccessfullyRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::NewProp_AbilityClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "RemoveAbilitiesByClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AbilitiesComponent_eventRemoveAbilitiesByClass_Parms), Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics
	{
		struct AbilitiesComponent_eventRemoveAbility_Parms
		{
			UAbility* Ability;
			bool SuccessfullyRemoved;
		};
		static void NewProp_SuccessfullyRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuccessfullyRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::NewProp_SuccessfullyRemoved_SetBit(void* Obj)
	{
		((AbilitiesComponent_eventRemoveAbility_Parms*)Obj)->SuccessfullyRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::NewProp_SuccessfullyRemoved = { UE4CodeGen_Private::EPropertyClass::Bool, "SuccessfullyRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbilitiesComponent_eventRemoveAbility_Parms), &Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::NewProp_SuccessfullyRemoved_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::NewProp_Ability_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::NewProp_Ability = { UE4CodeGen_Private::EPropertyClass::Object, "Ability", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventRemoveAbility_Parms, Ability), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::NewProp_Ability_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::NewProp_Ability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::NewProp_SuccessfullyRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "RemoveAbility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AbilitiesComponent_eventRemoveAbility_Parms), Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics
	{
		struct AbilitiesComponent_eventRemoveAbilityByID_Parms
		{
			int32 ID;
			bool SuccessfullyRemoved;
		};
		static void NewProp_SuccessfullyRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuccessfullyRemoved;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::NewProp_SuccessfullyRemoved_SetBit(void* Obj)
	{
		((AbilitiesComponent_eventRemoveAbilityByID_Parms*)Obj)->SuccessfullyRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::NewProp_SuccessfullyRemoved = { UE4CodeGen_Private::EPropertyClass::Bool, "SuccessfullyRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbilitiesComponent_eventRemoveAbilityByID_Parms), &Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::NewProp_SuccessfullyRemoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventRemoveAbilityByID_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::NewProp_SuccessfullyRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "RemoveAbilityByID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AbilitiesComponent_eventRemoveAbilityByID_Parms), Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics
	{
		struct AbilitiesComponent_eventTrBreakAbilityByID_Parms
		{
			int32 id;
			bool SuccessfullyBreaked;
			UAbility* BreakedAbility;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakedAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreakedAbility;
		static void NewProp_SuccessfullyBreaked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuccessfullyBreaked;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::NewProp_BreakedAbility_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::NewProp_BreakedAbility = { UE4CodeGen_Private::EPropertyClass::Object, "BreakedAbility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080180, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventTrBreakAbilityByID_Parms, BreakedAbility), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::NewProp_BreakedAbility_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::NewProp_BreakedAbility_MetaData)) };
	void Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::NewProp_SuccessfullyBreaked_SetBit(void* Obj)
	{
		((AbilitiesComponent_eventTrBreakAbilityByID_Parms*)Obj)->SuccessfullyBreaked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::NewProp_SuccessfullyBreaked = { UE4CodeGen_Private::EPropertyClass::Bool, "SuccessfullyBreaked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbilitiesComponent_eventTrBreakAbilityByID_Parms), &Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::NewProp_SuccessfullyBreaked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::NewProp_id = { UE4CodeGen_Private::EPropertyClass::Int, "id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventTrBreakAbilityByID_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::NewProp_BreakedAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::NewProp_SuccessfullyBreaked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction|Activation" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "TrBreakAbilityByID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AbilitiesComponent_eventTrBreakAbilityByID_Parms), Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics
	{
		struct AbilitiesComponent_eventTryActivateAbilityByClass_Parms
		{
			TSubclassOf<UAbility>  AbilityClass;
			bool SuccessfullyActivated;
		};
		static void NewProp_SuccessfullyActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuccessfullyActivated;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::NewProp_SuccessfullyActivated_SetBit(void* Obj)
	{
		((AbilitiesComponent_eventTryActivateAbilityByClass_Parms*)Obj)->SuccessfullyActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::NewProp_SuccessfullyActivated = { UE4CodeGen_Private::EPropertyClass::Bool, "SuccessfullyActivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbilitiesComponent_eventTryActivateAbilityByClass_Parms), &Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::NewProp_SuccessfullyActivated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::NewProp_AbilityClass = { UE4CodeGen_Private::EPropertyClass::Class, "AbilityClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventTryActivateAbilityByClass_Parms, AbilityClass), Z_Construct_UClass_UAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::NewProp_SuccessfullyActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::NewProp_AbilityClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction|Activation" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "TryActivateAbilityByClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AbilitiesComponent_eventTryActivateAbilityByClass_Parms), Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics
	{
		struct AbilitiesComponent_eventTryActivateAbilityByID_Parms
		{
			int32 id;
			bool SuccessfullyActivated;
			UAbility* ActivatedAbility;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatedAbility;
		static void NewProp_SuccessfullyActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuccessfullyActivated;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::NewProp_ActivatedAbility_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::NewProp_ActivatedAbility = { UE4CodeGen_Private::EPropertyClass::Object, "ActivatedAbility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080180, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventTryActivateAbilityByID_Parms, ActivatedAbility), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::NewProp_ActivatedAbility_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::NewProp_ActivatedAbility_MetaData)) };
	void Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::NewProp_SuccessfullyActivated_SetBit(void* Obj)
	{
		((AbilitiesComponent_eventTryActivateAbilityByID_Parms*)Obj)->SuccessfullyActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::NewProp_SuccessfullyActivated = { UE4CodeGen_Private::EPropertyClass::Bool, "SuccessfullyActivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbilitiesComponent_eventTryActivateAbilityByID_Parms), &Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::NewProp_SuccessfullyActivated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::NewProp_id = { UE4CodeGen_Private::EPropertyClass::Int, "id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventTryActivateAbilityByID_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::NewProp_ActivatedAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::NewProp_SuccessfullyActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction|Activation" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "TryActivateAbilityByID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AbilitiesComponent_eventTryActivateAbilityByID_Parms), Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics
	{
		struct AbilitiesComponent_eventTryActivateAbilityByTag_Parms
		{
			FGameplayTag AbilityTag;
			bool SuccessfullyActivated;
		};
		static void NewProp_SuccessfullyActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuccessfullyActivated;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::NewProp_SuccessfullyActivated_SetBit(void* Obj)
	{
		((AbilitiesComponent_eventTryActivateAbilityByTag_Parms*)Obj)->SuccessfullyActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::NewProp_SuccessfullyActivated = { UE4CodeGen_Private::EPropertyClass::Bool, "SuccessfullyActivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbilitiesComponent_eventTryActivateAbilityByTag_Parms), &Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::NewProp_SuccessfullyActivated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::NewProp_AbilityTag = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventTryActivateAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::NewProp_SuccessfullyActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::NewProp_AbilityTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction|Activation" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "TryActivateAbilityByTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AbilitiesComponent_eventTryActivateAbilityByTag_Parms), Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics
	{
		struct AbilitiesComponent_eventTryDeactivateAbilityByClass_Parms
		{
			TSubclassOf<UAbility>  AbilityClass;
			bool SuccessfullyDeactivated;
		};
		static void NewProp_SuccessfullyDeactivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuccessfullyDeactivated;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::NewProp_SuccessfullyDeactivated_SetBit(void* Obj)
	{
		((AbilitiesComponent_eventTryDeactivateAbilityByClass_Parms*)Obj)->SuccessfullyDeactivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::NewProp_SuccessfullyDeactivated = { UE4CodeGen_Private::EPropertyClass::Bool, "SuccessfullyDeactivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbilitiesComponent_eventTryDeactivateAbilityByClass_Parms), &Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::NewProp_SuccessfullyDeactivated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::NewProp_AbilityClass = { UE4CodeGen_Private::EPropertyClass::Class, "AbilityClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventTryDeactivateAbilityByClass_Parms, AbilityClass), Z_Construct_UClass_UAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::NewProp_SuccessfullyDeactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::NewProp_AbilityClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction|Activation" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "TryDeactivateAbilityByClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AbilitiesComponent_eventTryDeactivateAbilityByClass_Parms), Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics
	{
		struct AbilitiesComponent_eventTryDeactivateAbilityByID_Parms
		{
			int32 id;
			bool SuccessfullyDeactivated;
			UAbility* DeactivatedAbility;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivatedAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeactivatedAbility;
		static void NewProp_SuccessfullyDeactivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuccessfullyDeactivated;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::NewProp_DeactivatedAbility_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::NewProp_DeactivatedAbility = { UE4CodeGen_Private::EPropertyClass::Object, "DeactivatedAbility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080180, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventTryDeactivateAbilityByID_Parms, DeactivatedAbility), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::NewProp_DeactivatedAbility_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::NewProp_DeactivatedAbility_MetaData)) };
	void Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::NewProp_SuccessfullyDeactivated_SetBit(void* Obj)
	{
		((AbilitiesComponent_eventTryDeactivateAbilityByID_Parms*)Obj)->SuccessfullyDeactivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::NewProp_SuccessfullyDeactivated = { UE4CodeGen_Private::EPropertyClass::Bool, "SuccessfullyDeactivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbilitiesComponent_eventTryDeactivateAbilityByID_Parms), &Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::NewProp_SuccessfullyDeactivated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::NewProp_id = { UE4CodeGen_Private::EPropertyClass::Int, "id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventTryDeactivateAbilityByID_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::NewProp_DeactivatedAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::NewProp_SuccessfullyDeactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction|Activation" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "TryDeactivateAbilityByID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AbilitiesComponent_eventTryDeactivateAbilityByID_Parms), Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics
	{
		struct AbilitiesComponent_eventTryDeactivateAbilityByTag_Parms
		{
			FGameplayTag AbilityTag;
			bool SuccessfullyDeactivated;
		};
		static void NewProp_SuccessfullyDeactivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuccessfullyDeactivated;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::NewProp_SuccessfullyDeactivated_SetBit(void* Obj)
	{
		((AbilitiesComponent_eventTryDeactivateAbilityByTag_Parms*)Obj)->SuccessfullyDeactivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::NewProp_SuccessfullyDeactivated = { UE4CodeGen_Private::EPropertyClass::Bool, "SuccessfullyDeactivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbilitiesComponent_eventTryDeactivateAbilityByTag_Parms), &Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::NewProp_SuccessfullyDeactivated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::NewProp_AbilityTag = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AbilitiesComponent_eventTryDeactivateAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::NewProp_SuccessfullyDeactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::NewProp_AbilityTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction|Activation" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, "TryDeactivateAbilityByTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(AbilitiesComponent_eventTryDeactivateAbilityByTag_Parms), Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAbilityRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAbilityAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Abilities_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitiesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilitiesComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilitiesComponent_AbilityWasActivated, "AbilityWasActivated" }, // 2517602162
		{ &Z_Construct_UFunction_UAbilitiesComponent_AddAbility, "AddAbility" }, // 3752955619
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetAbilitiesTags, "GetAbilitiesTags" }, // 2767933441
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetEffectsTags, "GetEffectsTags" }, // 872912587
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetOwnedEffects, "GetOwnedEffects" }, // 1102370316
		{ &Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilitiesByClass, "RemoveAbilitiesByClass" }, // 2995263877
		{ &Z_Construct_UFunction_UAbilitiesComponent_RemoveAbility, "RemoveAbility" }, // 184776475
		{ &Z_Construct_UFunction_UAbilitiesComponent_RemoveAbilityByID, "RemoveAbilityByID" }, // 3962574227
		{ &Z_Construct_UFunction_UAbilitiesComponent_TrBreakAbilityByID, "TrBreakAbilityByID" }, // 1424568579
		{ &Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByClass, "TryActivateAbilityByClass" }, // 553529309
		{ &Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByID, "TryActivateAbilityByID" }, // 1673644106
		{ &Z_Construct_UFunction_UAbilitiesComponent_TryActivateAbilityByTag, "TryActivateAbilityByTag" }, // 451938926
		{ &Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByClass, "TryDeactivateAbilityByClass" }, // 1281684976
		{ &Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByID, "TryDeactivateAbilityByID" }, // 1678951864
		{ &Z_Construct_UFunction_UAbilitiesComponent_TryDeactivateAbilityByTag, "TryDeactivateAbilityByTag" }, // 1587852621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitiesComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbilitiesComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnAbilityRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnAbilityRemoved = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAbilityRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAbilitiesComponent, OnAbilityRemoved), Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnAbilityRemoved_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnAbilityRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnAbilityAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnAbilityAdded = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAbilityAdded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAbilitiesComponent, OnAbilityAdded), Z_Construct_UDelegateFunction_StatsPlugin_AbilityActionsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnAbilityAdded_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnAbilityAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities = { UE4CodeGen_Private::EPropertyClass::Array, "Abilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000800000003c, 1, nullptr, STRUCT_OFFSET(UAbilitiesComponent, Abilities), METADATA_PARAMS(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Abilities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitiesComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnAbilityRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnAbilityAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Abilities_Inner,
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
	IMPLEMENT_CLASS(UAbilitiesComponent, 3579282566);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilitiesComponent(Z_Construct_UClass_UAbilitiesComponent, &UAbilitiesComponent::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("UAbilitiesComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitiesComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
