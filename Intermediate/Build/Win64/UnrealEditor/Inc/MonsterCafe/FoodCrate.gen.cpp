// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/FoodCrate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodCrate() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_AFoodCrate_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_AFoodCrate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
// End Cross Module References
	void AFoodCrate::StaticRegisterNativesAFoodCrate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFoodCrate);
	UClass* Z_Construct_UClass_AFoodCrate_NoRegister()
	{
		return AFoodCrate::StaticClass();
	}
	struct Z_Construct_UClass_AFoodCrate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoodCrate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodCrate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoodCrate.h" },
		{ "ModuleRelativePath", "FoodCrate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoodCrate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoodCrate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFoodCrate_Statics::ClassParams = {
		&AFoodCrate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFoodCrate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodCrate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFoodCrate()
	{
		if (!Z_Registration_Info_UClass_AFoodCrate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFoodCrate.OuterSingleton, Z_Construct_UClass_AFoodCrate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFoodCrate.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<AFoodCrate>()
	{
		return AFoodCrate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoodCrate);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_FoodCrate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_FoodCrate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFoodCrate, AFoodCrate::StaticClass, TEXT("AFoodCrate"), &Z_Registration_Info_UClass_AFoodCrate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFoodCrate), 61217454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_FoodCrate_h_290155837(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_FoodCrate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_FoodCrate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
