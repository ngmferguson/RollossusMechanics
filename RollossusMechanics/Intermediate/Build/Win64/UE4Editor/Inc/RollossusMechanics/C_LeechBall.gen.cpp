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
	ROLLOSSUSMECHANICS_API UFunction* Z_Construct_UFunction_UC_LeechBall_RegisterHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UC_LeechBall::StaticRegisterNativesUC_LeechBall()
	{
		UClass* Class = UC_LeechBall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterHit", &UC_LeechBall::execRegisterHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics
	{
		struct C_LeechBall_eventRegisterHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_LeechBall_eventRegisterHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_LeechBall_eventRegisterHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_LeechBall_eventRegisterHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_LeechBall_eventRegisterHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_LeechBall_eventRegisterHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_HitComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_LeechBall.h" },
		{ "ToolTip", "Registers a hit to the object. Will then stick to the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_LeechBall, nullptr, "RegisterHit", sizeof(C_LeechBall_eventRegisterHit_Parms), Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UC_LeechBall_RegisterHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UC_LeechBall_RegisterHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UC_LeechBall_NoRegister()
	{
		return UC_LeechBall::StaticClass();
	}
	struct Z_Construct_UClass_UC_LeechBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UC_LeechBall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UC_LeechBall_RegisterHit, "RegisterHit" }, // 3959412127
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
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UC_LeechBall, 2154262522);
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
