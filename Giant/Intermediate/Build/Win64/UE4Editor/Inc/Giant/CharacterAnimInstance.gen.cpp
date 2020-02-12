// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CharacterAnimInstance.h"
#include "Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnimInstance() {}
// Cross Module References
	GIANT_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();
	GIANT_API UClass* Z_Construct_UClass_UCharacterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Giant();
	GIANT_API UFunction* Z_Construct_UFunction_UCharacterAnimInstance_AnimNotify_AttackEnd();
	GIANT_API UFunction* Z_Construct_UFunction_UCharacterAnimInstance_AnimNotify_AttackStart();
	GIANT_API UFunction* Z_Construct_UFunction_UCharacterAnimInstance_AnimNotify_NextAttack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UCharacterAnimInstance::StaticRegisterNativesUCharacterAnimInstance()
	{
		UClass* Class = UCharacterAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_AttackEnd", &UCharacterAnimInstance::execAnimNotify_AttackEnd },
			{ "AnimNotify_AttackStart", &UCharacterAnimInstance::execAnimNotify_AttackStart },
			{ "AnimNotify_NextAttack", &UCharacterAnimInstance::execAnimNotify_NextAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCharacterAnimInstance_AnimNotify_AttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "CharacterAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimInstance, "AnimNotify_AttackEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCharacterAnimInstance_AnimNotify_AttackStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "CharacterAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimInstance, "AnimNotify_AttackStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCharacterAnimInstance_AnimNotify_NextAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "CharacterAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimInstance, "AnimNotify_NextAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister()
	{
		return UCharacterAnimInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UCharacterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_Giant,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCharacterAnimInstance_AnimNotify_AttackEnd, "AnimNotify_AttackEnd" }, // 2890495166
				{ &Z_Construct_UFunction_UCharacterAnimInstance_AnimNotify_AttackStart, "AnimNotify_AttackStart" }, // 877000024
				{ &Z_Construct_UFunction_UCharacterAnimInstance_AnimNotify_NextAttack, "AnimNotify_NextAttack" }, // 3978572348
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "AnimInstance" },
				{ "IncludePath", "CharacterAnimInstance.h" },
				{ "ModuleRelativePath", "CharacterAnimInstance.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "CharacterAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackMontage = { UE4CodeGen_Private::EPropertyClass::Object, "AttackMontage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030015, 1, nullptr, STRUCT_OFFSET(UCharacterAnimInstance, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_AttackMontage_MetaData, ARRAY_COUNT(NewProp_AttackMontage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "CharacterAnimInstance.h" },
			};
#endif
			auto NewProp_IsDead_SetBit = [](void* Obj){ ((UCharacterAnimInstance*)Obj)->IsDead = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDead = { UE4CodeGen_Private::EPropertyClass::Bool, "IsDead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCharacterAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsDead_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsDead_MetaData, ARRAY_COUNT(NewProp_IsDead_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInAir_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "CharacterAnimInstance.h" },
			};
#endif
			auto NewProp_IsInAir_SetBit = [](void* Obj){ ((UCharacterAnimInstance*)Obj)->IsInAir = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInAir = { UE4CodeGen_Private::EPropertyClass::Bool, "IsInAir", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCharacterAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsInAir_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsInAir_MetaData, ARRAY_COUNT(NewProp_IsInAir_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPawnSpeed_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "CharacterAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPawnSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentPawnSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000015, 1, nullptr, STRUCT_OFFSET(UCharacterAnimInstance, CurrentPawnSpeed), METADATA_PARAMS(NewProp_CurrentPawnSpeed_MetaData, ARRAY_COUNT(NewProp_CurrentPawnSpeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackMontage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsDead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsInAir,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentPawnSpeed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCharacterAnimInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCharacterAnimInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterAnimInstance, 291043560);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterAnimInstance(Z_Construct_UClass_UCharacterAnimInstance, &UCharacterAnimInstance::StaticClass, TEXT("/Script/Giant"), TEXT("UCharacterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
