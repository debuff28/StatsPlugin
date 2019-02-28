// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/StatsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsComponent() {}
// Cross Module References
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_Effect_Base_NoRegister();
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsEffects();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStatsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_AddEffect();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_addStat();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_ERegenRule();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_Client_RemoveStat();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FReplicateTmapSupportStruct();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_GetStatByTag();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsDatabase();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStatValueType();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_InitStats();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_ModifyStat();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsAffectingParameters();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStatChangeType();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_RemoveStat();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_ReplicateTimer();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_Server_SetName();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_SetRegenEnable();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_SetStatValue();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStatsComponent_SetTeam();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInputModifyRetargeting();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatInputModifyAffects();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsPlugin_eventAplicationDelegate_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::NewProp_EffectOnActor = { UE4CodeGen_Private::EPropertyClass::Object, "EffectOnActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventAplicationDelegate_Parms, EffectOnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::NewProp_Effect = { UE4CodeGen_Private::EPropertyClass::Object, "Effect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventAplicationDelegate_Parms, Effect), Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::NewProp_EffectOnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin, "AplicationDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_StatsPlugin_eventAplicationDelegate_Parms), Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsPlugin_eventStatDelegate_Parms
		{
			FGameplayTag tag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature_Statics::NewProp_tag = { UE4CodeGen_Private::EPropertyClass::Struct, "tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventStatDelegate_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature_Statics::NewProp_tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin, "StatDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_StatsPlugin_eventStatDelegate_Parms), Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsPlugin_eventStatModDelegate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventStatModDelegate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_deltaChange = { UE4CodeGen_Private::EPropertyClass::Float, "deltaChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventStatModDelegate_Parms, deltaChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_AdditinsTags = { UE4CodeGen_Private::EPropertyClass::Struct, "AdditinsTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventStatModDelegate_Parms, AdditinsTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_tag = { UE4CodeGen_Private::EPropertyClass::Struct, "tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventStatModDelegate_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_ModificationTargert = { UE4CodeGen_Private::EPropertyClass::Object, "ModificationTargert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventStatModDelegate_Parms, ModificationTargert), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_ModificationIniciator = { UE4CodeGen_Private::EPropertyClass::Object, "ModificationIniciator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventStatModDelegate_Parms, ModificationIniciator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_deltaChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_AdditinsTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_ModificationTargert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::NewProp_ModificationIniciator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin, "StatModDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_StatsPlugin_eventStatModDelegate_Parms), Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FStatsEffects::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStatsEffects_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatsEffects, Z_Construct_UPackage__Script_StatsPlugin(), TEXT("StatsEffects"), sizeof(FStatsEffects), Get_Z_Construct_UScriptStruct_FStatsEffects_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatsEffects(FStatsEffects::StaticStruct, TEXT("/Script/StatsPlugin"), TEXT("StatsEffects"), false, nullptr, nullptr);
static struct FScriptStruct_StatsPlugin_StaticRegisterNativesFStatsEffects
{
	FScriptStruct_StatsPlugin_StaticRegisterNativesFStatsEffects()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatsEffects")),new UScriptStruct::TCppStructOps<FStatsEffects>);
	}
} ScriptStruct_StatsPlugin_StaticRegisterNativesFStatsEffects;
	struct Z_Construct_UScriptStruct_FStatsEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEffectsActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentEffectsActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentEffectsActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsEffects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatsEffects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatsEffects>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_TimeToEnd_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_TimeToEnd = { UE4CodeGen_Private::EPropertyClass::Float, "TimeToEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsEffects, TimeToEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_TimeToEnd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_TimeToEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_CurrentEffectsActors_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_CurrentEffectsActors = { UE4CodeGen_Private::EPropertyClass::Array, "CurrentEffectsActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsEffects, CurrentEffectsActors), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_CurrentEffectsActors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_CurrentEffectsActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_CurrentEffectsActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentEffectsActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStatsEffects, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatsEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_TimeToEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_CurrentEffectsActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_CurrentEffectsActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsEffects_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatsEffects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
		nullptr,
		&NewStructOps,
		"StatsEffects",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStatsEffects),
		alignof(FStatsEffects),
		Z_Construct_UScriptStruct_FStatsEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsEffects_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatsEffects_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsEffects_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatsEffects()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatsEffects_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatsEffects"), sizeof(FStatsEffects), Get_Z_Construct_UScriptStruct_FStatsEffects_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatsEffects_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatsEffects_CRC() { return 3867749709U; }
	static FName NAME_UStatsComponent_Client_onStatMinValue = FName(TEXT("Client_onStatMinValue"));
	void UStatsComponent::Client_onStatMinValue(const FGameplayTag tag)
	{
		StatsComponent_eventClient_onStatMinValue_Parms Parms;
		Parms.tag=tag;
		ProcessEvent(FindFunctionChecked(NAME_UStatsComponent_Client_onStatMinValue),&Parms);
	}
	static FName NAME_UStatsComponent_Client_RemoveStat = FName(TEXT("Client_RemoveStat"));
	void UStatsComponent::Client_RemoveStat(const FGameplayTag NewName)
	{
		StatsComponent_eventClient_RemoveStat_Parms Parms;
		Parms.NewName=NewName;
		ProcessEvent(FindFunctionChecked(NAME_UStatsComponent_Client_RemoveStat),&Parms);
	}
	static FName NAME_UStatsComponent_Client_TestReplicateStats = FName(TEXT("Client_TestReplicateStats"));
	void UStatsComponent::Client_TestReplicateStats(TArray<FReplicateTmapSupportStruct> const& ArrayOfStats)
	{
		StatsComponent_eventClient_TestReplicateStats_Parms Parms;
		Parms.ArrayOfStats=ArrayOfStats;
		ProcessEvent(FindFunctionChecked(NAME_UStatsComponent_Client_TestReplicateStats),&Parms);
	}
	static FName NAME_UStatsComponent_Server_SetName = FName(TEXT("Server_SetName"));
	void UStatsComponent::Server_SetName(const FName NewName)
	{
		StatsComponent_eventServer_SetName_Parms Parms;
		Parms.NewName=NewName;
		ProcessEvent(FindFunctionChecked(NAME_UStatsComponent_Server_SetName),&Parms);
	}
	void UStatsComponent::StaticRegisterNativesUStatsComponent()
	{
		UClass* Class = UStatsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEffect", &UStatsComponent::execAddEffect },
			{ "addStat", &UStatsComponent::execaddStat },
			{ "Client_onStatMinValue", &UStatsComponent::execClient_onStatMinValue },
			{ "Client_RemoveStat", &UStatsComponent::execClient_RemoveStat },
			{ "Client_TestReplicateStats", &UStatsComponent::execClient_TestReplicateStats },
			{ "GetEffectsByInfoTag", &UStatsComponent::execGetEffectsByInfoTag },
			{ "GetStatByTag", &UStatsComponent::execGetStatByTag },
			{ "GetStatSelectedValueByTag", &UStatsComponent::execGetStatSelectedValueByTag },
			{ "InitStats", &UStatsComponent::execInitStats },
			{ "ModifyStat", &UStatsComponent::execModifyStat },
			{ "RemoveStat", &UStatsComponent::execRemoveStat },
			{ "ReplicateTimer", &UStatsComponent::execReplicateTimer },
			{ "Server_SetName", &UStatsComponent::execServer_SetName },
			{ "SetRegenEnable", &UStatsComponent::execSetRegenEnable },
			{ "SetStatValue", &UStatsComponent::execSetStatValue },
			{ "SetTeam", &UStatsComponent::execSetTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatsComponent_AddEffect_Statics
	{
		struct StatsComponent_eventAddEffect_Parms
		{
			AStats_Effect_Base* EffectBase;
			TMap<FGameplayTag,FStatsEffects> EffectsTemp;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EffectsTemp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectsTemp_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectsTemp_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::NewProp_EffectsTemp = { UE4CodeGen_Private::EPropertyClass::Map, "EffectsTemp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventAddEffect_Parms, EffectsTemp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::NewProp_EffectsTemp_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "EffectsTemp_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::NewProp_EffectsTemp_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "EffectsTemp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FStatsEffects, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::NewProp_EffectBase = { UE4CodeGen_Private::EPropertyClass::Object, "EffectBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventAddEffect_Parms, EffectBase), Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::NewProp_EffectsTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::NewProp_EffectsTemp_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::NewProp_EffectsTemp_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::NewProp_EffectBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "AddEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StatsComponent_eventAddEffect_Parms), Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_AddEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_AddEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_addStat_Statics
	{
		struct StatsComponent_eventaddStat_Parms
		{
			FGameplayTag Stat;
			float CurrentValue;
			float MinValue;
			float MaxValue;
			float RegenValue;
			ERegenRule RegenRule;
			float RegenPauseLenght;
			bool StopOnMinValue;
		};
		static void NewProp_StopOnMinValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopOnMinValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RegenPauseLenght;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RegenRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RegenRule_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RegenValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_StopOnMinValue_SetBit(void* Obj)
	{
		((StatsComponent_eventaddStat_Parms*)Obj)->StopOnMinValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_StopOnMinValue = { UE4CodeGen_Private::EPropertyClass::Bool, "StopOnMinValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StatsComponent_eventaddStat_Parms), &Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_StopOnMinValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_RegenPauseLenght = { UE4CodeGen_Private::EPropertyClass::Float, "RegenPauseLenght", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventaddStat_Parms, RegenPauseLenght), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_RegenRule = { UE4CodeGen_Private::EPropertyClass::Enum, "RegenRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventaddStat_Parms, RegenRule), Z_Construct_UEnum_StatsPlugin_ERegenRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_RegenRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_RegenValue = { UE4CodeGen_Private::EPropertyClass::Float, "RegenValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventaddStat_Parms, RegenValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_MaxValue = { UE4CodeGen_Private::EPropertyClass::Float, "MaxValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventaddStat_Parms, MaxValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_MinValue = { UE4CodeGen_Private::EPropertyClass::Float, "MinValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventaddStat_Parms, MinValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_CurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventaddStat_Parms, CurrentValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_Stat = { UE4CodeGen_Private::EPropertyClass::Struct, "Stat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventaddStat_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_addStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_StopOnMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_RegenPauseLenght,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_RegenRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_RegenRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_RegenValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_addStat_Statics::NewProp_Stat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_addStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_addStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "addStat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(StatsComponent_eventaddStat_Parms), Z_Construct_UFunction_UStatsComponent_addStat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_addStat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_addStat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_addStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_addStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_addStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::NewProp_tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::NewProp_tag = { UE4CodeGen_Private::EPropertyClass::Struct, "tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventClient_onStatMinValue_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::NewProp_tag_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::NewProp_tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::NewProp_tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "Client_onStatMinValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, sizeof(StatsComponent_eventClient_onStatMinValue_Parms), Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::NewProp_NewName = { UE4CodeGen_Private::EPropertyClass::Struct, "NewName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventClient_RemoveStat_Parms, NewName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::NewProp_NewName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::NewProp_NewName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "Client_RemoveStat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, sizeof(StatsComponent_eventClient_RemoveStat_Parms), Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_Client_RemoveStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_Client_RemoveStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayOfStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayOfStats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrayOfStats_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::NewProp_ArrayOfStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::NewProp_ArrayOfStats = { UE4CodeGen_Private::EPropertyClass::Array, "ArrayOfStats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000082, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventClient_TestReplicateStats_Parms, ArrayOfStats), METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::NewProp_ArrayOfStats_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::NewProp_ArrayOfStats_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::NewProp_ArrayOfStats_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ArrayOfStats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FReplicateTmapSupportStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::NewProp_ArrayOfStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::NewProp_ArrayOfStats_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "Client_TestReplicateStats", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024C40, sizeof(StatsComponent_eventClient_TestReplicateStats_Parms), Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics
	{
		struct StatsComponent_eventGetEffectsByInfoTag_Parms
		{
			FGameplayTag InfoTag;
			bool found;
			TArray<AStats_Effect_Base*> FoundedEffects;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoundedEffects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoundedEffects_Inner;
		static void NewProp_found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfoTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::NewProp_FoundedEffects = { UE4CodeGen_Private::EPropertyClass::Array, "FoundedEffects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventGetEffectsByInfoTag_Parms, FoundedEffects), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::NewProp_FoundedEffects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FoundedEffects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::NewProp_found_SetBit(void* Obj)
	{
		((StatsComponent_eventGetEffectsByInfoTag_Parms*)Obj)->found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::NewProp_found = { UE4CodeGen_Private::EPropertyClass::Bool, "found", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StatsComponent_eventGetEffectsByInfoTag_Parms), &Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::NewProp_InfoTag = { UE4CodeGen_Private::EPropertyClass::Struct, "InfoTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventGetEffectsByInfoTag_Parms, InfoTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::NewProp_FoundedEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::NewProp_FoundedEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::NewProp_found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::NewProp_InfoTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
		{ "ToolTip", "Search for effects by tag contained in additional information\ncan use for example to check whether the character is stunned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "GetEffectsByInfoTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(StatsComponent_eventGetEffectsByInfoTag_Parms), Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics
	{
		struct StatsComponent_eventGetStatByTag_Parms
		{
			FGameplayTag Stat;
			bool found;
			FStatsDatabase StatsValues;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatsValues;
		static void NewProp_found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::NewProp_StatsValues = { UE4CodeGen_Private::EPropertyClass::Struct, "StatsValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventGetStatByTag_Parms, StatsValues), Z_Construct_UScriptStruct_FStatsDatabase, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::NewProp_found_SetBit(void* Obj)
	{
		((StatsComponent_eventGetStatByTag_Parms*)Obj)->found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::NewProp_found = { UE4CodeGen_Private::EPropertyClass::Bool, "found", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StatsComponent_eventGetStatByTag_Parms), &Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::NewProp_Stat = { UE4CodeGen_Private::EPropertyClass::Struct, "Stat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventGetStatByTag_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::NewProp_StatsValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::NewProp_found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::NewProp_Stat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
		{ "ToolTip", "Get stat by tag\nReturns all values of stat" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "GetStatByTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(StatsComponent_eventGetStatByTag_Parms), Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_GetStatByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_GetStatByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics
	{
		struct StatsComponent_eventGetStatSelectedValueByTag_Parms
		{
			FGameplayTag Stat;
			EStatValueType ValueToReturn;
			bool found;
			float StatsValues;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatsValues;
		static void NewProp_found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueToReturn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueToReturn_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_StatsValues = { UE4CodeGen_Private::EPropertyClass::Float, "StatsValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventGetStatSelectedValueByTag_Parms, StatsValues), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_found_SetBit(void* Obj)
	{
		((StatsComponent_eventGetStatSelectedValueByTag_Parms*)Obj)->found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_found = { UE4CodeGen_Private::EPropertyClass::Bool, "found", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StatsComponent_eventGetStatSelectedValueByTag_Parms), &Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_ValueToReturn = { UE4CodeGen_Private::EPropertyClass::Enum, "ValueToReturn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventGetStatSelectedValueByTag_Parms, ValueToReturn), Z_Construct_UEnum_StatsPlugin_EStatValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_ValueToReturn_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_Stat = { UE4CodeGen_Private::EPropertyClass::Struct, "Stat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventGetStatSelectedValueByTag_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_StatsValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_ValueToReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_ValueToReturn_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::NewProp_Stat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
		{ "ToolTip", "Get stat value by tag\nReturns selected value of stat" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "GetStatSelectedValueByTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(StatsComponent_eventGetStatSelectedValueByTag_Parms), Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_InitStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_InitStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
		{ "ToolTip", "Initiate all stats\nSet all *curren valuses = *base valuse\nYou can use for example when lvlup, statrt pvp, etc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_InitStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "InitStats", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_InitStats_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_InitStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_InitStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_InitStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics
	{
		struct StatsComponent_eventModifyStat_Parms
		{
			AActor* initiator;
			FGameplayTag Stat;
			float inputValue;
			EStatChangeType ChangeType;
			EStatValueType ValueType;
			TArray<FStatsAffectingParameters> AffectingStats;
			bool Modify;
			float deltaChangeValue;
			float ResultValue;
			FGameplayTag ChangedStat;
			bool clear;
			TArray<FGameplayTag> AdditionTags;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionTags_Inner;
		static void NewProp_clear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_clear;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangedStat;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResultValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaChangeValue;
		static void NewProp_Modify_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Modify;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AffectingStats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AffectingStats_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChangeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChangeType_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inputValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_initiator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_AdditionTags = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventModifyStat_Parms, AdditionTags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_AdditionTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AdditionTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_clear_SetBit(void* Obj)
	{
		((StatsComponent_eventModifyStat_Parms*)Obj)->clear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_clear = { UE4CodeGen_Private::EPropertyClass::Bool, "clear", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StatsComponent_eventModifyStat_Parms), &Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_clear_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ChangedStat = { UE4CodeGen_Private::EPropertyClass::Struct, "ChangedStat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventModifyStat_Parms, ChangedStat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ResultValue = { UE4CodeGen_Private::EPropertyClass::Float, "ResultValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventModifyStat_Parms, ResultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_deltaChangeValue = { UE4CodeGen_Private::EPropertyClass::Float, "deltaChangeValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventModifyStat_Parms, deltaChangeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_Modify_SetBit(void* Obj)
	{
		((StatsComponent_eventModifyStat_Parms*)Obj)->Modify = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_Modify = { UE4CodeGen_Private::EPropertyClass::Bool, "Modify", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StatsComponent_eventModifyStat_Parms), &Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_Modify_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_AffectingStats = { UE4CodeGen_Private::EPropertyClass::Array, "AffectingStats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventModifyStat_Parms, AffectingStats), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_AffectingStats_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AffectingStats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsAffectingParameters, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ValueType = { UE4CodeGen_Private::EPropertyClass::Enum, "ValueType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventModifyStat_Parms, ValueType), Z_Construct_UEnum_StatsPlugin_EStatValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ValueType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ChangeType = { UE4CodeGen_Private::EPropertyClass::Enum, "ChangeType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventModifyStat_Parms, ChangeType), Z_Construct_UEnum_StatsPlugin_EStatChangeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ChangeType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_inputValue = { UE4CodeGen_Private::EPropertyClass::Float, "inputValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventModifyStat_Parms, inputValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_Stat = { UE4CodeGen_Private::EPropertyClass::Struct, "Stat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventModifyStat_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_initiator = { UE4CodeGen_Private::EPropertyClass::Object, "initiator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventModifyStat_Parms, initiator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_AdditionTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_AdditionTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_clear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ChangedStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ResultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_deltaChangeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_Modify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_AffectingStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_AffectingStats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ChangeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_ChangeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_inputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::NewProp_initiator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
		{ "ToolTip", "How Modify stat?\n       inputs\n       Stat - gameplay tag stat which will change\n       ChangeType - how the stat will change\n       ValueType - which value will change\n       AffectingStats - What value influence the driving value?\n       clear - Do stats inside the component affect the change?\n       AdditionTags - Additional tags transmitted upon change. For example, you can say that this is fire damage.\n\n       Returs\n       Modify - was there a change?\n       deltaChangeValue - Delta change\n       ResultValue - new value after change\n\n       !The changes in values will be applied in turn to the incoming value, after which the resulting value will be applied to the specified stat!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "ModifyStat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(StatsComponent_eventModifyStat_Parms), Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_ModifyStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_ModifyStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics
	{
		struct StatsComponent_eventRemoveStat_Parms
		{
			FGameplayTag Stat;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::NewProp_Stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::NewProp_Stat = { UE4CodeGen_Private::EPropertyClass::Struct, "Stat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventRemoveStat_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::NewProp_Stat_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::NewProp_Stat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::NewProp_Stat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "RemoveStat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(StatsComponent_eventRemoveStat_Parms), Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_RemoveStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_RemoveStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_ReplicateTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_ReplicateTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReplicateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "ReplicateTimer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_ReplicateTimer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReplicateTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_ReplicateTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_ReplicateTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::NewProp_NewName = { UE4CodeGen_Private::EPropertyClass::Name, "NewName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventServer_SetName_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::NewProp_NewName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::NewProp_NewName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "Server_SetName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84220CC0, sizeof(StatsComponent_eventServer_SetName_Parms), Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_Server_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_Server_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics
	{
		struct StatsComponent_eventSetRegenEnable_Parms
		{
			FGameplayTag Stat;
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((StatsComponent_eventSetRegenEnable_Parms*)Obj)->NewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StatsComponent_eventSetRegenEnable_Parms), &Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::NewProp_Stat = { UE4CodeGen_Private::EPropertyClass::Struct, "Stat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventSetRegenEnable_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::NewProp_Stat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "SetRegenEnable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(StatsComponent_eventSetRegenEnable_Parms), Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_SetRegenEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_SetRegenEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics
	{
		struct StatsComponent_eventSetStatValue_Parms
		{
			FGameplayTag Stat;
			EStatValueType ValueType;
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventSetStatValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_ValueType = { UE4CodeGen_Private::EPropertyClass::Enum, "ValueType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventSetStatValue_Parms, ValueType), Z_Construct_UEnum_StatsPlugin_EStatValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_ValueType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_Stat = { UE4CodeGen_Private::EPropertyClass::Struct, "Stat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventSetStatValue_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_ValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_ValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_Stat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "SetStatValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StatsComponent_eventSetStatValue_Parms), Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_SetStatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_SetTeam_Statics
	{
		struct StatsComponent_eventSetTeam_Parms
		{
			FName NewTeam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewTeam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::NewProp_NewTeam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::NewProp_NewTeam = { UE4CodeGen_Private::EPropertyClass::Name, "NewTeam", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(StatsComponent_eventSetTeam_Parms, NewTeam), METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::NewProp_NewTeam_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::NewProp_NewTeam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::NewProp_NewTeam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatsAction" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, "SetTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(StatsComponent_eventSetTeam_Parms), Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_SetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatsComponent_SetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStatsComponent_NoRegister()
	{
		return UStatsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStatsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEffectRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEffectRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEffectApplicated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEffectApplicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMyEffectRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMyEffectRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMyEffectApplicated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMyEffectApplicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetStatChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetStatChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStatChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onStatMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onStatMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicateStatsPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplicateStatsPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputRetargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputRetargets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputRetargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputModifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputModifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Effects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effects_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effects_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Stats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stats_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stats_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TeamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsComponent_AddEffect, "AddEffect" }, // 1258746253
		{ &Z_Construct_UFunction_UStatsComponent_addStat, "addStat" }, // 1902701439
		{ &Z_Construct_UFunction_UStatsComponent_Client_onStatMinValue, "Client_onStatMinValue" }, // 4130444923
		{ &Z_Construct_UFunction_UStatsComponent_Client_RemoveStat, "Client_RemoveStat" }, // 225680970
		{ &Z_Construct_UFunction_UStatsComponent_Client_TestReplicateStats, "Client_TestReplicateStats" }, // 699892149
		{ &Z_Construct_UFunction_UStatsComponent_GetEffectsByInfoTag, "GetEffectsByInfoTag" }, // 2899396763
		{ &Z_Construct_UFunction_UStatsComponent_GetStatByTag, "GetStatByTag" }, // 1355894435
		{ &Z_Construct_UFunction_UStatsComponent_GetStatSelectedValueByTag, "GetStatSelectedValueByTag" }, // 3902952930
		{ &Z_Construct_UFunction_UStatsComponent_InitStats, "InitStats" }, // 3940067743
		{ &Z_Construct_UFunction_UStatsComponent_ModifyStat, "ModifyStat" }, // 2630778585
		{ &Z_Construct_UFunction_UStatsComponent_RemoveStat, "RemoveStat" }, // 822370249
		{ &Z_Construct_UFunction_UStatsComponent_ReplicateTimer, "ReplicateTimer" }, // 3799766820
		{ &Z_Construct_UFunction_UStatsComponent_Server_SetName, "Server_SetName" }, // 10733965
		{ &Z_Construct_UFunction_UStatsComponent_SetRegenEnable, "SetRegenEnable" }, // 1023287276
		{ &Z_Construct_UFunction_UStatsComponent_SetStatValue, "SetStatValue" }, // 4096357856
		{ &Z_Construct_UFunction_UStatsComponent_SetTeam, "SetTeam" }, // 1251747490
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StatsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnEffectRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnEffectRemoved = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnEffectRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UStatsComponent, OnEffectRemoved), Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnEffectRemoved_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnEffectRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnEffectApplicated_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnEffectApplicated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnEffectApplicated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UStatsComponent, OnEffectApplicated), Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnEffectApplicated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnEffectApplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnMyEffectRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnMyEffectRemoved = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnMyEffectRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UStatsComponent, OnMyEffectRemoved), Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnMyEffectRemoved_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnMyEffectRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnMyEffectApplicated_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnMyEffectApplicated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnMyEffectApplicated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UStatsComponent, OnMyEffectApplicated), Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnMyEffectApplicated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnMyEffectApplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnTargetStatChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnTargetStatChange = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTargetStatChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UStatsComponent, OnTargetStatChange), Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnTargetStatChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnTargetStatChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStatChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
		{ "ToolTip", "called when any stat is changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStatChange = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnStatChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UStatsComponent, OnStatChange), Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStatChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStatChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_onStatMinValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
		{ "ToolTip", "called when any stat has reached a minimum" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_onStatMinValue = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "onStatMinValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UStatsComponent, onStatMinValue), Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_onStatMinValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_onStatMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_ReplicateStatsPeriod_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_ReplicateStatsPeriod = { UE4CodeGen_Private::EPropertyClass::Float, "ReplicateStatsPeriod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UStatsComponent, ReplicateStatsPeriod), METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_ReplicateStatsPeriod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_ReplicateStatsPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputRetargets_MetaData[] = {
		{ "Category", "StatsInputRetargets" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
		{ "ToolTip", "redirect incoming changes to stats\n\nthe redirection is applied last in the list, provided that the selected value is greater than the minimum.\n\n**********\nFor example:\nwe have stats shield1, shield2, and an array of redirection modifications [shield1, shield2].\nShield2 is the last in the array.\nWe have HP changes coming in, which are redirected to the shields.\nAt first, redirects will occur on shield2. As soon as the shield2 reaches the minimum value, the redirects will pass to the shield1." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputRetargets = { UE4CodeGen_Private::EPropertyClass::Array, "InputRetargets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UStatsComponent, InputRetargets), METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputRetargets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputRetargets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputRetargets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InputRetargets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputModifyRetargeting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputModifiers_MetaData[] = {
		{ "Category", "StatsInputModifiers" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
		{ "ToolTip", "when a stat is modified there is an opportunity to influence the melon modification.\n\nInputModifyTag - modification of this stat or modification containing this addition tag will be changed\n\nAffects - an array affecting the change InputModifyTag\n\n*For example, armor affects incoming damage.**" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputModifiers = { UE4CodeGen_Private::EPropertyClass::Array, "InputModifiers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UStatsComponent, InputModifiers), METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputModifiers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputModifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputModifiers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InputModifiers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatInputModifyAffects, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Effects = { UE4CodeGen_Private::EPropertyClass::Map, "Effects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UStatsComponent, Effects), METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_Effects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_Effects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Effects_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Effects_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Effects_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Effects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FStatsEffects, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
		{ "ToolTip", "stats are based on gameplay tags.\nAvailable to edit the original values \xe2\x80\x8b\xe2\x80\x8bof stats, which are used for initialization.\n\nregenRule - regeneration rule\nConstant = stat is constantly updated\nPauseRegenAfterModify = stat ceases to regenerate for a while (RegenPauseLenght) after modifying this stat\n\n*For example, when a player takes damage, his health is stopped for a few seconds.**" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats = { UE4CodeGen_Private::EPropertyClass::Map, "Stats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UStatsComponent, Stats), METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Stats_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Stats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FStatsDatabase, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
		{ "ToolTip", "TeamID of Parent Actor\n\nConst Neutrals TeamID = Neutral\nConst Other TeamID = None\n\nIf an actor does not have a \"StatsComponent\" component, its TeamID is considered \"None\"" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_TeamID = { UE4CodeGen_Private::EPropertyClass::Name, "TeamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010025, 1, nullptr, STRUCT_OFFSET(UStatsComponent, TeamID), METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_TeamID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_TeamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010025, 1, nullptr, STRUCT_OFFSET(UStatsComponent, Name), METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnEffectRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnEffectApplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnMyEffectRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnMyEffectApplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnTargetStatChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStatChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_onStatMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_ReplicateStatsPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputRetargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputRetargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_InputModifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Effects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Effects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Effects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatsComponent_Statics::ClassParams = {
		&UStatsComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UStatsComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatsComponent, 24889163);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatsComponent(Z_Construct_UClass_UStatsComponent, &UStatsComponent::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("UStatsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
