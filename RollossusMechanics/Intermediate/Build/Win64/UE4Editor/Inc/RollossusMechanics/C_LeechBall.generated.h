// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ROLLOSSUSMECHANICS_C_LeechBall_generated_h
#error "C_LeechBall.generated.h already included, missing '#pragma once' in C_LeechBall.h"
#endif
#define ROLLOSSUSMECHANICS_C_LeechBall_generated_h

#define RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRegisterHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRegisterHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_LeechBall(); \
	friend struct Z_Construct_UClass_UC_LeechBall_Statics; \
public: \
	DECLARE_CLASS(UC_LeechBall, UC_EnemyBallMinimum, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollossusMechanics"), NO_API) \
	DECLARE_SERIALIZER(UC_LeechBall)


#define RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUC_LeechBall(); \
	friend struct Z_Construct_UClass_UC_LeechBall_Statics; \
public: \
	DECLARE_CLASS(UC_LeechBall, UC_EnemyBallMinimum, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollossusMechanics"), NO_API) \
	DECLARE_SERIALIZER(UC_LeechBall)


#define RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_LeechBall(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_LeechBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_LeechBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_LeechBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_LeechBall(UC_LeechBall&&); \
	NO_API UC_LeechBall(const UC_LeechBall&); \
public:


#define RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_LeechBall() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_LeechBall(UC_LeechBall&&); \
	NO_API UC_LeechBall(const UC_LeechBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_LeechBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_LeechBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UC_LeechBall)


#define RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_PRIVATE_PROPERTY_OFFSET
#define RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_12_PROLOG
#define RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_PRIVATE_PROPERTY_OFFSET \
	RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_RPC_WRAPPERS \
	RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_INCLASS \
	RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_PRIVATE_PROPERTY_OFFSET \
	RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_INCLASS_NO_PURE_DECLS \
	RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROLLOSSUSMECHANICS_API UClass* StaticClass<class UC_LeechBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RollossusMechanics_Source_RollossusMechanics_C_LeechBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
