// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollossusMechanics/C_LeechBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_LeechBall() {}
// Cross Module References
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_UC_LeechBall_NoRegister();
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_UC_LeechBall();
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_UC_EnemyBallMinimum();
	UPackage* Z_Construct_UPackage__Script_RollossusMechanics();
// End Cross Module References
	void UC_LeechBall::StaticRegisterNativesUC_LeechBall()
	{
	}
	UClass* Z_Construct_UClass_UC_LeechBall_NoRegister()
	{
		return UC_LeechBall::StaticClass();
	}
	struct Z_Construct_UClass_UC_LeechBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_LeechBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UC_EnemyBallMinimum,
		(UObject* (*)())Z_Construct_UPackage__Script_RollossusMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_LeechBall_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "C_LeechBall.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "C_LeechBall.h" },
		{ "ToolTip", "The leech ball behaves very similarly to the basic enemy, except instead of trying to hit the player to deal damage,\n       the leech will hit the player to stick on for an amount of time before dying. The goal of this is to impede the player's\n       movement, making them more exposed to taking damage" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_LeechBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_LeechBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UC_LeechBall_Statics::ClassParams = {
		&UC_LeechBall::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UC_LeechBall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UC_LeechBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_LeechBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UC_LeechBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UC_LeechBall, 435246891);
	template<> ROLLOSSUSMECHANICS_API UClass* StaticClass<UC_LeechBall>()
	{
		return UC_LeechBall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_LeechBall(Z_Construct_UClass_UC_LeechBall, &UC_LeechBall::StaticClass, TEXT("/Script/RollossusMechanics"), TEXT("UC_LeechBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_LeechBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
