// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/Stats_CharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStats_CharacterMovementComponent() {}
// Cross Module References
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStats_CharacterMovementComponent_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStats_CharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStats_CharacterMovementComponent_Dodge();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed();
// End Cross Module References
	static FName NAME_UStats_CharacterMovementComponent_Server_MoveDirection = FName(TEXT("Server_MoveDirection"));
	void UStats_CharacterMovementComponent::Server_MoveDirection(FVector const& MoveDir)
	{
		Stats_CharacterMovementComponent_eventServer_MoveDirection_Parms Parms;
		Parms.MoveDir=MoveDir;
		ProcessEvent(FindFunctionChecked(NAME_UStats_CharacterMovementComponent_Server_MoveDirection),&Parms);
	}
	static FName NAME_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed = FName(TEXT("Server_SetMaxWalkSpeed"));
	void UStats_CharacterMovementComponent::Server_SetMaxWalkSpeed(const float NewMaxWalkSpeed)
	{
		Stats_CharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms Parms;
		Parms.NewMaxWalkSpeed=NewMaxWalkSpeed;
		ProcessEvent(FindFunctionChecked(NAME_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed),&Parms);
	}
	void UStats_CharacterMovementComponent::StaticRegisterNativesUStats_CharacterMovementComponent()
	{
		UClass* Class = UStats_CharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dodge", &UStats_CharacterMovementComponent::execDodge },
			{ "Server_MoveDirection", &UStats_CharacterMovementComponent::execServer_MoveDirection },
			{ "Server_SetMaxWalkSpeed", &UStats_CharacterMovementComponent::execServer_SetMaxWalkSpeed },
			{ "SetMaxWalkSpeed", &UStats_CharacterMovementComponent::execSetMaxWalkSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStats_CharacterMovementComponent_Dodge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStats_CharacterMovementComponent_Dodge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dodge" },
		{ "ModuleRelativePath", "Public/Stats_CharacterMovementComponent.h" },
		{ "ToolTip", "Trigger the dodge ability (Called from the owning client)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStats_CharacterMovementComponent_Dodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStats_CharacterMovementComponent, "Dodge", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStats_CharacterMovementComponent_Dodge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStats_CharacterMovementComponent_Dodge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStats_CharacterMovementComponent_Dodge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStats_CharacterMovementComponent_Dodge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::NewProp_MoveDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::NewProp_MoveDir = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveDir", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000082, 1, nullptr, STRUCT_OFFSET(Stats_CharacterMovementComponent_eventServer_MoveDirection_Parms, MoveDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::NewProp_MoveDir_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::NewProp_MoveDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::NewProp_MoveDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_CharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStats_CharacterMovementComponent, "Server_MoveDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80A20C40, sizeof(Stats_CharacterMovementComponent_eventServer_MoveDirection_Parms), Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMaxWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMaxWalkSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "NewMaxWalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Stats_CharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms, NewMaxWalkSpeed), METADATA_PARAMS(Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_CharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStats_CharacterMovementComponent, "Server_SetMaxWalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(Stats_CharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms), Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed_Statics
	{
		struct Stats_CharacterMovementComponent_eventSetMaxWalkSpeed_Parms
		{
			float NewMaxWalkSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMaxWalkSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "NewMaxWalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_CharacterMovementComponent_eventSetMaxWalkSpeed_Parms, NewMaxWalkSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Max Walk Speed" },
		{ "ModuleRelativePath", "Public/Stats_CharacterMovementComponent.h" },
		{ "ToolTip", "Set Max Walk Speed (Called from the owning client)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStats_CharacterMovementComponent, "SetMaxWalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Stats_CharacterMovementComponent_eventSetMaxWalkSpeed_Parms), Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStats_CharacterMovementComponent_NoRegister()
	{
		return UStats_CharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStats_CharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DodgeStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStats_CharacterMovementComponent_Dodge, "Dodge" }, // 892289503
		{ &Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_MoveDirection, "Server_MoveDirection" }, // 820712921
		{ &Z_Construct_UFunction_UStats_CharacterMovementComponent_Server_SetMaxWalkSpeed, "Server_SetMaxWalkSpeed" }, // 115396775
		{ &Z_Construct_UFunction_UStats_CharacterMovementComponent_SetMaxWalkSpeed, "SetMaxWalkSpeed" }, // 2304417934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stats_CharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Stats_CharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::NewProp_DodgeStrength_MetaData[] = {
		{ "Category", "Dodge" },
		{ "ModuleRelativePath", "Public/Stats_CharacterMovementComponent.h" },
		{ "ToolTip", "Dodge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::NewProp_DodgeStrength = { UE4CodeGen_Private::EPropertyClass::Float, "DodgeStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UStats_CharacterMovementComponent, DodgeStrength), METADATA_PARAMS(Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::NewProp_DodgeStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::NewProp_DodgeStrength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::NewProp_DodgeStrength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStats_CharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::ClassParams = {
		&UStats_CharacterMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStats_CharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStats_CharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStats_CharacterMovementComponent, 3369075199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStats_CharacterMovementComponent(Z_Construct_UClass_UStats_CharacterMovementComponent, &UStats_CharacterMovementComponent::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("UStats_CharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStats_CharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
