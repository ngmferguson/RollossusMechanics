// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollossusMechanics/C_PlayerBallMinimum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_PlayerBallMinimum() {}
// Cross Module References
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_UC_PlayerBallMinimum_NoRegister();
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_UC_PlayerBallMinimum();
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_UC_BallMinimum();
	UPackage* Z_Construct_UPackage__Script_RollossusMechanics();
// End Cross Module References
	void UC_PlayerBallMinimum::StaticRegisterNativesUC_PlayerBallMinimum()
	{
	}
	UClass* Z_Construct_UClass_UC_PlayerBallMinimum_NoRegister()
	{
		return UC_PlayerBallMinimum::StaticClass();
	}
	struct Z_Construct_UClass_UC_PlayerBallMinimum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_PlayerBallMinimum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UC_BallMinimum,
		(UObject* (*)())Z_Construct_UPackage__Script_RollossusMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerBallMinimum_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "C_PlayerBallMinimum.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "C_PlayerBallMinimum.h" },
		{ "ToolTip", "The playerball version of BallMinimum. This will be possessed by the player and be the thing the player can actually control." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_PlayerBallMinimum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_PlayerBallMinimum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UC_PlayerBallMinimum_Statics::ClassParams = {
		&UC_PlayerBallMinimum::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UC_PlayerBallMinimum_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UC_PlayerBallMinimum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_PlayerBallMinimum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UC_PlayerBallMinimum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UC_PlayerBallMinimum, 1499982297);
	template<> ROLLOSSUSMECHANICS_API UClass* StaticClass<UC_PlayerBallMinimum>()
	{
		return UC_PlayerBallMinimum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_PlayerBallMinimum(Z_Construct_UClass_UC_PlayerBallMinimum, &UC_PlayerBallMinimum::StaticClass, TEXT("/Script/RollossusMechanics"), TEXT("UC_PlayerBallMinimum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_PlayerBallMinimum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
