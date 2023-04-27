// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_ANPC_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_ANPC();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
// End Cross Module References
	void ANPC::StaticRegisterNativesANPC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPC);
	UClass* Z_Construct_UClass_ANPC_NoRegister()
	{
		return ANPC::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC.h" },
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC_Statics::ClassParams = {
		&ANPC::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC()
	{
		if (!Z_Registration_Info_UClass_ANPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC.OuterSingleton, Z_Construct_UClass_ANPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPC.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<ANPC>()
	{
		return ANPC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_NPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_NPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPC, ANPC::StaticClass, TEXT("ANPC"), &Z_Registration_Info_UClass_ANPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC), 3002986206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_NPC_h_3045961204(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_NPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
