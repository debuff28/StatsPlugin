// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsPlugin/Public/Stats_Effect_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStats_Effect_Base() {}
// Cross Module References
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_Effect_Base_NoRegister();
	STATSPLUGIN_API UClass* Z_Construct_UClass_AStats_Effect_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_ActivateEffect();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_ActivateEffectAll();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_ApplyStackCountRule();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_Client_StartWork();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffect();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffectAll();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_DestroyNewest();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_DestroyOldest();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_FinishAll();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_FinishServer();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_GetAllTimeToFinish();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_GetEffectOfMyTag();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_GetThisTimeToFinish();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_Initiate();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_StartWorkServer();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_TryRemoveEffect();
	STATSPLUGIN_API UFunction* Z_Construct_UFunction_AStats_Effect_Base_TryToRemove();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStackCountRules();
	STATSPLUGIN_API UEnum* Z_Construct_UEnum_StatsPlugin_EStackRules();
	STATSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStatsAffectingParameters();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_AStats_Effect_Base_ActivateEffect = FName(TEXT("ActivateEffect"));
	void AStats_Effect_Base::ActivateEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStats_Effect_Base_ActivateEffect),NULL);
	}
	static FName NAME_AStats_Effect_Base_ActivateEffectAll = FName(TEXT("ActivateEffectAll"));
	void AStats_Effect_Base::ActivateEffectAll()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStats_Effect_Base_ActivateEffectAll),NULL);
	}
	static FName NAME_AStats_Effect_Base_Client_StartWork = FName(TEXT("Client_StartWork"));
	void AStats_Effect_Base::Client_StartWork()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStats_Effect_Base_Client_StartWork),NULL);
	}
	static FName NAME_AStats_Effect_Base_DeactivateEffect = FName(TEXT("DeactivateEffect"));
	void AStats_Effect_Base::DeactivateEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStats_Effect_Base_DeactivateEffect),NULL);
	}
	static FName NAME_AStats_Effect_Base_DeactivateEffectAll = FName(TEXT("DeactivateEffectAll"));
	void AStats_Effect_Base::DeactivateEffectAll()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStats_Effect_Base_DeactivateEffectAll),NULL);
	}
	static FName NAME_AStats_Effect_Base_FinishAll = FName(TEXT("FinishAll"));
	void AStats_Effect_Base::FinishAll()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStats_Effect_Base_FinishAll),NULL);
	}
	void AStats_Effect_Base::StaticRegisterNativesAStats_Effect_Base()
	{
		UClass* Class = AStats_Effect_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateEffectAll", &AStats_Effect_Base::execActivateEffectAll },
			{ "ApplyStackCountRule", &AStats_Effect_Base::execApplyStackCountRule },
			{ "Client_StartWork", &AStats_Effect_Base::execClient_StartWork },
			{ "DeactivateEffectAll", &AStats_Effect_Base::execDeactivateEffectAll },
			{ "DestroyNewest", &AStats_Effect_Base::execDestroyNewest },
			{ "DestroyOldest", &AStats_Effect_Base::execDestroyOldest },
			{ "FinishAll", &AStats_Effect_Base::execFinishAll },
			{ "FinishServer", &AStats_Effect_Base::execFinishServer },
			{ "GetAllTimeToFinish", &AStats_Effect_Base::execGetAllTimeToFinish },
			{ "GetEffectOfMyTag", &AStats_Effect_Base::execGetEffectOfMyTag },
			{ "GetThisTimeToFinish", &AStats_Effect_Base::execGetThisTimeToFinish },
			{ "Initiate", &AStats_Effect_Base::execInitiate },
			{ "StartWorkServer", &AStats_Effect_Base::execStartWorkServer },
			{ "TryRemoveEffect", &AStats_Effect_Base::execTryRemoveEffect },
			{ "TryToRemove", &AStats_Effect_Base::execTryToRemove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_ActivateEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_ActivateEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectEvents" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_ActivateEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "ActivateEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_ActivateEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_ActivateEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_ActivateEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_ActivateEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_ActivateEffectAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_ActivateEffectAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_ActivateEffectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "ActivateEffectAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_ActivateEffectAll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_ActivateEffectAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_ActivateEffectAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_ActivateEffectAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_ApplyStackCountRule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_ApplyStackCountRule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_ApplyStackCountRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "ApplyStackCountRule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_ApplyStackCountRule_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_ApplyStackCountRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_ApplyStackCountRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_ApplyStackCountRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_Client_StartWork_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_Client_StartWork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_Client_StartWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "Client_StartWork", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_Client_StartWork_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_Client_StartWork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_Client_StartWork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_Client_StartWork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "EffectEvents" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "DeactivateEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffectAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffectAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "DeactivateEffectAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffectAll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffectAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffectAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffectAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_DestroyNewest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_DestroyNewest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_DestroyNewest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "DestroyNewest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_DestroyNewest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_DestroyNewest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_DestroyNewest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_DestroyNewest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_DestroyOldest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_DestroyOldest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_DestroyOldest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "DestroyOldest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_DestroyOldest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_DestroyOldest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_DestroyOldest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_DestroyOldest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_FinishAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_FinishAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_FinishAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "FinishAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_FinishAll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_FinishAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_FinishAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_FinishAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_FinishServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_FinishServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_FinishServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "FinishServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_FinishServer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_FinishServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_FinishServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_FinishServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_GetAllTimeToFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_GetAllTimeToFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_GetAllTimeToFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "GetAllTimeToFinish", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_GetAllTimeToFinish_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_GetAllTimeToFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_GetAllTimeToFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_GetAllTimeToFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_GetEffectOfMyTag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_GetEffectOfMyTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_GetEffectOfMyTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "GetEffectOfMyTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_GetEffectOfMyTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_GetEffectOfMyTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_GetEffectOfMyTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_GetEffectOfMyTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_GetThisTimeToFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_GetThisTimeToFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_GetThisTimeToFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "GetThisTimeToFinish", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_GetThisTimeToFinish_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_GetThisTimeToFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_GetThisTimeToFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_GetThisTimeToFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_Initiate_Statics
	{
		struct Stats_Effect_Base_eventInitiate_Parms
		{
			AActor* Parent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStats_Effect_Base_Initiate_Statics::NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_Effect_Base_eventInitiate_Parms, Parent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStats_Effect_Base_Initiate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Effect_Base_Initiate_Statics::NewProp_Parent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_Initiate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_Initiate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "Initiate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(Stats_Effect_Base_eventInitiate_Parms), Z_Construct_UFunction_AStats_Effect_Base_Initiate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_Initiate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_Initiate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_Initiate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_Initiate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_Initiate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_StartWorkServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_StartWorkServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_StartWorkServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "StartWorkServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_StartWorkServer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_StartWorkServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_StartWorkServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_StartWorkServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_TryRemoveEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_TryRemoveEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_TryRemoveEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "TryRemoveEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_TryRemoveEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_TryRemoveEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_TryRemoveEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_TryRemoveEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics
	{
		struct Stats_Effect_Base_eventTryToRemove_Parms
		{
			TArray<FGameplayTag> RemoveInfoTags;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoveInfoTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemoveInfoTags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::NewProp_RemoveInfoTags = { UE4CodeGen_Private::EPropertyClass::Array, "RemoveInfoTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Stats_Effect_Base_eventTryToRemove_Parms, RemoveInfoTags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::NewProp_RemoveInfoTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RemoveInfoTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::NewProp_RemoveInfoTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::NewProp_RemoveInfoTags_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStats_Effect_Base, "TryToRemove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Stats_Effect_Base_eventTryToRemove_Parms), Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStats_Effect_Base_TryToRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStats_Effect_Base_TryToRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStats_Effect_Base_NoRegister()
	{
		return AStats_Effect_Base::StaticClass();
	}
	struct Z_Construct_UClass_AStats_Effect_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectsBase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectsBase_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attach_MetaData[];
#endif
		static void NewProp_attach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_attach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apply_MetaData[];
#endif
		static void NewProp_apply_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_apply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_init_MetaData[];
#endif
		static void NewProp_init_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_init;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_finish_MetaData[];
#endif
		static void NewProp_finish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_finish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StacksMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StacksMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StacksCountRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StacksCountRules;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StacksCountRules_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StacksRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StacksRules;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StacksRules_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectPowerAffectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectPowerAffectors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectPowerAffectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectBasePower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EffectBasePower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveEffectsWithInfoTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoveEffectsWithInfoTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemoveEffectsWithInfoTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectInfoTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectInfoTag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectInfoTag_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiveTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LiveTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStats_Effect_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStats_Effect_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStats_Effect_Base_ActivateEffect, "ActivateEffect" }, // 1938668478
		{ &Z_Construct_UFunction_AStats_Effect_Base_ActivateEffectAll, "ActivateEffectAll" }, // 2870436260
		{ &Z_Construct_UFunction_AStats_Effect_Base_ApplyStackCountRule, "ApplyStackCountRule" }, // 1084806603
		{ &Z_Construct_UFunction_AStats_Effect_Base_Client_StartWork, "Client_StartWork" }, // 3321123578
		{ &Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffect, "DeactivateEffect" }, // 527366683
		{ &Z_Construct_UFunction_AStats_Effect_Base_DeactivateEffectAll, "DeactivateEffectAll" }, // 976020217
		{ &Z_Construct_UFunction_AStats_Effect_Base_DestroyNewest, "DestroyNewest" }, // 2454059257
		{ &Z_Construct_UFunction_AStats_Effect_Base_DestroyOldest, "DestroyOldest" }, // 1517949191
		{ &Z_Construct_UFunction_AStats_Effect_Base_FinishAll, "FinishAll" }, // 3563586963
		{ &Z_Construct_UFunction_AStats_Effect_Base_FinishServer, "FinishServer" }, // 3631270912
		{ &Z_Construct_UFunction_AStats_Effect_Base_GetAllTimeToFinish, "GetAllTimeToFinish" }, // 981675391
		{ &Z_Construct_UFunction_AStats_Effect_Base_GetEffectOfMyTag, "GetEffectOfMyTag" }, // 3731537638
		{ &Z_Construct_UFunction_AStats_Effect_Base_GetThisTimeToFinish, "GetThisTimeToFinish" }, // 4021237329
		{ &Z_Construct_UFunction_AStats_Effect_Base_Initiate, "Initiate" }, // 3753345888
		{ &Z_Construct_UFunction_AStats_Effect_Base_StartWorkServer, "StartWorkServer" }, // 4253068214
		{ &Z_Construct_UFunction_AStats_Effect_Base_TryRemoveEffect, "TryRemoveEffect" }, // 1691722125
		{ &Z_Construct_UFunction_AStats_Effect_Base_TryToRemove, "TryToRemove" }, // 4232851173
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stats_Effect_Base.h" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectsBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectsBase = { UE4CodeGen_Private::EPropertyClass::Array, "EffectsBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, EffectsBase), METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectsBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectsBase_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectsBase_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "EffectsBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AStats_Effect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_attach_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	void Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_attach_SetBit(void* Obj)
	{
		((AStats_Effect_Base*)Obj)->attach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_attach = { UE4CodeGen_Private::EPropertyClass::Bool, "attach", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStats_Effect_Base), &Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_attach_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_attach_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_attach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_apply_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	void Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_apply_SetBit(void* Obj)
	{
		((AStats_Effect_Base*)Obj)->apply = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_apply = { UE4CodeGen_Private::EPropertyClass::Bool, "apply", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStats_Effect_Base), &Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_apply_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_apply_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_apply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_init_MetaData[] = {
		{ "Category", "Effect|info" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	void Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_init_SetBit(void* Obj)
	{
		((AStats_Effect_Base*)Obj)->init = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_init = { UE4CodeGen_Private::EPropertyClass::Bool, "init", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStats_Effect_Base), &Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_init_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_init_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_init_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_finish_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	void Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_finish_SetBit(void* Obj)
	{
		((AStats_Effect_Base*)Obj)->finish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_finish = { UE4CodeGen_Private::EPropertyClass::Bool, "finish", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStats_Effect_Base), &Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_finish_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_finish_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_finish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_ParentActor_MetaData[] = {
		{ "Category", "Effect|info" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_ParentActor = { UE4CodeGen_Private::EPropertyClass::Object, "ParentActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_ParentActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_ParentActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_TimeToFinish_MetaData[] = {
		{ "Category", "Effect|info" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_TimeToFinish = { UE4CodeGen_Private::EPropertyClass::Float, "TimeToFinish", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, TimeToFinish), METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_TimeToFinish_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_TimeToFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksMaxCount_MetaData[] = {
		{ "Category", "Config|Stack" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
		{ "ToolTip", "maximum of stacks" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksMaxCount = { UE4CodeGen_Private::EPropertyClass::Int, "StacksMaxCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, StacksMaxCount), METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksMaxCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksCountRules_MetaData[] = {
		{ "Category", "Config|Stack" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
		{ "ToolTip", "what happens when the amount of stacks is maximal" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksCountRules = { UE4CodeGen_Private::EPropertyClass::Enum, "StacksCountRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, StacksCountRules), Z_Construct_UEnum_StatsPlugin_EStackCountRules, METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksCountRules_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksCountRules_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksCountRules_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksRules_MetaData[] = {
		{ "Category", "Config|Stack" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
		{ "ToolTip", "how does this effect stack" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksRules = { UE4CodeGen_Private::EPropertyClass::Enum, "StacksRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, StacksRules), Z_Construct_UEnum_StatsPlugin_EStackRules, METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksRules_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksRules_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksRules_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectPowerAffectors_MetaData[] = {
		{ "Category", "Config|Power" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
		{ "ToolTip", "what owner stats affect effect strength" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectPowerAffectors = { UE4CodeGen_Private::EPropertyClass::Array, "EffectPowerAffectors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, EffectPowerAffectors), METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectPowerAffectors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectPowerAffectors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectPowerAffectors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EffectPowerAffectors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatsAffectingParameters, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectBasePower_MetaData[] = {
		{ "Category", "Config|Power" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
		{ "ToolTip", "Effect strength parameter. Used to understand if this effect can be removed by the tag contained in RemoveEffectsWithInfoTags" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectBasePower = { UE4CodeGen_Private::EPropertyClass::Float, "EffectBasePower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, EffectBasePower), METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectBasePower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectBasePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_RemoveEffectsWithInfoTags_MetaData[] = {
		{ "Category", "Config|RemoveOtherEffects" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
		{ "ToolTip", "which stats should be destroyed" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_RemoveEffectsWithInfoTags = { UE4CodeGen_Private::EPropertyClass::Array, "RemoveEffectsWithInfoTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, RemoveEffectsWithInfoTags), METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_RemoveEffectsWithInfoTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_RemoveEffectsWithInfoTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_RemoveEffectsWithInfoTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RemoveEffectsWithInfoTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectInfoTag_MetaData[] = {
		{ "Category", "Config|EffectInfo" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
		{ "ToolTip", "Using for removing effect" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectInfoTag = { UE4CodeGen_Private::EPropertyClass::Array, "EffectInfoTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, EffectInfoTag), METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectInfoTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectInfoTag_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectInfoTag_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EffectInfoTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_LiveTime_MetaData[] = {
		{ "Category", "Config|Info" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
		{ "ToolTip", "LiveTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_LiveTime = { UE4CodeGen_Private::EPropertyClass::Float, "LiveTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, LiveTime), METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_LiveTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_LiveTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectName_MetaData[] = {
		{ "Category", "Config|Info" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
		{ "ToolTip", "Effect display name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectName = { UE4CodeGen_Private::EPropertyClass::Name, "EffectName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, EffectName), METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectIcon_MetaData[] = {
		{ "Category", "Stats_Effect_Base" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
		{ "ToolTip", "Effect icon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectIcon = { UE4CodeGen_Private::EPropertyClass::Object, "EffectIcon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, EffectIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectTag_MetaData[] = {
		{ "Category", "Config|Info" },
		{ "ModuleRelativePath", "Public/Stats_Effect_Base.h" },
		{ "ToolTip", "Effect Tag" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectTag = { UE4CodeGen_Private::EPropertyClass::Struct, "EffectTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AStats_Effect_Base, EffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStats_Effect_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectsBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectsBase_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_attach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_apply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_init,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_finish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_ParentActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_TimeToFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksCountRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksCountRules_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_StacksRules_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectPowerAffectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectPowerAffectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectBasePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_RemoveEffectsWithInfoTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_RemoveEffectsWithInfoTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectInfoTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectInfoTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_LiveTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStats_Effect_Base_Statics::NewProp_EffectTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStats_Effect_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStats_Effect_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStats_Effect_Base_Statics::ClassParams = {
		&AStats_Effect_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AStats_Effect_Base_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStats_Effect_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStats_Effect_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStats_Effect_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStats_Effect_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStats_Effect_Base, 2092903793);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStats_Effect_Base(Z_Construct_UClass_AStats_Effect_Base, &AStats_Effect_Base::StaticClass, TEXT("/Script/StatsPlugin"), TEXT("AStats_Effect_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStats_Effect_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
