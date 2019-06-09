// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollossusMechanics/RollossusMechanicsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollossusMechanicsGameModeBase() {}
// Cross Module References
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_ARollossusMechanicsGameModeBase_NoRegister();
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_ARollossusMechanicsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RollossusMechanics();
// End Cross Module References
	void ARollossusMechanicsGameModeBase::StaticRegisterNativesARollossusMechanicsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARollossusMechanicsGameModeBase_NoRegister()
	{
		return ARollossusMechanicsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARollossusMechanicsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARollossusMechanicsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RollossusMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollossusMechanicsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RollossusMechanicsGameModeBase.h" },
		{ "ModuleRelativePath", "RollossusMechanicsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARollossusMechanicsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARollossusMechanicsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARollossusMechanicsGameModeBase_Statics::ClassParams = {
		&ARollossusMechanicsGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ARollossusMechanicsGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARollossusMechanicsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARollossusMechanicsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARollossusMechanicsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARollossusMechanicsGameModeBase, 306818502);
	template<> ROLLOSSUSMECHANICS_API UClass* StaticClass<ARollossusMechanicsGameModeBase>()
	{
		return ARollossusMechanicsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARollossusMechanicsGameModeBase(Z_Construct_UClass_ARollossusMechanicsGameModeBase, &ARollossusMechanicsGameModeBase::StaticClass, TEXT("/Script/RollossusMechanics"), TEXT("ARollossusMechanicsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARollossusMechanicsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
