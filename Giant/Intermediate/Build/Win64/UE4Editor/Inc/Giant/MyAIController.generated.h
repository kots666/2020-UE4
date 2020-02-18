// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GIANT_MyAIController_generated_h
#error "MyAIController.generated.h already included, missing '#pragma once' in MyAIController.h"
#endif
#define GIANT_MyAIController_generated_h

#define Giant_Source_Giant_MyAIController_h_15_RPC_WRAPPERS
#define Giant_Source_Giant_MyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Giant_Source_Giant_MyAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyAIController(); \
	friend GIANT_API class UClass* Z_Construct_UClass_AMyAIController(); \
public: \
	DECLARE_CLASS(AMyAIController, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(AMyAIController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_MyAIController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyAIController(); \
	friend GIANT_API class UClass* Z_Construct_UClass_AMyAIController(); \
public: \
	DECLARE_CLASS(AMyAIController, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(AMyAIController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_MyAIController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyAIController(AMyAIController&&); \
	NO_API AMyAIController(const AMyAIController&); \
public:


#define Giant_Source_Giant_MyAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyAIController(AMyAIController&&); \
	NO_API AMyAIController(const AMyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyAIController)


#define Giant_Source_Giant_MyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BTAsset() { return STRUCT_OFFSET(AMyAIController, BTAsset); } \
	FORCEINLINE static uint32 __PPO__BBAsset() { return STRUCT_OFFSET(AMyAIController, BBAsset); }


#define Giant_Source_Giant_MyAIController_h_12_PROLOG
#define Giant_Source_Giant_MyAIController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_MyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_MyAIController_h_15_RPC_WRAPPERS \
	Giant_Source_Giant_MyAIController_h_15_INCLASS \
	Giant_Source_Giant_MyAIController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Giant_Source_Giant_MyAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_MyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_MyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Giant_Source_Giant_MyAIController_h_15_INCLASS_NO_PURE_DECLS \
	Giant_Source_Giant_MyAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Giant_Source_Giant_MyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
