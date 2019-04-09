// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/StatActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatActor() {}
// Cross Module References
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStatActor_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStatActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStatActor_GetValue();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStatValueType();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStatActor_InitStat();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStatActor_Regen();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStatActor_setRegenIsStoped();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStatActor_SetValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_ERegenRule();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsPlugin_eventCurrentAStatDelegate_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature_Statics::NewProp_tag = { UE4CodeGen_Private::EPropertyClass::Struct, "tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventCurrentAStatDelegate_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature_Statics::NewProp_tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin, "CurrentAStatDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_StatsPlugin_eventCurrentAStatDelegate_Parms), Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AStatActor::StaticRegisterNativesAStatActor()
	{
		UClass* Class = AStatActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &AStatActor::execGetValue },
			{ "InitStat", &AStatActor::execInitStat },
			{ "Regen", &AStatActor::execRegen },
			{ "setRegenIsStoped", &AStatActor::execsetRegenIsStoped },
			{ "SetValue", &AStatActor::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStatActor_GetValue_Statics
	{
		struct StatActor_eventGetValue_Parms
		{
			EStatValueType ValueType;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStatActor_GetValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StatActor_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AStatActor_GetValue_Statics::NewProp_ValueType = { UE4CodeGen_Private::EPropertyClass::Enum, "ValueType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatActor_eventGetValue_Parms, ValueType), Z_Construct_UEnum_StatsPlugin_EStatValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStatActor_GetValue_Statics::NewProp_ValueType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatActor_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatActor_GetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatActor_GetValue_Statics::NewProp_ValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatActor_GetValue_Statics::NewProp_ValueType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatActor_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatActor_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatActor, "GetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StatActor_eventGetValue_Parms), Z_Construct_UFunction_AStatActor_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatActor_GetValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatActor_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatActor_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatActor_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatActor_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatActor_InitStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatActor_InitStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatActor_InitStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatActor, "InitStat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatActor_InitStat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatActor_InitStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatActor_InitStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatActor_InitStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatActor_Regen_Statics
	{
		struct StatActor_eventRegen_Parms
		{
			float deltatime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltatime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStatActor_Regen_Statics::NewProp_deltatime = { UE4CodeGen_Private::EPropertyClass::Float, "deltatime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatActor_eventRegen_Parms, deltatime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatActor_Regen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatActor_Regen_Statics::NewProp_deltatime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatActor_Regen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatActor_Regen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatActor, "Regen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StatActor_eventRegen_Parms), Z_Construct_UFunction_AStatActor_Regen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatActor_Regen_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatActor_Regen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatActor_Regen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatActor_Regen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatActor_Regen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics
	{
		struct StatActor_eventsetRegenIsStoped_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((StatActor_eventsetRegenIsStoped_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::NewProp_Enable = { UE4CodeGen_Private::EPropertyClass::Bool, "Enable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StatActor_eventsetRegenIsStoped_Parms), &Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatActor, "setRegenIsStoped", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StatActor_eventsetRegenIsStoped_Parms), Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatActor_setRegenIsStoped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatActor_setRegenIsStoped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatActor_SetValue_Statics
	{
		struct StatActor_eventSetValue_Parms
		{
			EStatValueType ValueType;
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStatActor_SetValue_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatActor_eventSetValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AStatActor_SetValue_Statics::NewProp_ValueType = { UE4CodeGen_Private::EPropertyClass::Enum, "ValueType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StatActor_eventSetValue_Parms, ValueType), Z_Construct_UEnum_StatsPlugin_EStatValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStatActor_SetValue_Statics::NewProp_ValueType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatActor_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatActor_SetValue_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatActor_SetValue_Statics::NewProp_ValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatActor_SetValue_Statics::NewProp_ValueType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatActor_SetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatActor_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatActor, "SetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StatActor_eventSetValue_Parms), Z_Construct_UFunction_AStatActor_SetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatActor_SetValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatActor_SetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatActor_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatActor_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatActor_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStatActor_NoRegister()
	{
		return AStatActor::StaticClass();
	}
	struct Z_Construct_UClass_AStatActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onCurrentStatMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onCurrentStatMinValue;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStatActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStatActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStatActor_GetValue, "GetValue" }, // 1998785125
		{ &Z_Construct_UFunction_AStatActor_InitStat, "InitStat" }, // 507284574
		{ &Z_Construct_UFunction_AStatActor_Regen, "Regen" }, // 3054355044
		{ &Z_Construct_UFunction_AStatActor_setRegenIsStoped, "setRegenIsStoped" }, // 2614481853
		{ &Z_Construct_UFunction_AStatActor_SetValue, "SetValue" }, // 1649102723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StatActor.h" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_onCurrentStatMinValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_onCurrentStatMinValue = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "onCurrentStatMinValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AStatActor, onCurrentStatMinValue), Z_Construct_UDelegateFunction_StatsPlugin_CurrentAStatDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_onCurrentStatMinValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_onCurrentStatMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_ValueWasChanged_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	void Z_Construct_UClass_AStatActor_Statics::NewProp_ValueWasChanged_SetBit(void* Obj)
	{
		((AStatActor*)Obj)->ValueWasChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_ValueWasChanged = { UE4CodeGen_Private::EPropertyClass::Bool, "ValueWasChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStatActor), &Z_Construct_UClass_AStatActor_Statics::NewProp_ValueWasChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_ValueWasChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_ValueWasChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_RegenIsStoped_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	void Z_Construct_UClass_AStatActor_Statics::NewProp_RegenIsStoped_SetBit(void* Obj)
	{
		((AStatActor*)Obj)->RegenIsStoped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_RegenIsStoped = { UE4CodeGen_Private::EPropertyClass::Bool, "RegenIsStoped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStatActor), &Z_Construct_UClass_AStatActor_Statics::NewProp_RegenIsStoped_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_RegenIsStoped_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_RegenIsStoped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_PauseTime_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_PauseTime = { UE4CodeGen_Private::EPropertyClass::Struct, "PauseTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AStatActor, PauseTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_PauseTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_PauseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_StopRegenOnMinValue_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	void Z_Construct_UClass_AStatActor_Statics::NewProp_StopRegenOnMinValue_SetBit(void* Obj)
	{
		((AStatActor*)Obj)->StopRegenOnMinValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_StopRegenOnMinValue = { UE4CodeGen_Private::EPropertyClass::Bool, "StopRegenOnMinValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStatActor), &Z_Construct_UClass_AStatActor_Statics::NewProp_StopRegenOnMinValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_StopRegenOnMinValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_StopRegenOnMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_RegenPauseLenght_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_RegenPauseLenght = { UE4CodeGen_Private::EPropertyClass::Float, "RegenPauseLenght", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AStatActor, RegenPauseLenght), METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_RegenPauseLenght_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_RegenPauseLenght_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_regenRule_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_regenRule = { UE4CodeGen_Private::EPropertyClass::Enum, "regenRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStatActor, regenRule), Z_Construct_UEnum_StatsPlugin_ERegenRule, METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_regenRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_regenRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_regenRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_StatMinCurrentValue_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_StatMinCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMinCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AStatActor, StatMinCurrentValue), METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_StatMinCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_StatMinCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_StatMinBaseValue_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_StatMinBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMinBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AStatActor, StatMinBaseValue), METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_StatMinBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_StatMinBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_StatMaxCurrentValue_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_StatMaxCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMaxCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AStatActor, StatMaxCurrentValue), METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_StatMaxCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_StatMaxCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_StatMaxBaseValue_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_StatMaxBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatMaxBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AStatActor, StatMaxBaseValue), METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_StatMaxBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_StatMaxBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_StatRegenCurrentValue_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_StatRegenCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatRegenCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AStatActor, StatRegenCurrentValue), METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_StatRegenCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_StatRegenCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_StatRegenBaseValue_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_StatRegenBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatRegenBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AStatActor, StatRegenBaseValue), METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_StatRegenBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_StatRegenBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_StatCurrentValue_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_StatCurrentValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatCurrentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AStatActor, StatCurrentValue), METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_StatCurrentValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_StatCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_StatBaseValue_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_StatBaseValue = { UE4CodeGen_Private::EPropertyClass::Float, "StatBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AStatActor, StatBaseValue), METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_StatBaseValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_StatBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatActor_Statics::NewProp_StatTag_MetaData[] = {
		{ "Category", "StatsAffecting" },
		{ "ModuleRelativePath", "Public/StatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AStatActor_Statics::NewProp_StatTag = { UE4CodeGen_Private::EPropertyClass::Name, "StatTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AStatActor, StatTag), METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::NewProp_StatTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::NewProp_StatTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStatActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_onCurrentStatMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_ValueWasChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_RegenIsStoped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_PauseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_StopRegenOnMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_RegenPauseLenght,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_regenRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_regenRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_StatMinCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_StatMinBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_StatMaxCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_StatMaxBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_StatRegenCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_StatRegenBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_StatCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_StatBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatActor_Statics::NewProp_StatTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStatActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStatActor_Statics::ClassParams = {
		&AStatActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AStatActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStatActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStatActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStatActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStatActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStatActor, 3578735447);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStatActor(Z_Construct_UClass_AStatActor, &AStatActor::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("AStatActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStatActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
