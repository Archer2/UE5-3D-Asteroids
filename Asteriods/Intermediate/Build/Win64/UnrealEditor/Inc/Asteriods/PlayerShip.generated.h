// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTERIODS_PlayerShip_generated_h
#error "PlayerShip.generated.h already included, missing '#pragma once' in PlayerShip.h"
#endif
#define ASTERIODS_PlayerShip_generated_h

#define Asteriods_Source_Asteriods_PlayerShip_h_12_SPARSE_DATA
#define Asteriods_Source_Asteriods_PlayerShip_h_12_RPC_WRAPPERS
#define Asteriods_Source_Asteriods_PlayerShip_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Asteriods_Source_Asteriods_PlayerShip_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerShip(); \
	friend struct Z_Construct_UClass_APlayerShip_Statics; \
public: \
	DECLARE_CLASS(APlayerShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asteriods"), NO_API) \
	DECLARE_SERIALIZER(APlayerShip)


#define Asteriods_Source_Asteriods_PlayerShip_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerShip(); \
	friend struct Z_Construct_UClass_APlayerShip_Statics; \
public: \
	DECLARE_CLASS(APlayerShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asteriods"), NO_API) \
	DECLARE_SERIALIZER(APlayerShip)


#define Asteriods_Source_Asteriods_PlayerShip_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShip(APlayerShip&&); \
	NO_API APlayerShip(const APlayerShip&); \
public:


#define Asteriods_Source_Asteriods_PlayerShip_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShip(APlayerShip&&); \
	NO_API APlayerShip(const APlayerShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerShip)


#define Asteriods_Source_Asteriods_PlayerShip_h_12_PRIVATE_PROPERTY_OFFSET
#define Asteriods_Source_Asteriods_PlayerShip_h_9_PROLOG
#define Asteriods_Source_Asteriods_PlayerShip_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteriods_Source_Asteriods_PlayerShip_h_12_PRIVATE_PROPERTY_OFFSET \
	Asteriods_Source_Asteriods_PlayerShip_h_12_SPARSE_DATA \
	Asteriods_Source_Asteriods_PlayerShip_h_12_RPC_WRAPPERS \
	Asteriods_Source_Asteriods_PlayerShip_h_12_INCLASS \
	Asteriods_Source_Asteriods_PlayerShip_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteriods_Source_Asteriods_PlayerShip_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteriods_Source_Asteriods_PlayerShip_h_12_PRIVATE_PROPERTY_OFFSET \
	Asteriods_Source_Asteriods_PlayerShip_h_12_SPARSE_DATA \
	Asteriods_Source_Asteriods_PlayerShip_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteriods_Source_Asteriods_PlayerShip_h_12_INCLASS_NO_PURE_DECLS \
	Asteriods_Source_Asteriods_PlayerShip_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTERIODS_API UClass* StaticClass<class APlayerShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteriods_Source_Asteriods_PlayerShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
