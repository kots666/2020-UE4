// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GIANT_MyCharacterStatComponent_generated_h
#error "MyCharacterStatComponent.generated.h already included, missing '#pragma once' in MyCharacterStatComponent.h"
#endif
#define GIANT_MyCharacterStatComponent_generated_h

#define Giant_Source_Giant_MyCharacterStatComponent_h_15_RPC_WRAPPERS
#define Giant_Source_Giant_MyCharacterStatComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Giant_Source_Giant_MyCharacterStatComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyCharacterStatComponent(); \
	friend GIANT_API class UClass* Z_Construct_UClass_UMyCharacterStatComponent(); \
public: \
	DECLARE_CLASS(UMyCharacterStatComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(UMyCharacterStatComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_MyCharacterStatComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyCharacterStatComponent(); \
	friend GIANT_API class UClass* Z_Construct_UClass_UMyCharacterStatComponent(); \
public: \
	DECLARE_CLASS(UMyCharacterStatComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(UMyCharacterStatComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_MyCharacterStatComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCharacterStatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCharacterStatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCharacterStatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCharacterStatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCharacterStatComponent(UMyCharacterStatComponent&&); \
	NO_API UMyCharacterStatComponent(const UMyCharacterStatComponent&); \
public:


#define Giant_Source_Giant_MyCharacterStatComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCharacterStatComponent(UMyCharacterStatComponent&&); \
	NO_API UMyCharacterStatComponent(const UMyCharacterStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCharacterStatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCharacterStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyCharacterStatComponent)


#define Giant_Source_Giant_MyCharacterStatComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Level() { return STRUCT_OFFSET(UMyCharacterStatComponent, Level); } \
	FORCEINLINE static uint32 __PPO__HP() { return STRUCT_OFFSET(UMyCharacterStatComponent, HP); } \
	FORCEINLINE static uint32 __PPO__ATK() { return STRUCT_OFFSET(UMyCharacterStatComponent, ATK); }


#define Giant_Source_Giant_MyCharacterStatComponent_h_12_PROLOG
#define Giant_Source_Giant_MyCharacterStatComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_MyCharacterStatComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_MyCharacterStatComponent_h_15_RPC_WRAPPERS \
	Giant_Source_Giant_MyCharacterStatComponent_h_15_INCLASS \
	Giant_Source_Giant_MyCharacterStatComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Giant_Source_Giant_MyCharacterStatComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_MyCharacterStatComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_MyCharacterStatComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Giant_Source_Giant_MyCharacterStatComponent_h_15_INCLASS_NO_PURE_DECLS \
	Giant_Source_Giant_MyCharacterStatComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Giant_Source_Giant_MyCharacterStatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
