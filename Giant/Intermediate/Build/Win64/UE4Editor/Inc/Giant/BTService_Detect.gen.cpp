// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BTService_Detect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Detect() {}
// Cross Module References
	GIANT_API UClass* Z_Construct_UClass_UBTService_Detect_NoRegister();
	GIANT_API UClass* Z_Construct_UClass_UBTService_Detect();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Giant();
// End Cross Module References
	void UBTService_Detect::StaticRegisterNativesUBTService_Detect()
	{
	}
	UClass* Z_Construct_UClass_UBTService_Detect_NoRegister()
	{
		return UBTService_Detect::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTService_Detect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTService,
				(UObject* (*)())Z_Construct_UPackage__Script_Giant,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BTService_Detect.h" },
				{ "ModuleRelativePath", "BTService_Detect.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTService_Detect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTService_Detect::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_Detect, 1140050180);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_Detect(Z_Construct_UClass_UBTService_Detect, &UBTService_Detect::StaticClass, TEXT("/Script/Giant"), TEXT("UBTService_Detect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Detect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif