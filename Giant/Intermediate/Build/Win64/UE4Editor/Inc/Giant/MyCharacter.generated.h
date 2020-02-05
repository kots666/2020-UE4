// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GIANT_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define GIANT_MyCharacter_generated_h

#define Giant_Source_Giant_MyCharacter_h_12_RPC_WRAPPERS
#define Giant_Source_Giant_MyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Giant_Source_Giant_MyCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend GIANT_API class UClass* Z_Construct_UClass_AMyCharacter(); \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_MyCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend GIANT_API class UClass* Z_Construct_UClass_AMyCharacter(); \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_MyCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define Giant_Source_Giant_MyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define Giant_Source_Giant_MyCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define Giant_Source_Giant_MyCharacter_h_9_PROLOG
#define Giant_Source_Giant_MyCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_MyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_MyCharacter_h_12_RPC_WRAPPERS \
	Giant_Source_Giant_MyCharacter_h_12_INCLASS \
	Giant_Source_Giant_MyCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Giant_Source_Giant_MyCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_MyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_MyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Giant_Source_Giant_MyCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Giant_Source_Giant_MyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Giant_Source_Giant_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
