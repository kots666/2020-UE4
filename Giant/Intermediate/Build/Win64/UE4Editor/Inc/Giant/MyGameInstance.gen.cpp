// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	GIANT_API UScriptStruct* Z_Construct_UScriptStruct_FMyCharacterData();
	UPackage* Z_Construct_UPackage__Script_Giant();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GIANT_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	GIANT_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FMyCharacterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GIANT_API uint32 Get_Z_Construct_UScriptStruct_FMyCharacterData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyCharacterData, Z_Construct_UPackage__Script_Giant(), TEXT("MyCharacterData"), sizeof(FMyCharacterData), Get_Z_Construct_UScriptStruct_FMyCharacterData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMyCharacterData(FMyCharacterData::StaticStruct, TEXT("/Script/Giant"), TEXT("MyCharacterData"), false, nullptr, nullptr);
static struct FScriptStruct_Giant_StaticRegisterNativesFMyCharacterData
{
	FScriptStruct_Giant_StaticRegisterNativesFMyCharacterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MyCharacterData")),new UScriptStruct::TCppStructOps<FMyCharacterData>);
	}
} ScriptStruct_Giant_StaticRegisterNativesFMyCharacterData;
	UScriptStruct* Z_Construct_UScriptStruct_FMyCharacterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMyCharacterData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Giant();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MyCharacterData"), sizeof(FMyCharacterData), Get_Z_Construct_UScriptStruct_FMyCharacterData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyCharacterData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[] = {
				{ "Category", "Data" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Attack = { UE4CodeGen_Private::EPropertyClass::Float, "Attack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMyCharacterData, Attack), METADATA_PARAMS(NewProp_Attack_MetaData, ARRAY_COUNT(NewProp_Attack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
				{ "Category", "Data" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHP = { UE4CodeGen_Private::EPropertyClass::Float, "MaxHP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMyCharacterData, MaxHP), METADATA_PARAMS(NewProp_MaxHP_MetaData, ARRAY_COUNT(NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
				{ "Category", "Data" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Int, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMyCharacterData, Level), METADATA_PARAMS(NewProp_Level_MetaData, ARRAY_COUNT(NewProp_Level_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Attack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxHP,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Giant,
				Z_Construct_UScriptStruct_FTableRowBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MyCharacterData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMyCharacterData),
				alignof(FMyCharacterData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMyCharacterData_CRC() { return 2181961885U; }
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_Giant,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MyGameInstance.h" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyCharacterTable_MetaData[] = {
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyCharacterTable = { UE4CodeGen_Private::EPropertyClass::Object, "MyCharacterTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMyGameInstance, MyCharacterTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(NewProp_MyCharacterTable_MetaData, ARRAY_COUNT(NewProp_MyCharacterTable_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyCharacterTable,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
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
	IMPLEMENT_CLASS(UMyGameInstance, 1930132727);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGameInstance(Z_Construct_UClass_UMyGameInstance, &UMyGameInstance::StaticClass, TEXT("/Script/Giant"), TEXT("UMyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
