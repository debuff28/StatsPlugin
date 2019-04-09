// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef STATSPLUGIN_Stats_CharacterMovementComponent_generated_h
#error "Stats_CharacterMovementComponent.generated.h already included, missing '#pragma once' in Stats_CharacterMovementComponent.h"
#endif
#define STATSPLUGIN_Stats_CharacterMovementComponent_generated_h

#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_RPC_WRAPPERS \
	virtual bool Server_MoveDirection_Validate(FVector const& ); \
	virtual void Server_MoveDirection_Implementation(FVector const& MoveDir); \
	virtual bool Server_SetMaxWalkSpeed_Validate(const float ); \
	virtual void Server_SetMaxWalkSpeed_Implementation(const float NewMaxWalkSpeed); \
 \
	DECLARE_FUNCTION(execDodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_MoveDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MoveDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_MoveDirection_Validate(Z_Param_MoveDir)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_MoveDirection_Validate")); \
			return; \
		} \
		P_THIS->Server_MoveDirection_Implementation(Z_Param_MoveDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxWalkSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxWalkSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxWalkSpeed(Z_Param_NewMaxWalkSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetMaxWalkSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxWalkSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetMaxWalkSpeed_Validate(Z_Param_NewMaxWalkSpeed)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetMaxWalkSpeed_Validate")); \
			return; \
		} \
		P_THIS->Server_SetMaxWalkSpeed_Implementation(Z_Param_NewMaxWalkSpeed); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_MoveDirection_Validate(FVector const& ); \
	virtual void Server_MoveDirection_Implementation(FVector const& MoveDir); \
	virtual bool Server_SetMaxWalkSpeed_Validate(const float ); \
	virtual void Server_SetMaxWalkSpeed_Implementation(const float NewMaxWalkSpeed); \
 \
	DECLARE_FUNCTION(execDodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_MoveDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MoveDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_MoveDirection_Validate(Z_Param_MoveDir)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_MoveDirection_Validate")); \
			return; \
		} \
		P_THIS->Server_MoveDirection_Implementation(Z_Param_MoveDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxWalkSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxWalkSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxWalkSpeed(Z_Param_NewMaxWalkSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetMaxWalkSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxWalkSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetMaxWalkSpeed_Validate(Z_Param_NewMaxWalkSpeed)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetMaxWalkSpeed_Validate")); \
			return; \
		} \
		P_THIS->Server_SetMaxWalkSpeed_Implementation(Z_Param_NewMaxWalkSpeed); \
		P_NATIVE_END; \
	}


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_EVENT_PARMS \
	struct Stats_CharacterMovementComponent_eventServer_MoveDirection_Parms \
	{ \
		FVector MoveDir; \
	}; \
	struct Stats_CharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms \
	{ \
		float NewMaxWalkSpeed; \
	};


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_CALLBACK_WRAPPERS
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStats_CharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UStats_CharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UStats_CharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStats_CharacterMovementComponent)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUStats_CharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UStats_CharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UStats_CharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StatsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStats_CharacterMovementComponent)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStats_CharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStats_CharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStats_CharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStats_CharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStats_CharacterMovementComponent(UStats_CharacterMovementComponent&&); \
	NO_API UStats_CharacterMovementComponent(const UStats_CharacterMovementComponent&); \
public:


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStats_CharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStats_CharacterMovementComponent(UStats_CharacterMovementComponent&&); \
	NO_API UStats_CharacterMovementComponent(const UStats_CharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStats_CharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStats_CharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStats_CharacterMovementComponent)


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_12_PROLOG \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_EVENT_PARMS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_RPC_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_CALLBACK_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_INCLASS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_CALLBACK_WRAPPERS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DevPluginStats_Plugins_StatsPlugin_Source_StatsPlugin_Public_Stats_CharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
