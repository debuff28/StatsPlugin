// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsPlugin_init() {}
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature();
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature();
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature();
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature();
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature();
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature();
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature();
	STATSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegateOneTimeModifyStats__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_StatsPlugin_StatModDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StatsPlugin_StatDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StatsPlugin_AplicationDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StatsPlugin_AbilityActivationDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StatsPlugin_StatModificationDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegatePeriodModifyStats__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StatsPlugin_OneParamsDelegateZone__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StatsPlugin_NoParamsDelegateOneTimeModifyStats__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/StatsPlugin",
				PKG_CompiledIn | 0x00000000,
				0x6FD4A73E,
				0x273CEF84,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
