// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/MixingMachineBowl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMixingMachineBowl() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_AMixingMachineBowl_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_AMixingMachineBowl();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
// End Cross Module References
	void AMixingMachineBowl::StaticRegisterNativesAMixingMachineBowl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMixingMachineBowl);
	UClass* Z_Construct_UClass_AMixingMachineBowl_NoRegister()
	{
		return AMixingMachineBowl::StaticClass();
	}
	struct Z_Construct_UClass_AMixingMachineBowl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMixingMachineBowl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMixingMachineBowl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MixingMachineBowl.h" },
		{ "ModuleRelativePath", "MixingMachineBowl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMixingMachineBowl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMixingMachineBowl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMixingMachineBowl_Statics::ClassParams = {
		&AMixingMachineBowl::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMixingMachineBowl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMixingMachineBowl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMixingMachineBowl()
	{
		if (!Z_Registration_Info_UClass_AMixingMachineBowl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMixingMachineBowl.OuterSingleton, Z_Construct_UClass_AMixingMachineBowl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMixingMachineBowl.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<AMixingMachineBowl>()
	{
		return AMixingMachineBowl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMixingMachineBowl);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MixingMachineBowl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MixingMachineBowl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMixingMachineBowl, AMixingMachineBowl::StaticClass, TEXT("AMixingMachineBowl"), &Z_Registration_Info_UClass_AMixingMachineBowl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMixingMachineBowl), 1296020941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MixingMachineBowl_h_2714285403(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MixingMachineBowl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MixingMachineBowl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
