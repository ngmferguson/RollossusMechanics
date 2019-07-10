// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROLLOSSUSMECHANICS_C_BallMinimum_generated_h
#error "C_BallMinimum.generated.h already included, missing '#pragma once' in C_BallMinimum.h"
#endif
#define ROLLOSSUSMECHANICS_C_BallMinimum_generated_h

#define RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Death(); \
		P_NATIVE_END; \
	}


#define RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Death(); \
		P_NATIVE_END; \
	}


#define RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_BallMinimum(); \
	friend struct Z_Construct_UClass_UC_BallMinimum_Statics; \
public: \
	DECLARE_CLASS(UC_BallMinimum, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollossusMechanics"), NO_API) \
	DECLARE_SERIALIZER(UC_BallMinimum)


#define RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUC_BallMinimum(); \
	friend struct Z_Construct_UClass_UC_BallMinimum_Statics; \
public: \
	DECLARE_CLASS(UC_BallMinimum, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollossusMechanics"), NO_API) \
	DECLARE_SERIALIZER(UC_BallMinimum)


#define RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_BallMinimum(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_BallMinimum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_BallMinimum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_BallMinimum); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_BallMinimum(UC_BallMinimum&&); \
	NO_API UC_BallMinimum(const UC_BallMinimum&); \
public:


#define RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_BallMinimum(UC_BallMinimum&&); \
	NO_API UC_BallMinimum(const UC_BallMinimum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_BallMinimum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_BallMinimum); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UC_BallMinimum)


#define RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_PRIVATE_PROPERTY_OFFSET
#define RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_9_PROLOG
#define RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_PRIVATE_PROPERTY_OFFSET \
	RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_RPC_WRAPPERS \
	RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_INCLASS \
	RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_PRIVATE_PROPERTY_OFFSET \
	RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_INCLASS_NO_PURE_DECLS \
	RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROLLOSSUSMECHANICS_API UClass* StaticClass<class UC_BallMinimum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RollossusMechanics_Source_RollossusMechanics_C_BallMinimum_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
