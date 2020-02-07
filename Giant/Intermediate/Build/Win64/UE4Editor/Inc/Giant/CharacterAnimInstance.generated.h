// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GIANT_CharacterAnimInstance_generated_h
#error "CharacterAnimInstance.generated.h already included, missing '#pragma once' in CharacterAnimInstance.h"
#endif
#define GIANT_CharacterAnimInstance_generated_h

#define Giant_Source_Giant_CharacterAnimInstance_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_NextAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_NextAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_AttackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_AttackStart(); \
		P_NATIVE_END; \
	}


#define Giant_Source_Giant_CharacterAnimInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_NextAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_NextAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_AttackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_AttackStart(); \
		P_NATIVE_END; \
	}


#define Giant_Source_Giant_CharacterAnimInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAnimInstance(); \
	friend GIANT_API class UClass* Z_Construct_UClass_UCharacterAnimInstance(); \
public: \
	DECLARE_CLASS(UCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAnimInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_CharacterAnimInstance_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterAnimInstance(); \
	friend GIANT_API class UClass* Z_Construct_UClass_UCharacterAnimInstance(); \
public: \
	DECLARE_CLASS(UCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Giant"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAnimInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Giant_Source_Giant_CharacterAnimInstance_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAnimInstance(UCharacterAnimInstance&&); \
	NO_API UCharacterAnimInstance(const UCharacterAnimInstance&); \
public:


#define Giant_Source_Giant_CharacterAnimInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAnimInstance(UCharacterAnimInstance&&); \
	NO_API UCharacterAnimInstance(const UCharacterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterAnimInstance)


#define Giant_Source_Giant_CharacterAnimInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPawnSpeed() { return STRUCT_OFFSET(UCharacterAnimInstance, CurrentPawnSpeed); } \
	FORCEINLINE static uint32 __PPO__IsInAir() { return STRUCT_OFFSET(UCharacterAnimInstance, IsInAir); } \
	FORCEINLINE static uint32 __PPO__AttackMontage() { return STRUCT_OFFSET(UCharacterAnimInstance, AttackMontage); }


#define Giant_Source_Giant_CharacterAnimInstance_h_16_PROLOG
#define Giant_Source_Giant_CharacterAnimInstance_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_CharacterAnimInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_CharacterAnimInstance_h_19_RPC_WRAPPERS \
	Giant_Source_Giant_CharacterAnimInstance_h_19_INCLASS \
	Giant_Source_Giant_CharacterAnimInstance_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Giant_Source_Giant_CharacterAnimInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Giant_Source_Giant_CharacterAnimInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	Giant_Source_Giant_CharacterAnimInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Giant_Source_Giant_CharacterAnimInstance_h_19_INCLASS_NO_PURE_DECLS \
	Giant_Source_Giant_CharacterAnimInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Giant_Source_Giant_CharacterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
