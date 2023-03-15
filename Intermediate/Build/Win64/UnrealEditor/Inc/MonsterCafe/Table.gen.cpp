// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/Table.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTable() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_ATable_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_ATable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
// End Cross Module References
	void ATable::StaticRegisterNativesATable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATable);
	UClass* Z_Construct_UClass_ATable_NoRegister()
	{
		return ATable::StaticClass();
	}
	struct Z_Construct_UClass_ATable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Table.h" },
		{ "ModuleRelativePath", "Table.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATable_Statics::ClassParams = {
		&ATable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATable()
	{
		if (!Z_Registration_Info_UClass_ATable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATable.OuterSingleton, Z_Construct_UClass_ATable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATable.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<ATable>()
	{
		return ATable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATable);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Table_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Table_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATable, ATable::StaticClass, TEXT("ATable"), &Z_Registration_Info_UClass_ATable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATable), 1966168296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Table_h_3886557471(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Table_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Table_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
