// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GIANT_GiantPlayerController_generated_h
#error "GiantPlayerController.generated.h already included, missing '#pragma once' in GiantPlayerController.h"
#endif
#define GIANT_GiantPlayerController_generated_h

#define Giant_Source_Giant_GiantPlayerController_h_15_RPC_WRAPPERS
#define Giant_Source_Giant_GiantPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Giant_Source_Giant_GiantPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGiantPlayerController(); \
	friend GIANT_API class UClass* Z_Construct_UClass_AGiantPlayerController(); \
public: \
	DECLARE_CLASS(AGiantPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(AGiantPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_GiantPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGiantPlayerController(); \
	friend GIANT_API class UClass* Z_Construct_UClass_AGiantPlayerController(); \
public: \
	DECLARE_CLASS(AGiantPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(AGiantPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_GiantPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGiantPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGiantPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGiantPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGiantPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGiantPlayerController(AGiantPlayerController&&); \
	NO_API AGiantPlayerController(const AGiantPlayerController&); \
public:


#define Giant_Source_Giant_GiantPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGiantPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGiantPlayerController(AGiantPlayerController&&); \
	NO_API AGiantPlayerController(const AGiantPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGiantPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGiantPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGiantPlayerController)


#define Giant_Source_Giant_GiantPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define Giant_Source_Giant_GiantPlayerController_h_12_PROLOG
#define Giant_Source_Giant_GiantPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_GiantPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_GiantPlayerController_h_15_RPC_WRAPPERS \
	Giant_Source_Giant_GiantPlayerController_h_15_INCLASS \
	Giant_Source_Giant_GiantPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Giant_Source_Giant_GiantPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_GiantPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_GiantPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Giant_Source_Giant_GiantPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Giant_Source_Giant_GiantPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Giant_Source_Giant_GiantPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
