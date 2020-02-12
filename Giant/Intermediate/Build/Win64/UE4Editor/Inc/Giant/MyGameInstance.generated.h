// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GIANT_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define GIANT_MyGameInstance_generated_h

#define Giant_Source_Giant_MyGameInstance_h_13_GENERATED_BODY \
	friend GIANT_API class UScriptStruct* Z_Construct_UScriptStruct_FMyCharacterData(); \
	GIANT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


#define Giant_Source_Giant_MyGameInstance_h_34_RPC_WRAPPERS
#define Giant_Source_Giant_MyGameInstance_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define Giant_Source_Giant_MyGameInstance_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend GIANT_API class UClass* Z_Construct_UClass_UMyGameInstance(); \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_MyGameInstance_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend GIANT_API class UClass* Z_Construct_UClass_UMyGameInstance(); \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_MyGameInstance_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define Giant_Source_Giant_MyGameInstance_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyGameInstance)


#define Giant_Source_Giant_MyGameInstance_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyCharacterTable() { return STRUCT_OFFSET(UMyGameInstance, MyCharacterTable); }


#define Giant_Source_Giant_MyGameInstance_h_31_PROLOG
#define Giant_Source_Giant_MyGameInstance_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_MyGameInstance_h_34_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_MyGameInstance_h_34_RPC_WRAPPERS \
	Giant_Source_Giant_MyGameInstance_h_34_INCLASS \
	Giant_Source_Giant_MyGameInstance_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Giant_Source_Giant_MyGameInstance_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_MyGameInstance_h_34_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_MyGameInstance_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Giant_Source_Giant_MyGameInstance_h_34_INCLASS_NO_PURE_DECLS \
	Giant_Source_Giant_MyGameInstance_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Giant_Source_Giant_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
