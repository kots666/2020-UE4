// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	GIANT_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	GIANT_API UClass* Z_Construct_UClass_AMyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Giant();
	GIANT_API UFunction* Z_Construct_UFunction_AMyCharacter_OnAttackMontageEnded();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GIANT_API UFunction* Z_Construct_UFunction_AMyCharacter_OnAttackOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GIANT_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	GIANT_API UClass* Z_Construct_UClass_UMyCharacterStatComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
		UClass* Class = AMyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackMontageEnded", &AMyCharacter::execOnAttackMontageEnded },
			{ "OnAttackOverlapBegin", &AMyCharacter::execOnAttackOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMyCharacter_OnAttackMontageEnded()
	{
		struct MyCharacter_eventOnAttackMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInterrupted_SetBit = [](void* Obj){ ((MyCharacter_eventOnAttackMontageEnded_Parms*)Obj)->bInterrupted = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted = { UE4CodeGen_Private::EPropertyClass::Bool, "bInterrupted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyCharacter_eventOnAttackMontageEnded_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInterrupted_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnAttackMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInterrupted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Montage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "OnAttackMontageEnded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(MyCharacter_eventOnAttackMontageEnded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyCharacter_OnAttackOverlapBegin()
	{
		struct MyCharacter_eventOnAttackOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnAttackOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_SweepResult_MetaData, ARRAY_COUNT(NewProp_SweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((MyCharacter_eventOnAttackOverlapBegin_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyCharacter_eventOnAttackOverlapBegin_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnAttackOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnAttackOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnAttackOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MyCharacter_eventOnAttackOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, "OnAttackOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00440401, sizeof(MyCharacter_eventOnAttackOverlapBegin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Giant,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMyCharacter_OnAttackMontageEnded, "OnAttackMontageEnded" }, // 655116746
				{ &Z_Construct_UFunction_AMyCharacter_OnAttackOverlapBegin, "OnAttackOverlapBegin" }, // 2496881004
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MyCharacter.h" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAnim_MetaData[] = {
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterAnim = { UE4CodeGen_Private::EPropertyClass::Object, "CharacterAnim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AMyCharacter, CharacterAnim), Z_Construct_UClass_UCharacterAnimInstance_NoRegister, METADATA_PARAMS(NewProp_CharacterAnim_MetaData, ARRAY_COUNT(NewProp_CharacterAnim_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCombo_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCombo = { UE4CodeGen_Private::EPropertyClass::Int, "MaxCombo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030015, 1, nullptr, STRUCT_OFFSET(AMyCharacter, MaxCombo), METADATA_PARAMS(NewProp_MaxCombo_MetaData, ARRAY_COUNT(NewProp_MaxCombo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCombo_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentCombo = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentCombo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030015, 1, nullptr, STRUCT_OFFSET(AMyCharacter, CurrentCombo), METADATA_PARAMS(NewProp_CurrentCombo_MetaData, ARRAY_COUNT(NewProp_CurrentCombo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsComboInputOn_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			auto NewProp_IsComboInputOn_SetBit = [](void* Obj){ ((AMyCharacter*)Obj)->IsComboInputOn = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsComboInputOn = { UE4CodeGen_Private::EPropertyClass::Bool, "IsComboInputOn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsComboInputOn_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsComboInputOn_MetaData, ARRAY_COUNT(NewProp_IsComboInputOn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanNextCombo_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			auto NewProp_CanNextCombo_SetBit = [](void* Obj){ ((AMyCharacter*)Obj)->CanNextCombo = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanNextCombo = { UE4CodeGen_Private::EPropertyClass::Bool, "CanNextCombo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CanNextCombo_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CanNextCombo_MetaData, ARRAY_COUNT(NewProp_CanNextCombo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Attack" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			auto NewProp_IsAttacking_SetBit = [](void* Obj){ ((AMyCharacter*)Obj)->IsAttacking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttacking = { UE4CodeGen_Private::EPropertyClass::Bool, "IsAttacking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsAttacking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsAttacking_MetaData, ARRAY_COUNT(NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AMyCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AMyCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArm_MetaData, ARRAY_COUNT(NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterStat_MetaData[] = {
				{ "Category", "Stat" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterStat = { UE4CodeGen_Private::EPropertyClass::Object, "CharacterStat", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AMyCharacter, CharacterStat), Z_Construct_UClass_UMyCharacterStatComponent_NoRegister, METADATA_PARAMS(NewProp_CharacterStat_MetaData, ARRAY_COUNT(NewProp_CharacterStat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwordCollision_MetaData[] = {
				{ "Category", "Sword" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyCharacter.h" },
				{ "ToolTip", "USkeletalMeshComponent* Sword;" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwordCollision = { UE4CodeGen_Private::EPropertyClass::Object, "SwordCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AMyCharacter, SwordCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_SwordCollision_MetaData, ARRAY_COUNT(NewProp_SwordCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sword_MetaData[] = {
				{ "Category", "Sword" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sword = { UE4CodeGen_Private::EPropertyClass::Object, "Sword", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AMyCharacter, Sword), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Sword_MetaData, ARRAY_COUNT(NewProp_Sword_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterAnim,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCombo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentCombo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsComboInputOn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanNextCombo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsAttacking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArm,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterStat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SwordCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sword,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AMyCharacter, 3388171738);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter(Z_Construct_UClass_AMyCharacter, &AMyCharacter::StaticClass, TEXT("/Script/Giant"), TEXT("AMyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
