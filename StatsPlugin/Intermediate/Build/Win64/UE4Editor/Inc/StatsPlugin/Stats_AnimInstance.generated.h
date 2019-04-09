// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class UAnimMontage;
struct FGameplayTagContainer;
struct FGameplayTag;
#ifdef STATSPLUGIN_Stats_AnimInstance_generated_h
#error "Stats_AnimInstance.generated.h already included, missing '#pragma once' in Stats_AnimInstance.h"
#endif
#define STATSPLUGIN_Stats_AnimInstance_generated_h

#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlaySlotAnimationWithLength) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Anim); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopCount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTriggerTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTimeToStart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaySlotAnimationWithLength(Z_Param_Anim,Z_Param_Length,Z_Param_Slot,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_LoopCount,Z_Param_BlendOutTriggerTime,Z_Param_InTimeToStart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayMontageWithLength) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_GET_UBOOL(Z_Param_StopAllMontages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayMontageWithLength(Z_Param_Montage,Z_Param_Length,Z_Param_StopAllMontages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStates) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_CurrentStatesTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStates(Z_Param_CurrentStatesTags); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlaySlotAnimationWithLength) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Anim); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopCount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTriggerTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTimeToStart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaySlotAnimationWithLength(Z_Param_Anim,Z_Param_Length,Z_Param_Slot,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_LoopCount,Z_Param_BlendOutTriggerTime,Z_Param_InTimeToStart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayMontageWithLength) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Length); \
		P_GET_UBOOL(Z_Param_StopAllMontages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayMontageWithLength(Z_Param_Montage,Z_Param_Length,Z_Param_StopAllMontages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStates) \
	{ \
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_CurrentStatesTags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStates(Z_Param_CurrentStatesTags); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_EVENT_PARMS \
	struct Stats_AnimInstance_eventPlayMontageByTag_Parms \
	{ \
		FGameplayTag MontageTag; \
		float AnimationLength; \
	};


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_CALLBACK_WRAPPERS
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStats_AnimInstance(); \
	friend struct Z_Construct_UClass_UStats_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UStats_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStats_AnimInstance)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUStats_AnimInstance(); \
	friend struct Z_Construct_UClass_UStats_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UStats_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStats_AnimInstance)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStats_AnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStats_AnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStats_AnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStats_AnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStats_AnimInstance(UStats_AnimInstance&&); \
	NO_API UStats_AnimInstance(const UStats_AnimInstance&); \
public:


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStats_AnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStats_AnimInstance(UStats_AnimInstance&&); \
	NO_API UStats_AnimInstance(const UStats_AnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStats_AnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStats_AnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStats_AnimInstance)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_PRIVATE_PROPERTY_OFFSET
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_13_PROLOG \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_EVENT_PARMS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_RPC_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_CALLBACK_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_INCLASS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_CALLBACK_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_AnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
