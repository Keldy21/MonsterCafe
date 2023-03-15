// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONSTERCAFE_Table_generated_h
#error "Table.generated.h already included, missing '#pragma once' in Table.h"
#endif
#define MONSTERCAFE_Table_generated_h

#define FID_MonsterCafe_Source_MonsterCafe_Table_h_12_SPARSE_DATA
#define FID_MonsterCafe_Source_MonsterCafe_Table_h_12_RPC_WRAPPERS
#define FID_MonsterCafe_Source_MonsterCafe_Table_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MonsterCafe_Source_MonsterCafe_Table_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATable(); \
	friend struct Z_Construct_UClass_ATable_Statics; \
public: \
	DECLARE_CLASS(ATable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonsterCafe"), NO_API) \
	DECLARE_SERIALIZER(ATable)


#define FID_MonsterCafe_Source_MonsterCafe_Table_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATable(); \
	friend struct Z_Construct_UClass_ATable_Statics; \
public: \
	DECLARE_CLASS(ATable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonsterCafe"), NO_API) \
	DECLARE_SERIALIZER(ATable)


#define FID_MonsterCafe_Source_MonsterCafe_Table_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATable(ATable&&); \
	NO_API ATable(const ATable&); \
public:


#define FID_MonsterCafe_Source_MonsterCafe_Table_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATable(ATable&&); \
	NO_API ATable(const ATable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATable)


#define FID_MonsterCafe_Source_MonsterCafe_Table_h_9_PROLOG
#define FID_MonsterCafe_Source_MonsterCafe_Table_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MonsterCafe_Source_MonsterCafe_Table_h_12_SPARSE_DATA \
	FID_MonsterCafe_Source_MonsterCafe_Table_h_12_RPC_WRAPPERS \
	FID_MonsterCafe_Source_MonsterCafe_Table_h_12_INCLASS \
	FID_MonsterCafe_Source_MonsterCafe_Table_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MonsterCafe_Source_MonsterCafe_Table_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MonsterCafe_Source_MonsterCafe_Table_h_12_SPARSE_DATA \
	FID_MonsterCafe_Source_MonsterCafe_Table_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MonsterCafe_Source_MonsterCafe_Table_h_12_INCLASS_NO_PURE_DECLS \
	FID_MonsterCafe_Source_MonsterCafe_Table_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTERCAFE_API UClass* StaticClass<class ATable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MonsterCafe_Source_MonsterCafe_Table_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
