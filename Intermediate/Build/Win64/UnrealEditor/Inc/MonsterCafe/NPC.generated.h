// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONSTERCAFE_NPC_generated_h
#error "NPC.generated.h already included, missing '#pragma once' in NPC.h"
#endif
#define MONSTERCAFE_NPC_generated_h

#define FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_SPARSE_DATA
#define FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_RPC_WRAPPERS
#define FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonsterCafe"), NO_API) \
	DECLARE_SERIALIZER(ANPC)


#define FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonsterCafe"), NO_API) \
	DECLARE_SERIALIZER(ANPC)


#define FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public:


#define FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC)


#define FID_MonsterCafe_Source_MonsterCafe_NPC_h_9_PROLOG
#define FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_SPARSE_DATA \
	FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_RPC_WRAPPERS \
	FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_INCLASS \
	FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_SPARSE_DATA \
	FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_INCLASS_NO_PURE_DECLS \
	FID_MonsterCafe_Source_MonsterCafe_NPC_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTERCAFE_API UClass* StaticClass<class ANPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MonsterCafe_Source_MonsterCafe_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
