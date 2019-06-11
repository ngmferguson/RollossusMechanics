// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROLLOSSUSMECHANICS_C_EnemyBallMinimum_generated_h
#error "C_EnemyBallMinimum.generated.h already included, missing '#pragma once' in C_EnemyBallMinimum.h"
#endif
#define ROLLOSSUSMECHANICS_C_EnemyBallMinimum_generated_h

#define RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPathToLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPathToLocation(); \
		P_NATIVE_END; \
	}


#define RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPathToLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPathToLocation(); \
		P_NATIVE_END; \
	}


#define RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_EnemyBallMinimum(); \
	friend struct Z_Construct_UClass_UC_EnemyBallMinimum_Statics; \
public: \
	DECLARE_CLASS(UC_EnemyBallMinimum, UC_BallMinimum, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollossusMechanics"), NO_API) \
	DECLARE_SERIALIZER(UC_EnemyBallMinimum)


#define RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUC_EnemyBallMinimum(); \
	friend struct Z_Construct_UClass_UC_EnemyBallMinimum_Statics; \
public: \
	DECLARE_CLASS(UC_EnemyBallMinimum, UC_BallMinimum, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollossusMechanics"), NO_API) \
	DECLARE_SERIALIZER(UC_EnemyBallMinimum)


#define RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_EnemyBallMinimum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_EnemyBallMinimum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_EnemyBallMinimum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_EnemyBallMinimum); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_EnemyBallMinimum(UC_EnemyBallMinimum&&); \
	NO_API UC_EnemyBallMinimum(const UC_EnemyBallMinimum&); \
public:


#define RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_EnemyBallMinimum() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_EnemyBallMinimum(UC_EnemyBallMinimum&&); \
	NO_API UC_EnemyBallMinimum(const UC_EnemyBallMinimum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_EnemyBallMinimum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_EnemyBallMinimum); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UC_EnemyBallMinimum)


#define RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_PRIVATE_PROPERTY_OFFSET
#define RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_21_PROLOG
#define RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_PRIVATE_PROPERTY_OFFSET \
	RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_RPC_WRAPPERS \
	RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_INCLASS \
	RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_PRIVATE_PROPERTY_OFFSET \
	RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_INCLASS_NO_PURE_DECLS \
	RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROLLOSSUSMECHANICS_API UClass* StaticClass<class UC_EnemyBallMinimum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RollossusMechanics_Source_RollossusMechanics_C_EnemyBallMinimum_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
