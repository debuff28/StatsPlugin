// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSPLUGIN_EnumsObject_generated_h
#error "EnumsObject.generated.h already included, missing '#pragma once' in EnumsObject.h"
#endif
#define STATSPLUGIN_EnumsObject_generated_h

#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_RPC_WRAPPERS
#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_RPC_WRAPPERS_NO_PURE_DECLS
#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnumsObject(); \
	friend struct Z_Construct_UClass_UEnumsObject_Statics; \
public: \
	DECLARE_CLASS(UEnumsObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEnumsObject)


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUEnumsObject(); \
	friend struct Z_Construct_UClass_UEnumsObject_Statics; \
public: \
	DECLARE_CLASS(UEnumsObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEnumsObject)


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnumsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnumsObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnumsObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnumsObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnumsObject(UEnumsObject&&); \
	NO_API UEnumsObject(const UEnumsObject&); \
public:


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnumsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnumsObject(UEnumsObject&&); \
	NO_API UEnumsObject(const UEnumsObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnumsObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnumsObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnumsObject)


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_PRIVATE_PROPERTY_OFFSET
#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_95_PROLOG
#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_RPC_WRAPPERS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_INCLASS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_PRIVATE_PROPERTY_OFFSET \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_INCLASS_NO_PURE_DECLS \
	E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E__root_builded_StatsPlugin_StatsPlugin_HostProject_Plugins_StatsPlugin_Source_StatsPlugin_Public_EnumsObject_h


#define FOREACH_ENUM_EEFFECTMODIFYTYPE(op) \
	op(EEffectModifyType::EMT_Permanent) \
	op(EEffectModifyType::EMT_Temporary) 
#define FOREACH_ENUM_ESPELLACTIVETYPE(op) \
	op(ESpellActiveType::SAT_OneClick) \
	op(ESpellActiveType::SAT_KeyHold) \
	op(ESpellActiveType::SAT_KeyHoldOrFastClicks) 
#define FOREACH_ENUM_ESPELLBASETYPE(op) \
	op(ESpellBaseType::SBT_SpellSpawner) \
	op(ESpellBaseType::SBT_Projectile) 
#define FOREACH_ENUM_ESTACKCOUNTRULES(op) \
	op(EStackCountRules::SCR_ReplaceTheOldest) \
	op(EStackCountRules::SCR_ReplaceTheNewest) \
	op(EStackCountRules::SCR_None) 
#define FOREACH_ENUM_ESTACKRULES(op) \
	op(EStackRules::SR_EachStackHasItsOwnTime) \
	op(EStackRules::SR_AllStacksHaveATotalTime) \
	op(EStackRules::SR_NewStackReplacesOld) \
	op(EStackRules::SR_NewStackNotReplacesOld) 
#define FOREACH_ENUM_EREACTRULE(op) \
	op(EReactRule::RR_Frieds) \
	op(EReactRule::RR_Enemys) \
	op(EReactRule::RR_Neutrals) \
	op(EReactRule::RR_Other) 
#define FOREACH_ENUM_ESTATVALUETYPE(op) \
	op(EStatValueType::SVT_Base) \
	op(EStatValueType::SVT_Current) \
	op(EStatValueType::SVT_RegenBase) \
	op(EStatValueType::SVT_RegenCurrent) \
	op(EStatValueType::SVT_MaxBase) \
	op(EStatValueType::SVT_MaxCurrent) \
	op(EStatValueType::SVT_MinBase) \
	op(EStatValueType::SVT_MinCurrent) 
#define FOREACH_ENUM_EREGENRULE(op) \
	op(ERegenRule::RR_ConstantRegen) \
	op(ERegenRule::RR_PauseRegenAfterModify) 
#define FOREACH_ENUM_ESTATCHANGETYPE(op) \
	op(EStatChangeType::SCT_Add) \
	op(EStatChangeType::SCT_Sub) \
	op(EStatChangeType::SCT_Multiply) \
	op(EStatChangeType::SCT_Divide) \
	op(EStatChangeType::SCT_AddPercent) \
	op(EStatChangeType::SCT_SubtractPercent) \
	op(EStatChangeType::SCT_SetValue) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
