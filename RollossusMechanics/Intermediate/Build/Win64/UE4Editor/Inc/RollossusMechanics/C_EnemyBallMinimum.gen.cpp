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
	ROLLOSSUSMECHANICS_API UFunction* Z_Construct_UFunction_UC_EnemyBallMinimum_GetPathToLocation();
// End Cross Module References
	void UC_EnemyBallMinimum::StaticRegisterNativesUC_EnemyBallMinimum()
	{
		UClass* Class = UC_EnemyBallMinimum::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPathToLocation", &UC_EnemyBallMinimum::execGetPathToLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UC_EnemyBallMinimum_GetPathToLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UC_EnemyBallMinimum_GetPathToLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_EnemyBallMinimum.h" },
		{ "ToolTip", "Sets PathTolocation containing the points needed to locate the path to TargetLocation - often the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_EnemyBallMinimum_GetPathToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_EnemyBallMinimum, nullptr, "GetPathToLocation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UC_EnemyBallMinimum_GetPathToLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UC_EnemyBallMinimum_GetPathToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UC_EnemyBallMinimum_GetPathToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UC_EnemyBallMinimum_GetPathToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UC_EnemyBallMinimum_NoRegister()
	{
		return UC_EnemyBallMinimum::StaticClass();
	}
	struct Z_Construct_UClass_UC_EnemyBallMinimum_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UC_EnemyBallMinimum_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UC_EnemyBallMinimum_GetPathToLocation, "GetPathToLocation" }, // 1488132692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_EnemyBallMinimum_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "C_EnemyBallMinimum.h" },
		{ "IsBlueprintBase", "true" },
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
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UC_EnemyBallMinimum, 920191797);
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
