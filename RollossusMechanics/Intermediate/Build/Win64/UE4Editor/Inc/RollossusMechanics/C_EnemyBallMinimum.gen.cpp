// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollossusMechanics/C_EnemyBallMinimum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_EnemyBallMinimum() {}
// Cross Module References
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_UC_EnemyBallMinimum_NoRegister();
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_UC_EnemyBallMinimum();
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_UC_BallMinimum();
	UPackage* Z_Construct_UPackage__Script_RollossusMechanics();
// End Cross Module References
	void UC_EnemyBallMinimum::StaticRegisterNativesUC_EnemyBallMinimum()
	{
	}
	UClass* Z_Construct_UClass_UC_EnemyBallMinimum_NoRegister()
	{
		return UC_EnemyBallMinimum::StaticClass();
	}
	struct Z_Construct_UClass_UC_EnemyBallMinimum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_EnemyBallMinimum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UC_BallMinimum,
		(UObject* (*)())Z_Construct_UPackage__Script_RollossusMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_EnemyBallMinimum_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_EnemyBallMinimum.h" },
		{ "ModuleRelativePath", "C_EnemyBallMinimum.h" },
		{ "ToolTip", "This is the Enemy-Specific class for this. This will contain basic functions such as navigating to the player, and dealing damage on hit.\n       there will be more classes for specific enemies." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_EnemyBallMinimum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_EnemyBallMinimum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UC_EnemyBallMinimum_Statics::ClassParams = {
		&UC_EnemyBallMinimum::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UC_EnemyBallMinimum_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UC_EnemyBallMinimum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_EnemyBallMinimum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UC_EnemyBallMinimum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UC_EnemyBallMinimum, 802382921);
	template<> ROLLOSSUSMECHANICS_API UClass* StaticClass<UC_EnemyBallMinimum>()
	{
		return UC_EnemyBallMinimum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_EnemyBallMinimum(Z_Construct_UClass_UC_EnemyBallMinimum, &UC_EnemyBallMinimum::StaticClass, TEXT("/Script/RollossusMechanics"), TEXT("UC_EnemyBallMinimum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_EnemyBallMinimum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
