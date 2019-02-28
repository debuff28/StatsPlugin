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
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UAbility_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UAbility();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_AbilityActivated();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_AbilityActivatedByTrigger();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_AbilityDeactivated();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_AbilityDeactivatedByTrigger();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_ActivateAbility();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_ActivateEffects();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_AnotherAbilityActivated();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_Effect_Base_NoRegister();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_CalculateCooldownSpeed();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_CooldownIsFinished();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_CooldownIsStarted();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_DeactivateAbility();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_DeactivateEffects();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_GetAbilitiesTags();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_OnOwnerStatModification();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_OnTargetStatModification();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_OwnerEffectAplicated();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_OwnerEffectRemoved();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_OwnerStatChanged();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_TargetStatChanged();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_TryActivateAbility();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_TryDeactivateAbility();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UAbility_TryStartCooldown();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityCooldown();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsPlugin_eventStatModificationDelegate_Parms
		{
			FGameplayTag tag;
			FGameplayTagContainer AdditinsTags;
			float deltaChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaChange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditinsTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::NewProp_deltaChange = { UE4CodeGen_Private::EPropertyClass::Float, "deltaChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventStatModificationDelegate_Parms, deltaChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::NewProp_AdditinsTags = { UE4CodeGen_Private::EPropertyClass::Struct, "AdditinsTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventStatModificationDelegate_Parms, AdditinsTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::NewProp_tag = { UE4CodeGen_Private::EPropertyClass::Struct, "tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventStatModificationDelegate_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::NewProp_deltaChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::NewProp_AdditinsTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::NewProp_tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin, "StatModificationDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_StatsPlugin_eventStatModificationDelegate_Parms), Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsPlugin_eventAbilityActivationDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::NewProp_ActivatedAbility_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::NewProp_ActivatedAbility = { UE4CodeGen_Private::EPropertyClass::Object, "ActivatedAbility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventAbilityActivationDelegate_Parms, ActivatedAbility), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::NewProp_ActivatedAbility_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::NewProp_ActivatedAbility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::NewProp_ActivatedAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin, "AbilityActivationDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_StatsPlugin_eventAbilityActivationDelegate_Parms), Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UAbility_AbilityActivated = FName(TEXT("AbilityActivated"));
	void UAbility::AbilityActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAbility_AbilityActivated),NULL);
	}
	static FName NAME_UAbility_AbilityActivatedByTrigger = FName(TEXT("AbilityActivatedByTrigger"));
	void UAbility::AbilityActivatedByTrigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAbility_AbilityActivatedByTrigger),NULL);
	}
	static FName NAME_UAbility_AbilityDeactivated = FName(TEXT("AbilityDeactivated"));
	void UAbility::AbilityDeactivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAbility_AbilityDeactivated),NULL);
	}
	static FName NAME_UAbility_AbilityDeactivatedByTrigger = FName(TEXT("AbilityDeactivatedByTrigger"));
	void UAbility::AbilityDeactivatedByTrigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAbility_AbilityDeactivatedByTrigger),NULL);
	}
	static FName NAME_UAbility_CooldownIsFinished = FName(TEXT("CooldownIsFinished"));
	void UAbility::CooldownIsFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAbility_CooldownIsFinished),NULL);
	}
	static FName NAME_UAbility_CooldownIsStarted = FName(TEXT("CooldownIsStarted"));
	void UAbility::CooldownIsStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAbility_CooldownIsStarted),NULL);
	}
	static FName NAME_UAbility_OnAnotherAbilityActivation = FName(TEXT("OnAnotherAbilityActivation"));
	void UAbility::OnAnotherAbilityActivation(UAbility* ActivatedAbility)
	{
		Ability_eventOnAnotherAbilityActivation_Parms Parms;
		Parms.ActivatedAbility=ActivatedAbility;
		ProcessEvent(FindFunctionChecked(NAME_UAbility_OnAnotherAbilityActivation),&Parms);
	}
	static FName NAME_UAbility_OnAnotherActorEffectAplicated = FName(TEXT("OnAnotherActorEffectAplicated"));
	void UAbility::OnAnotherActorEffectAplicated(AStats_Effect_Base* Effect, AActor* EffectOnActor)
	{
		Ability_eventOnAnotherActorEffectAplicated_Parms Parms;
		Parms.Effect=Effect;
		Parms.EffectOnActor=EffectOnActor;
		ProcessEvent(FindFunctionChecked(NAME_UAbility_OnAnotherActorEffectAplicated),&Parms);
	}
	static FName NAME_UAbility_OnAnotherActorEffectRemoved = FName(TEXT("OnAnotherActorEffectRemoved"));
	void UAbility::OnAnotherActorEffectRemoved(AStats_Effect_Base* Effect, AActor* EffectOnActor)
	{
		Ability_eventOnAnotherActorEffectRemoved_Parms Parms;
		Parms.Effect=Effect;
		Parms.EffectOnActor=EffectOnActor;
		ProcessEvent(FindFunctionChecked(NAME_UAbility_OnAnotherActorEffectRemoved),&Parms);
	}
	static FName NAME_UAbility_OnOwnerEffectAplicated = FName(TEXT("OnOwnerEffectAplicated"));
	void UAbility::OnOwnerEffectAplicated(AStats_Effect_Base* Effect, AActor* EffectOnActor)
	{
		Ability_eventOnOwnerEffectAplicated_Parms Parms;
		Parms.Effect=Effect;
		Parms.EffectOnActor=EffectOnActor;
		ProcessEvent(FindFunctionChecked(NAME_UAbility_OnOwnerEffectAplicated),&Parms);
	}
	static FName NAME_UAbility_OnOwnerEffectRemoved = FName(TEXT("OnOwnerEffectRemoved"));
	void UAbility::OnOwnerEffectRemoved(AStats_Effect_Base* Effect, AActor* EffectOnActor)
	{
		Ability_eventOnOwnerEffectRemoved_Parms Parms;
		Parms.Effect=Effect;
		Parms.EffectOnActor=EffectOnActor;
		ProcessEvent(FindFunctionChecked(NAME_UAbility_OnOwnerEffectRemoved),&Parms);
	}
	static FName NAME_UAbility_OnOwnerStatModification = FName(TEXT("OnOwnerStatModification"));
	void UAbility::OnOwnerStatModification(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange, float NewValue)
	{
		Ability_eventOnOwnerStatModification_Parms Parms;
		Parms.ModificationIniciator=ModificationIniciator;
		Parms.ModificationTargert=ModificationTargert;
		Parms.tag=tag;
		Parms.AdditinsTags=AdditinsTags;
		Parms.deltaChange=deltaChange;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UAbility_OnOwnerStatModification),&Parms);
	}
	static FName NAME_UAbility_OnTargetStatModification = FName(TEXT("OnTargetStatModification"));
	void UAbility::OnTargetStatModification(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange, float NewValue)
	{
		Ability_eventOnTargetStatModification_Parms Parms;
		Parms.ModificationIniciator=ModificationIniciator;
		Parms.ModificationTargert=ModificationTargert;
		Parms.tag=tag;
		Parms.AdditinsTags=AdditinsTags;
		Parms.deltaChange=deltaChange;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UAbility_OnTargetStatModification),&Parms);
	}
	void UAbility::StaticRegisterNativesUAbility()
	{
		UClass* Class = UAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAbility", &UAbility::execActivateAbility },
			{ "ActivateAbilityByTrigger", &UAbility::execActivateAbilityByTrigger },
			{ "ActivateEffects", &UAbility::execActivateEffects },
			{ "AnotherAbilityActivated", &UAbility::execAnotherAbilityActivated },
			{ "AnotherActorEffectAplicated", &UAbility::execAnotherActorEffectAplicated },
			{ "AnotherActorEffectRemoved", &UAbility::execAnotherActorEffectRemoved },
			{ "CalculateCooldownSpeed", &UAbility::execCalculateCooldownSpeed },
			{ "DeactivateAbility", &UAbility::execDeactivateAbility },
			{ "DeactivateAbilityByTrigger", &UAbility::execDeactivateAbilityByTrigger },
			{ "DeactivateEffects", &UAbility::execDeactivateEffects },
			{ "GetAbilitiesTags", &UAbility::execGetAbilitiesTags },
			{ "OwnerEffectAplicated", &UAbility::execOwnerEffectAplicated },
			{ "OwnerEffectRemoved", &UAbility::execOwnerEffectRemoved },
			{ "OwnerStatChanged", &UAbility::execOwnerStatChanged },
			{ "TargetStatChanged", &UAbility::execTargetStatChanged },
			{ "TryActivateAbility", &UAbility::execTryActivateAbility },
			{ "TryDeactivateAbility", &UAbility::execTryDeactivateAbility },
			{ "TryStartCooldown", &UAbility::execTryStartCooldown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbility_AbilityActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_AbilityActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_AbilityActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "AbilityActivated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_AbilityActivated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_AbilityActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_AbilityActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_AbilityActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_AbilityActivatedByTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_AbilityActivatedByTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_AbilityActivatedByTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "AbilityActivatedByTrigger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_AbilityActivatedByTrigger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_AbilityActivatedByTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_AbilityActivatedByTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_AbilityActivatedByTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_AbilityDeactivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_AbilityDeactivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_AbilityDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "AbilityDeactivated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_AbilityDeactivated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_AbilityDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_AbilityDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_AbilityDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_AbilityDeactivatedByTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_AbilityDeactivatedByTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_AbilityDeactivatedByTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "AbilityDeactivatedByTrigger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_AbilityDeactivatedByTrigger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_AbilityDeactivatedByTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_AbilityDeactivatedByTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_AbilityDeactivatedByTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_ActivateAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_ActivateAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_ActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "ActivateAbility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_ActivateAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_ActivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_ActivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_ActivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics
	{
		struct Ability_eventActivateAbilityByTrigger_Parms
		{
			FGameplayTagContainer Tags;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ability_eventActivateAbilityByTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Ability_eventActivateAbilityByTrigger_Parms), &Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::NewProp_Tags = { UE4CodeGen_Private::EPropertyClass::Struct, "Tags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventActivateAbilityByTrigger_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::NewProp_Tags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "ActivateAbilityByTrigger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventActivateAbilityByTrigger_Parms), Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_ActivateEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_ActivateEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_ActivateEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "ActivateEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_ActivateEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_ActivateEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_ActivateEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_ActivateEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics
	{
		struct Ability_eventAnotherAbilityActivated_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::NewProp_ActivatedAbility_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::NewProp_ActivatedAbility = { UE4CodeGen_Private::EPropertyClass::Object, "ActivatedAbility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Ability_eventAnotherAbilityActivated_Parms, ActivatedAbility), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::NewProp_ActivatedAbility_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::NewProp_ActivatedAbility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::NewProp_ActivatedAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "AnotherAbilityActivated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventAnotherAbilityActivated_Parms), Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_AnotherAbilityActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_AnotherAbilityActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics
	{
		struct Ability_eventAnotherActorEffectAplicated_Parms
		{
			AStats_Effect_Base* Effect;
			AActor* EffectOnActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectOnActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::NewProp_EffectOnActor = { UE4CodeGen_Private::EPropertyClass::Object, "EffectOnActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventAnotherActorEffectAplicated_Parms, EffectOnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::NewProp_Effect = { UE4CodeGen_Private::EPropertyClass::Object, "Effect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventAnotherActorEffectAplicated_Parms, Effect), Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::NewProp_EffectOnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "AnotherActorEffectAplicated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventAnotherActorEffectAplicated_Parms), Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics
	{
		struct Ability_eventAnotherActorEffectRemoved_Parms
		{
			AStats_Effect_Base* Effect;
			AActor* EffectOnActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectOnActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::NewProp_EffectOnActor = { UE4CodeGen_Private::EPropertyClass::Object, "EffectOnActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventAnotherActorEffectRemoved_Parms, EffectOnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::NewProp_Effect = { UE4CodeGen_Private::EPropertyClass::Object, "Effect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventAnotherActorEffectRemoved_Parms, Effect), Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::NewProp_EffectOnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "AnotherActorEffectRemoved", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventAnotherActorEffectRemoved_Parms), Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics
	{
		struct Ability_eventCalculateCooldownSpeed_Parms
		{
			float CurrentDeltaTime;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Ability_eventCalculateCooldownSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::NewProp_CurrentDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventCalculateCooldownSpeed_Parms, CurrentDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::NewProp_CurrentDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "CalculateCooldownSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventCalculateCooldownSpeed_Parms), Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_CalculateCooldownSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_CalculateCooldownSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_CooldownIsFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_CooldownIsFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_CooldownIsFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "CooldownIsFinished", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_CooldownIsFinished_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_CooldownIsFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_CooldownIsFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_CooldownIsFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_CooldownIsStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_CooldownIsStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_CooldownIsStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "CooldownIsStarted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_CooldownIsStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_CooldownIsStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_CooldownIsStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_CooldownIsStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_DeactivateAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_DeactivateAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_DeactivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "DeactivateAbility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_DeactivateAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_DeactivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_DeactivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_DeactivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics
	{
		struct Ability_eventDeactivateAbilityByTrigger_Parms
		{
			FGameplayTagContainer Tags;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ability_eventDeactivateAbilityByTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Ability_eventDeactivateAbilityByTrigger_Parms), &Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::NewProp_Tags = { UE4CodeGen_Private::EPropertyClass::Struct, "Tags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventDeactivateAbilityByTrigger_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::NewProp_Tags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "DeactivateAbilityByTrigger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventDeactivateAbilityByTrigger_Parms), Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_DeactivateEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_DeactivateEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_DeactivateEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "DeactivateEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_DeactivateEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_DeactivateEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_DeactivateEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_DeactivateEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics
	{
		struct Ability_eventGetAbilitiesTags_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Ability_eventGetAbilitiesTags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "GetAbilitiesTags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventGetAbilitiesTags_Parms), Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_GetAbilitiesTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_GetAbilitiesTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::NewProp_ActivatedAbility_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::NewProp_ActivatedAbility = { UE4CodeGen_Private::EPropertyClass::Object, "ActivatedAbility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnAnotherAbilityActivation_Parms, ActivatedAbility), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::NewProp_ActivatedAbility_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::NewProp_ActivatedAbility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::NewProp_ActivatedAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "OnAnotherAbilityActivation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, sizeof(Ability_eventOnAnotherAbilityActivation_Parms), Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectOnActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::NewProp_EffectOnActor = { UE4CodeGen_Private::EPropertyClass::Object, "EffectOnActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnAnotherActorEffectAplicated_Parms, EffectOnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::NewProp_Effect = { UE4CodeGen_Private::EPropertyClass::Object, "Effect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnAnotherActorEffectAplicated_Parms, Effect), Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::NewProp_EffectOnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "OnAnotherActorEffectAplicated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, sizeof(Ability_eventOnAnotherActorEffectAplicated_Parms), Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectOnActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::NewProp_EffectOnActor = { UE4CodeGen_Private::EPropertyClass::Object, "EffectOnActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnAnotherActorEffectRemoved_Parms, EffectOnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::NewProp_Effect = { UE4CodeGen_Private::EPropertyClass::Object, "Effect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnAnotherActorEffectRemoved_Parms, Effect), Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::NewProp_EffectOnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "OnAnotherActorEffectRemoved", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, sizeof(Ability_eventOnAnotherActorEffectRemoved_Parms), Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectOnActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::NewProp_EffectOnActor = { UE4CodeGen_Private::EPropertyClass::Object, "EffectOnActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnOwnerEffectAplicated_Parms, EffectOnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::NewProp_Effect = { UE4CodeGen_Private::EPropertyClass::Object, "Effect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnOwnerEffectAplicated_Parms, Effect), Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::NewProp_EffectOnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "OnOwnerEffectAplicated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, sizeof(Ability_eventOnOwnerEffectAplicated_Parms), Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectOnActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::NewProp_EffectOnActor = { UE4CodeGen_Private::EPropertyClass::Object, "EffectOnActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnOwnerEffectRemoved_Parms, EffectOnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::NewProp_Effect = { UE4CodeGen_Private::EPropertyClass::Object, "Effect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnOwnerEffectRemoved_Parms, Effect), Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::NewProp_EffectOnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "OnOwnerEffectRemoved", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, sizeof(Ability_eventOnOwnerEffectRemoved_Parms), Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaChange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditinsTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModificationTargert;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModificationIniciator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnOwnerStatModification_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_deltaChange = { UE4CodeGen_Private::EPropertyClass::Float, "deltaChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnOwnerStatModification_Parms, deltaChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_AdditinsTags = { UE4CodeGen_Private::EPropertyClass::Struct, "AdditinsTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnOwnerStatModification_Parms, AdditinsTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_tag = { UE4CodeGen_Private::EPropertyClass::Struct, "tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnOwnerStatModification_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_ModificationTargert = { UE4CodeGen_Private::EPropertyClass::Object, "ModificationTargert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnOwnerStatModification_Parms, ModificationTargert), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_ModificationIniciator = { UE4CodeGen_Private::EPropertyClass::Object, "ModificationIniciator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnOwnerStatModification_Parms, ModificationIniciator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_deltaChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_AdditinsTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_ModificationTargert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::NewProp_ModificationIniciator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "OnOwnerStatModification", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, sizeof(Ability_eventOnOwnerStatModification_Parms), Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_OnOwnerStatModification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_OnOwnerStatModification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaChange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditinsTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModificationTargert;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModificationIniciator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnTargetStatModification_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_deltaChange = { UE4CodeGen_Private::EPropertyClass::Float, "deltaChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnTargetStatModification_Parms, deltaChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_AdditinsTags = { UE4CodeGen_Private::EPropertyClass::Struct, "AdditinsTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnTargetStatModification_Parms, AdditinsTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_tag = { UE4CodeGen_Private::EPropertyClass::Struct, "tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnTargetStatModification_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_ModificationTargert = { UE4CodeGen_Private::EPropertyClass::Object, "ModificationTargert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnTargetStatModification_Parms, ModificationTargert), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_ModificationIniciator = { UE4CodeGen_Private::EPropertyClass::Object, "ModificationIniciator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOnTargetStatModification_Parms, ModificationIniciator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_deltaChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_AdditinsTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_ModificationTargert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::NewProp_ModificationIniciator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityEvents" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "OnTargetStatModification", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020804, sizeof(Ability_eventOnTargetStatModification_Parms), Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_OnTargetStatModification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_OnTargetStatModification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics
	{
		struct Ability_eventOwnerEffectAplicated_Parms
		{
			AStats_Effect_Base* Effect;
			AActor* EffectOnActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectOnActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::NewProp_EffectOnActor = { UE4CodeGen_Private::EPropertyClass::Object, "EffectOnActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOwnerEffectAplicated_Parms, EffectOnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::NewProp_Effect = { UE4CodeGen_Private::EPropertyClass::Object, "Effect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOwnerEffectAplicated_Parms, Effect), Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::NewProp_EffectOnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "OwnerEffectAplicated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventOwnerEffectAplicated_Parms), Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_OwnerEffectAplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_OwnerEffectAplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics
	{
		struct Ability_eventOwnerEffectRemoved_Parms
		{
			AStats_Effect_Base* Effect;
			AActor* EffectOnActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectOnActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::NewProp_EffectOnActor = { UE4CodeGen_Private::EPropertyClass::Object, "EffectOnActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOwnerEffectRemoved_Parms, EffectOnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::NewProp_Effect = { UE4CodeGen_Private::EPropertyClass::Object, "Effect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOwnerEffectRemoved_Parms, Effect), Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::NewProp_EffectOnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "OwnerEffectRemoved", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventOwnerEffectRemoved_Parms), Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_OwnerEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_OwnerEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics
	{
		struct Ability_eventOwnerStatChanged_Parms
		{
			AActor* ModificationIniciator;
			AActor* ModificationTargert;
			FGameplayTag tag;
			FGameplayTagContainer AdditinsTags;
			float deltaChange;
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaChange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditinsTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModificationTargert;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModificationIniciator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOwnerStatChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_deltaChange = { UE4CodeGen_Private::EPropertyClass::Float, "deltaChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOwnerStatChanged_Parms, deltaChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_AdditinsTags = { UE4CodeGen_Private::EPropertyClass::Struct, "AdditinsTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOwnerStatChanged_Parms, AdditinsTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_tag = { UE4CodeGen_Private::EPropertyClass::Struct, "tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOwnerStatChanged_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_ModificationTargert = { UE4CodeGen_Private::EPropertyClass::Object, "ModificationTargert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOwnerStatChanged_Parms, ModificationTargert), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_ModificationIniciator = { UE4CodeGen_Private::EPropertyClass::Object, "ModificationIniciator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventOwnerStatChanged_Parms, ModificationIniciator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_deltaChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_AdditinsTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_ModificationTargert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::NewProp_ModificationIniciator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "OwnerStatChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventOwnerStatChanged_Parms), Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_OwnerStatChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_OwnerStatChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_TargetStatChanged_Statics
	{
		struct Ability_eventTargetStatChanged_Parms
		{
			AActor* ModificationIniciator;
			AActor* ModificationTargert;
			FGameplayTag tag;
			FGameplayTagContainer AdditinsTags;
			float deltaChange;
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaChange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditinsTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModificationTargert;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModificationIniciator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventTargetStatChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_deltaChange = { UE4CodeGen_Private::EPropertyClass::Float, "deltaChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventTargetStatChanged_Parms, deltaChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_AdditinsTags = { UE4CodeGen_Private::EPropertyClass::Struct, "AdditinsTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventTargetStatChanged_Parms, AdditinsTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_tag = { UE4CodeGen_Private::EPropertyClass::Struct, "tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventTargetStatChanged_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_ModificationTargert = { UE4CodeGen_Private::EPropertyClass::Object, "ModificationTargert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventTargetStatChanged_Parms, ModificationTargert), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_ModificationIniciator = { UE4CodeGen_Private::EPropertyClass::Object, "ModificationIniciator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventTargetStatChanged_Parms, ModificationIniciator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_deltaChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_AdditinsTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_ModificationTargert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::NewProp_ModificationIniciator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "TargetStatChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventTargetStatChanged_Parms), Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_TargetStatChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_TargetStatChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_TryActivateAbility_Statics
	{
		struct Ability_eventTryActivateAbility_Parms
		{
			TArray<FGameplayTag> CurrentTags;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentTags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ability_eventTryActivateAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Ability_eventTryActivateAbility_Parms), &Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::NewProp_CurrentTags = { UE4CodeGen_Private::EPropertyClass::Array, "CurrentTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ability_eventTryActivateAbility_Parms, CurrentTags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::NewProp_CurrentTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::NewProp_CurrentTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::NewProp_CurrentTags_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "TryActivateAbility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(Ability_eventTryActivateAbility_Parms), Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_TryActivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_TryActivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics
	{
		struct Ability_eventTryDeactivateAbility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ability_eventTryDeactivateAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Ability_eventTryDeactivateAbility_Parms), &Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityAction" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "TryDeactivateAbility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(Ability_eventTryDeactivateAbility_Parms), Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_TryDeactivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_TryDeactivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_TryStartCooldown_Statics
	{
		struct Ability_eventTryStartCooldown_Parms
		{
			bool CallAfterAbilityFinish;
		};
		static void NewProp_CallAfterAbilityFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CallAfterAbilityFinish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::NewProp_CallAfterAbilityFinish_SetBit(void* Obj)
	{
		((Ability_eventTryStartCooldown_Parms*)Obj)->CallAfterAbilityFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::NewProp_CallAfterAbilityFinish = { UE4CodeGen_Private::EPropertyClass::Bool, "CallAfterAbilityFinish", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Ability_eventTryStartCooldown_Parms), &Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::NewProp_CallAfterAbilityFinish_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::NewProp_CallAfterAbilityFinish,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, "TryStartCooldown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Ability_eventTryStartCooldown_Parms), Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_TryStartCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_TryStartCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbility_NoRegister()
	{
		return UAbility::StaticClass();
	}
	struct Z_Construct_UClass_UAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCustomTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCustomTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAbilityDeactivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityDeactivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAbilityActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownTimePassed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownTimePassed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActivated_MetaData[];
#endif
		static void NewProp_IsActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCooldown_MetaData[];
#endif
		static void NewProp_IsCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatsComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityDeactivateTriggerTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityDeactivateTriggerTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityDeactivateTriggerTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityActivateTriggerTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityActivateTriggerTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityActivateTriggerTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityActivateBlockingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityActivateBlockingTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityActivateBlockingTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityActivateRequirementTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityActivateRequirementTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityActivateRequirementTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityActivateEffectsTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityActivateEffectsTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityActivateEffectsTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivatedAbilityTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnActivatedAbilityTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnActivatedAbilityTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityTags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbility_AbilityActivated, "AbilityActivated" }, // 564461421
		{ &Z_Construct_UFunction_UAbility_AbilityActivatedByTrigger, "AbilityActivatedByTrigger" }, // 3552866661
		{ &Z_Construct_UFunction_UAbility_AbilityDeactivated, "AbilityDeactivated" }, // 1274826858
		{ &Z_Construct_UFunction_UAbility_AbilityDeactivatedByTrigger, "AbilityDeactivatedByTrigger" }, // 2252013589
		{ &Z_Construct_UFunction_UAbility_ActivateAbility, "ActivateAbility" }, // 1133017512
		{ &Z_Construct_UFunction_UAbility_ActivateAbilityByTrigger, "ActivateAbilityByTrigger" }, // 3421889606
		{ &Z_Construct_UFunction_UAbility_ActivateEffects, "ActivateEffects" }, // 2477777648
		{ &Z_Construct_UFunction_UAbility_AnotherAbilityActivated, "AnotherAbilityActivated" }, // 984607746
		{ &Z_Construct_UFunction_UAbility_AnotherActorEffectAplicated, "AnotherActorEffectAplicated" }, // 1346072753
		{ &Z_Construct_UFunction_UAbility_AnotherActorEffectRemoved, "AnotherActorEffectRemoved" }, // 3540737371
		{ &Z_Construct_UFunction_UAbility_CalculateCooldownSpeed, "CalculateCooldownSpeed" }, // 806954107
		{ &Z_Construct_UFunction_UAbility_CooldownIsFinished, "CooldownIsFinished" }, // 327735282
		{ &Z_Construct_UFunction_UAbility_CooldownIsStarted, "CooldownIsStarted" }, // 2240082481
		{ &Z_Construct_UFunction_UAbility_DeactivateAbility, "DeactivateAbility" }, // 3961695465
		{ &Z_Construct_UFunction_UAbility_DeactivateAbilityByTrigger, "DeactivateAbilityByTrigger" }, // 1500643830
		{ &Z_Construct_UFunction_UAbility_DeactivateEffects, "DeactivateEffects" }, // 2426263939
		{ &Z_Construct_UFunction_UAbility_GetAbilitiesTags, "GetAbilitiesTags" }, // 2832239009
		{ &Z_Construct_UFunction_UAbility_OnAnotherAbilityActivation, "OnAnotherAbilityActivation" }, // 2273429560
		{ &Z_Construct_UFunction_UAbility_OnAnotherActorEffectAplicated, "OnAnotherActorEffectAplicated" }, // 920510092
		{ &Z_Construct_UFunction_UAbility_OnAnotherActorEffectRemoved, "OnAnotherActorEffectRemoved" }, // 2803409429
		{ &Z_Construct_UFunction_UAbility_OnOwnerEffectAplicated, "OnOwnerEffectAplicated" }, // 3900722363
		{ &Z_Construct_UFunction_UAbility_OnOwnerEffectRemoved, "OnOwnerEffectRemoved" }, // 3939741477
		{ &Z_Construct_UFunction_UAbility_OnOwnerStatModification, "OnOwnerStatModification" }, // 3605154756
		{ &Z_Construct_UFunction_UAbility_OnTargetStatModification, "OnTargetStatModification" }, // 1703202908
		{ &Z_Construct_UFunction_UAbility_OwnerEffectAplicated, "OwnerEffectAplicated" }, // 2110756825
		{ &Z_Construct_UFunction_UAbility_OwnerEffectRemoved, "OwnerEffectRemoved" }, // 865190228
		{ &Z_Construct_UFunction_UAbility_OwnerStatChanged, "OwnerStatChanged" }, // 1544442630
		{ &Z_Construct_UFunction_UAbility_TargetStatChanged, "TargetStatChanged" }, // 2403173926
		{ &Z_Construct_UFunction_UAbility_TryActivateAbility, "TryActivateAbility" }, // 2190601414
		{ &Z_Construct_UFunction_UAbility_TryDeactivateAbility, "TryDeactivateAbility" }, // 2087535980
		{ &Z_Construct_UFunction_UAbility_TryStartCooldown, "TryStartCooldown" }, // 908347785
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Ability.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_OnCustomTrigger_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_OnCustomTrigger = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCustomTrigger", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAbility, OnCustomTrigger), Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_OnCustomTrigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_OnCustomTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_OnAbilityDeactivated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_OnAbilityDeactivated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAbilityDeactivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAbility, OnAbilityDeactivated), Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_OnAbilityDeactivated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_OnAbilityDeactivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_OnAbilityActivated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_OnAbilityActivated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAbilityActivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAbility, OnAbilityActivated), Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_OnAbilityActivated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_OnAbilityActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_CooldownPercent_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CooldownPercent = { UE4CodeGen_Private::EPropertyClass::Float, "CooldownPercent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, STRUCT_OFFSET(UAbility, CooldownPercent), METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_CooldownPercent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_CooldownPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_CooldownTimePassed_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CooldownTimePassed = { UE4CodeGen_Private::EPropertyClass::Float, "CooldownTimePassed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, STRUCT_OFFSET(UAbility, CooldownTimePassed), METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_CooldownTimePassed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_CooldownTimePassed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_IsActivated_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	void Z_Construct_UClass_UAbility_Statics::NewProp_IsActivated_SetBit(void* Obj)
	{
		((UAbility*)Obj)->IsActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_IsActivated = { UE4CodeGen_Private::EPropertyClass::Bool, "IsActivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAbility), &Z_Construct_UClass_UAbility_Statics::NewProp_IsActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_IsActivated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_IsActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_IsCooldown_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	void Z_Construct_UClass_UAbility_Statics::NewProp_IsCooldown_SetBit(void* Obj)
	{
		((UAbility*)Obj)->IsCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_IsCooldown = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCooldown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAbility), &Z_Construct_UClass_UAbility_Statics::NewProp_IsCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_IsCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_IsCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_StatsComponent_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_StatsComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StatsComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008003c, 1, nullptr, STRUCT_OFFSET(UAbility, StatsComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_StatsComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_StatsComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_CooldownRule_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CooldownRule = { UE4CodeGen_Private::EPropertyClass::Struct, "CooldownRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAbility, CooldownRule), Z_Construct_UScriptStruct_FAbilityCooldown, METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_CooldownRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_CooldownRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_AbilityDeactivateTriggerTags_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityDeactivateTriggerTags = { UE4CodeGen_Private::EPropertyClass::Array, "AbilityDeactivateTriggerTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAbility, AbilityDeactivateTriggerTags), METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityDeactivateTriggerTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityDeactivateTriggerTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityDeactivateTriggerTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityDeactivateTriggerTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateTriggerTags_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateTriggerTags = { UE4CodeGen_Private::EPropertyClass::Array, "AbilityActivateTriggerTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAbility, AbilityActivateTriggerTags), METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateTriggerTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateTriggerTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateTriggerTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityActivateTriggerTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateBlockingTags_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateBlockingTags = { UE4CodeGen_Private::EPropertyClass::Array, "AbilityActivateBlockingTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAbility, AbilityActivateBlockingTags), METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateBlockingTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateBlockingTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateBlockingTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityActivateBlockingTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateRequirementTags_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateRequirementTags = { UE4CodeGen_Private::EPropertyClass::Array, "AbilityActivateRequirementTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAbility, AbilityActivateRequirementTags), METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateRequirementTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateRequirementTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateRequirementTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityActivateRequirementTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateEffectsTags_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateEffectsTags = { UE4CodeGen_Private::EPropertyClass::Array, "AbilityActivateEffectsTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAbility, AbilityActivateEffectsTags), METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateEffectsTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateEffectsTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateEffectsTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityActivateEffectsTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_OnActivatedAbilityTags_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_OnActivatedAbilityTags = { UE4CodeGen_Private::EPropertyClass::Array, "OnActivatedAbilityTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAbility, OnActivatedAbilityTags), METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_OnActivatedAbilityTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_OnActivatedAbilityTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_OnActivatedAbilityTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OnActivatedAbilityTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_AbilityTags_MetaData[] = {
		{ "Category", "AbilityStatus" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityTags = { UE4CodeGen_Private::EPropertyClass::Array, "AbilityTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAbility, AbilityTags), METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_AbilityTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_AbilityTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AbilityTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_OnCustomTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_OnAbilityDeactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_OnAbilityActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CooldownPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CooldownTimePassed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_IsActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_IsCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_StatsComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CooldownRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityDeactivateTriggerTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityDeactivateTriggerTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateTriggerTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateTriggerTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateBlockingTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateBlockingTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateRequirementTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateRequirementTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateEffectsTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityActivateEffectsTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_OnActivatedAbilityTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_OnActivatedAbilityTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_AbilityTags_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbility_Statics::ClassParams = {
		&UAbility::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbility, 2605438003);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbility(Z_Construct_UClass_UAbility, &UAbility::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("UAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
