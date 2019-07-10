// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollossusMechanics/C_BallMinimum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_BallMinimum() {}
// Cross Module References
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_UC_BallMinimum_NoRegister();
	ROLLOSSUSMECHANICS_API UClass* Z_Construct_UClass_UC_BallMinimum();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_RollossusMechanics();
	ROLLOSSUSMECHANICS_API UFunction* Z_Construct_UFunction_UC_BallMinimum_Death();
// End Cross Module References
	void UC_BallMinimum::StaticRegisterNativesUC_BallMinimum()
	{
		UClass* Class = UC_BallMinimum::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Death", &UC_BallMinimum::execDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UC_BallMinimum_Death_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UC_BallMinimum_Death_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_BallMinimum.h" },
		{ "ToolTip", "Destroys the actor this component is attached to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_BallMinimum_Death_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_BallMinimum, nullptr, "Death", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UC_BallMinimum_Death_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UC_BallMinimum_Death_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UC_BallMinimum_Death()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UC_BallMinimum_Death_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UC_BallMinimum_NoRegister()
	{
		return UC_BallMinimum::StaticClass();
	}
	struct Z_Construct_UClass_UC_BallMinimum_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_BallMinimum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RollossusMechanics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UC_BallMinimum_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UC_BallMinimum_Death, "Death" }, // 3272756414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_BallMinimum_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "C_BallMinimum.h" },
		{ "ModuleRelativePath", "C_BallMinimum.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_BallMinimum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_BallMinimum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UC_BallMinimum_Statics::ClassParams = {
		&UC_BallMinimum::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UC_BallMinimum_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UC_BallMinimum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_BallMinimum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UC_BallMinimum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UC_BallMinimum, 1006752904);
	template<> ROLLOSSUSMECHANICS_API UClass* StaticClass<UC_BallMinimum>()
	{
		return UC_BallMinimum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_BallMinimum(Z_Construct_UClass_UC_BallMinimum, &UC_BallMinimum::StaticClass, TEXT("/Script/RollossusMechanics"), TEXT("UC_BallMinimum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_BallMinimum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
