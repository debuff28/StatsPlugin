// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class AActor;
#ifdef STATSPLUGIN_Stats_Effect_Base_generated_h
#error "Stats_Effect_Base.generated.h already included, missing '#pragma once' in Stats_Effect_Base.h"
#endif
#define STATSPLUGIN_Stats_Effect_Base_generated_h

#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_RPC_WRAPPERS \
	virtual void FinishAll_Implementation(); \
	virtual void Client_StartWork_Implementation(); \
 \
	DECLARE_FUNCTION(execTryToRemove) \
	{ \
		P_GET_TARRAY(FGameplayTag,Z_Param_RemoveInfoTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryToRemove(Z_Param_RemoveInfoTags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitiate) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initiate(Z_Param_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyStackCountRule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyStackCountRule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyNewest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyNewest(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyOldest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyOldest(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTimeToFinish) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllTimeToFinish(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThisTimeToFinish) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetThisTimeToFinish(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectOfMyTag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEffectOfMyTag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAll_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_StartWork) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_StartWork_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartWorkServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartWorkServer(); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryToRemove) \
	{ \
		P_GET_TARRAY(FGameplayTag,Z_Param_RemoveInfoTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryToRemove(Z_Param_RemoveInfoTags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitiate) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initiate(Z_Param_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyStackCountRule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyStackCountRule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyNewest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyNewest(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyOldest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyOldest(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTimeToFinish) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllTimeToFinish(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThisTimeToFinish) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetThisTimeToFinish(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectOfMyTag) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEffectOfMyTag(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAll_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_StartWork) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_StartWork_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartWorkServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartWorkServer(); \
		P_NATIVE_END; \
	}


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_EVENT_PARMS
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_CALLBACK_WRAPPERS
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStats_Effect_Base(); \
	friend struct Z_Construct_UClass_AStats_Effect_Base_Statics; \
public: \
	DECLARE_CLASS(AStats_Effect_Base, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStats_Effect_Base)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAStats_Effect_Base(); \
	friend struct Z_Construct_UClass_AStats_Effect_Base_Statics; \
public: \
	DECLARE_CLASS(AStats_Effect_Base, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AStats_Effect_Base)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStats_Effect_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStats_Effect_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStats_Effect_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStats_Effect_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStats_Effect_Base(AStats_Effect_Base&&); \
	NO_API AStats_Effect_Base(const AStats_Effect_Base&); \
public:


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStats_Effect_Base(AStats_Effect_Base&&); \
	NO_API AStats_Effect_Base(const AStats_Effect_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStats_Effect_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStats_Effect_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStats_Effect_Base)


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_PRIVATE_PROPERTY_OFFSET
#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_17_PROLOG \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_EVENT_PARMS


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_RPC_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_CALLBACK_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_INCLASS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_CALLBACK_WRAPPERS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_INCLASS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E__root_builded_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_Effect_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
