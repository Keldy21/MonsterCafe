// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/MonsterCafeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterCafeGameMode() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_AMonsterCafeGameMode_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_AMonsterCafeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
// End Cross Module References
	void AMonsterCafeGameMode::StaticRegisterNativesAMonsterCafeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterCafeGameMode);
	UClass* Z_Construct_UClass_AMonsterCafeGameMode_NoRegister()
	{
		return AMonsterCafeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterCafeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterCafeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCafeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MonsterCafeGameMode.h" },
		{ "ModuleRelativePath", "MonsterCafeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterCafeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterCafeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterCafeGameMode_Statics::ClassParams = {
		&AMonsterCafeGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterCafeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCafeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterCafeGameMode()
	{
		if (!Z_Registration_Info_UClass_AMonsterCafeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterCafeGameMode.OuterSingleton, Z_Construct_UClass_AMonsterCafeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMonsterCafeGameMode.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<AMonsterCafeGameMode>()
	{
		return AMonsterCafeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterCafeGameMode);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MonsterCafeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MonsterCafeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterCafeGameMode, AMonsterCafeGameMode::StaticClass, TEXT("AMonsterCafeGameMode"), &Z_Registration_Info_UClass_AMonsterCafeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterCafeGameMode), 3805852012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MonsterCafeGameMode_h_1659951891(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MonsterCafeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MonsterCafeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
