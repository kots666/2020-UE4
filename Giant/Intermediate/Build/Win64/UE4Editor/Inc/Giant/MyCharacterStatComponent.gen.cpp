// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyCharacterStatComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterStatComponent() {}
// Cross Module References
	GIANT_API UClass* Z_Construct_UClass_UMyCharacterStatComponent_NoRegister();
	GIANT_API UClass* Z_Construct_UClass_UMyCharacterStatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Giant();
// End Cross Module References
	void UMyCharacterStatComponent::StaticRegisterNativesUMyCharacterStatComponent()
	{
	}
	UClass* Z_Construct_UClass_UMyCharacterStatComponent_NoRegister()
	{
		return UMyCharacterStatComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyCharacterStatComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Giant,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "MyCharacterStatComponent.h" },
				{ "ModuleRelativePath", "MyCharacterStatComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ATK_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Stat" },
				{ "ModuleRelativePath", "MyCharacterStatComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ATK = { UE4CodeGen_Private::EPropertyClass::Float, "ATK", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000022801, 1, nullptr, STRUCT_OFFSET(UMyCharacterStatComponent, ATK), METADATA_PARAMS(NewProp_ATK_MetaData, ARRAY_COUNT(NewProp_ATK_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Stat" },
				{ "ModuleRelativePath", "MyCharacterStatComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HP = { UE4CodeGen_Private::EPropertyClass::Float, "HP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000022801, 1, nullptr, STRUCT_OFFSET(UMyCharacterStatComponent, HP), METADATA_PARAMS(NewProp_HP_MetaData, ARRAY_COUNT(NewProp_HP_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Stat" },
				{ "ModuleRelativePath", "MyCharacterStatComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Int, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000801, 1, nullptr, STRUCT_OFFSET(UMyCharacterStatComponent, Level), METADATA_PARAMS(NewProp_Level_MetaData, ARRAY_COUNT(NewProp_Level_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ATK,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HP,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyCharacterStatComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyCharacterStatComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UMyCharacterStatComponent, 2102841343);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyCharacterStatComponent(Z_Construct_UClass_UMyCharacterStatComponent, &UMyCharacterStatComponent::StaticClass, TEXT("/Script/Giant"), TEXT("UMyCharacterStatComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCharacterStatComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
