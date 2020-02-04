// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GIANT_Fountain_generated_h
#error "Fountain.generated.h already included, missing '#pragma once' in Fountain.h"
#endif
#define GIANT_Fountain_generated_h

#define Giant_Source_Giant_Fountain_h_12_RPC_WRAPPERS
#define Giant_Source_Giant_Fountain_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Giant_Source_Giant_Fountain_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFountain(); \
	friend GIANT_API class UClass* Z_Construct_UClass_AFountain(); \
public: \
	DECLARE_CLASS(AFountain, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(AFountain) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_Fountain_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFountain(); \
	friend GIANT_API class UClass* Z_Construct_UClass_AFountain(); \
public: \
	DECLARE_CLASS(AFountain, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(AFountain) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_Fountain_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFountain(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFountain) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFountain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFountain); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFountain(AFountain&&); \
	NO_API AFountain(const AFountain&); \
public:


#define Giant_Source_Giant_Fountain_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFountain(AFountain&&); \
	NO_API AFountain(const AFountain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFountain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFountain); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFountain)


#define Giant_Source_Giant_Fountain_h_12_PRIVATE_PROPERTY_OFFSET
#define Giant_Source_Giant_Fountain_h_9_PROLOG
#define Giant_Source_Giant_Fountain_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_Fountain_h_12_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_Fountain_h_12_RPC_WRAPPERS \
	Giant_Source_Giant_Fountain_h_12_INCLASS \
	Giant_Source_Giant_Fountain_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Giant_Source_Giant_Fountain_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_Fountain_h_12_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_Fountain_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Giant_Source_Giant_Fountain_h_12_INCLASS_NO_PURE_DECLS \
	Giant_Source_Giant_Fountain_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Giant_Source_Giant_Fountain_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
