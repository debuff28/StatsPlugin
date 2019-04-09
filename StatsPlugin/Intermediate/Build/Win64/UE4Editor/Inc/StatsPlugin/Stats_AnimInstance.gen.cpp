// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/Stats_AnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStats_AnimInstance() {}
// Cross Module References
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStats_AnimInstance_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_UStats_AnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_UStats_AnimInstance_SetStates();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	static FName NAME_UStats_AnimInstance_PlayMontageByTag = FName(TEXT("PlayMontageByTag"));
	void UStats_AnimInstance::PlayMontageByTag(FGameplayTag MontageTag, float AnimationLength)
	{
		Stats_AnimInstance_eventPlayMontageByTag_Parms Parms;
		Parms.MontageTag=MontageTag;
		Parms.AnimationLength=AnimationLength;
		ProcessEvent(FindFunctionChecked(NAME_UStats_AnimInstance_PlayMontageByTag),&Parms);
	}
	void UStats_AnimInstance::StaticRegisterNativesUStats_AnimInstance()
	{
		UClass* Class = UStats_AnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayMontageWithLength", &UStats_AnimInstance::execPlayMontageWithLength },
			{ "PlaySlotAnimationWithLength", &UStats_AnimInstance::execPlaySlotAnimationWithLength },
			{ "SetStates", &UStats_AnimInstance::execSetStates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MontageTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::NewProp_AnimationLength = { UE4CodeGen_Private::EPropertyClass::Float, "AnimationLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlayMontageByTag_Parms, AnimationLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::NewProp_MontageTag = { UE4CodeGen_Private::EPropertyClass::Struct, "MontageTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlayMontageByTag_Parms, MontageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::NewProp_AnimationLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::NewProp_MontageTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationEvents" },
		{ "ModuleRelativePath", "Public/Stats_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStats_AnimInstance, "PlayMontageByTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(Stats_AnimInstance_eventPlayMontageByTag_Parms), Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics
	{
		struct Stats_AnimInstance_eventPlayMontageWithLength_Parms
		{
			UAnimMontage* Montage;
			float Length;
			bool StopAllMontages;
		};
		static void NewProp_StopAllMontages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopAllMontages;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::NewProp_StopAllMontages_SetBit(void* Obj)
	{
		((Stats_AnimInstance_eventPlayMontageWithLength_Parms*)Obj)->StopAllMontages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::NewProp_StopAllMontages = { UE4CodeGen_Private::EPropertyClass::Bool, "StopAllMontages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Stats_AnimInstance_eventPlayMontageWithLength_Parms), &Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::NewProp_StopAllMontages_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlayMontageWithLength_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlayMontageWithLength_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::NewProp_StopAllMontages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationAction" },
		{ "ModuleRelativePath", "Public/Stats_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStats_AnimInstance, "PlayMontageWithLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Stats_AnimInstance_eventPlayMontageWithLength_Parms), Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics
	{
		struct Stats_AnimInstance_eventPlaySlotAnimationWithLength_Parms
		{
			UAnimSequenceBase* Anim;
			float Length;
			FName Slot;
			float BlendInTime;
			float BlendOutTime;
			int32 LoopCount;
			float BlendOutTriggerTime;
			float InTimeToStart;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTimeToStart;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTriggerTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_InTimeToStart = { UE4CodeGen_Private::EPropertyClass::Float, "InTimeToStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlaySlotAnimationWithLength_Parms, InTimeToStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_BlendOutTriggerTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendOutTriggerTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlaySlotAnimationWithLength_Parms, BlendOutTriggerTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_LoopCount = { UE4CodeGen_Private::EPropertyClass::Int, "LoopCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlaySlotAnimationWithLength_Parms, LoopCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_BlendOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlaySlotAnimationWithLength_Parms, BlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_BlendInTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendInTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlaySlotAnimationWithLength_Parms, BlendInTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_Slot = { UE4CodeGen_Private::EPropertyClass::Name, "Slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlaySlotAnimationWithLength_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlaySlotAnimationWithLength_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_Anim = { UE4CodeGen_Private::EPropertyClass::Object, "Anim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventPlaySlotAnimationWithLength_Parms, Anim), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_InTimeToStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_BlendOutTriggerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_LoopCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_BlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::NewProp_Anim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationAction" },
		{ "CPP_Default_BlendInTime", "0.000000" },
		{ "CPP_Default_BlendOutTime", "0.000000" },
		{ "CPP_Default_BlendOutTriggerTime", "-1.000000" },
		{ "CPP_Default_InTimeToStart", "0.000000" },
		{ "CPP_Default_LoopCount", "1" },
		{ "ModuleRelativePath", "Public/Stats_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStats_AnimInstance, "PlaySlotAnimationWithLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Stats_AnimInstance_eventPlaySlotAnimationWithLength_Parms), Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStats_AnimInstance_SetStates_Statics
	{
		struct Stats_AnimInstance_eventSetStates_Parms
		{
			FGameplayTagContainer CurrentStatesTags;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentStatesTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStats_AnimInstance_SetStates_Statics::NewProp_CurrentStatesTags = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentStatesTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_AnimInstance_eventSetStates_Parms, CurrentStatesTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStats_AnimInstance_SetStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStats_AnimInstance_SetStates_Statics::NewProp_CurrentStatesTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStats_AnimInstance_SetStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Stats_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStats_AnimInstance_SetStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStats_AnimInstance, "SetStates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Stats_AnimInstance_eventSetStates_Parms), Z_Construct_UFunction_UStats_AnimInstance_SetStates_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStats_AnimInstance_SetStates_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStats_AnimInstance_SetStates_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStats_AnimInstance_SetStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStats_AnimInstance_SetStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStats_AnimInstance_SetStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStats_AnimInstance_NoRegister()
	{
		return UStats_AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UStats_AnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaRotationYawSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaRotationYawSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaRotationYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldRotationYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterStates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStats_AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStats_AnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStats_AnimInstance_PlayMontageByTag, "PlayMontageByTag" }, // 3816187143
		{ &Z_Construct_UFunction_UStats_AnimInstance_PlayMontageWithLength, "PlayMontageWithLength" }, // 3432225974
		{ &Z_Construct_UFunction_UStats_AnimInstance_PlaySlotAnimationWithLength, "PlaySlotAnimationWithLength" }, // 410553266
		{ &Z_Construct_UFunction_UStats_AnimInstance_SetStates, "SetStates" }, // 2246410988
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStats_AnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Stats_AnimInstance.h" },
		{ "ModuleRelativePath", "Public/Stats_AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_DeltaRotationYawSpeed_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Stats_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_DeltaRotationYawSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaRotationYawSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UStats_AnimInstance, DeltaRotationYawSpeed), METADATA_PARAMS(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_DeltaRotationYawSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_DeltaRotationYawSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_DeltaRotationYaw_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Stats_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_DeltaRotationYaw = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaRotationYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UStats_AnimInstance, DeltaRotationYaw), METADATA_PARAMS(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_DeltaRotationYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_DeltaRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_OldRotationYaw_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Stats_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_OldRotationYaw = { UE4CodeGen_Private::EPropertyClass::Float, "OldRotationYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UStats_AnimInstance, OldRotationYaw), METADATA_PARAMS(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_OldRotationYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_OldRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Stats_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Float, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UStats_AnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Stats_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UStats_AnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_CharacterStates_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Stats_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_CharacterStates = { UE4CodeGen_Private::EPropertyClass::Struct, "CharacterStates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UStats_AnimInstance, CharacterStates), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_CharacterStates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_CharacterStates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStats_AnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_DeltaRotationYawSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_DeltaRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_OldRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStats_AnimInstance_Statics::NewProp_CharacterStates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStats_AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStats_AnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStats_AnimInstance_Statics::ClassParams = {
		&UStats_AnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UStats_AnimInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UStats_AnimInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStats_AnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStats_AnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStats_AnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStats_AnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStats_AnimInstance, 3586352403);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStats_AnimInstance(Z_Construct_UClass_UStats_AnimInstance, &UStats_AnimInstance::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("UStats_AnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStats_AnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
