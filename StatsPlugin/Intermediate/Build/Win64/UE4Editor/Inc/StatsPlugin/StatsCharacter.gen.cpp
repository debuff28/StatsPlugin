// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/StatsCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsCharacter() {}
// Cross Module References
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStatsCharacter_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStatsCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStats_CharacterMovementComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsPlugin_eventVoidZoneDelegate_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_StatsPlugin_eventVoidZoneDelegate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsPlugin, "VoidZoneDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_StatsPlugin_eventVoidZoneDelegate_Parms), Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AStatsCharacter::StaticRegisterNativesAStatsCharacter()
	{
		UClass* Class = AStatsCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStatsMovementComponent", &AStatsCharacter::execGetStatsMovementComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics
	{
		struct StatsCharacter_eventGetStatsMovementComponent_Parms
		{
			UStats_CharacterMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(StatsCharacter_eventGetStatsMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UStats_CharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/StatsCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatsCharacter, "GetStatsMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(StatsCharacter_eventGetStatsMovementComponent_Parms), Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStatsCharacter_NoRegister()
	{
		return AStatsCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AStatsCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeaveVoidZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaveVoidZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEnterInVoidZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnterInVoidZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStatsCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStatsCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStatsCharacter_GetStatsMovementComponent, "GetStatsMovementComponent" }, // 3300902024
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatsCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StatsCharacter.h" },
		{ "ModuleRelativePath", "Public/StatsCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatsCharacter_Statics::NewProp_OnLeaveVoidZone_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AStatsCharacter_Statics::NewProp_OnLeaveVoidZone = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLeaveVoidZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AStatsCharacter, OnLeaveVoidZone), Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AStatsCharacter_Statics::NewProp_OnLeaveVoidZone_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatsCharacter_Statics::NewProp_OnLeaveVoidZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatsCharacter_Statics::NewProp_OnEnterInVoidZone_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AStatsCharacter_Statics::NewProp_OnEnterInVoidZone = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnEnterInVoidZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AStatsCharacter, OnEnterInVoidZone), Z_Construct_UDelegateFunction_StatsPlugin_VoidZoneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AStatsCharacter_Statics::NewProp_OnEnterInVoidZone_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatsCharacter_Statics::NewProp_OnEnterInVoidZone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStatsCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatsCharacter_Statics::NewProp_OnLeaveVoidZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatsCharacter_Statics::NewProp_OnEnterInVoidZone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStatsCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatsCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStatsCharacter_Statics::ClassParams = {
		&AStatsCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AStatsCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStatsCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStatsCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStatsCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStatsCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStatsCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStatsCharacter, 421898374);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStatsCharacter(Z_Construct_UClass_AStatsCharacter, &AStatsCharacter::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("AStatsCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStatsCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
