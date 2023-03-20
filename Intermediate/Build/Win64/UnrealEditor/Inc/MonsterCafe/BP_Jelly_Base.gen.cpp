// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/BP_Jelly_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Jelly_Base() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_ABP_Jelly_Base_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_ABP_Jelly_Base();
	MONSTERCAFE_API UClass* Z_Construct_UClass_AJelly_Base();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
// End Cross Module References
	void ABP_Jelly_Base::StaticRegisterNativesABP_Jelly_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_Jelly_Base);
	UClass* Z_Construct_UClass_ABP_Jelly_Base_NoRegister()
	{
		return ABP_Jelly_Base::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Jelly_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Jelly_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AJelly_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Jelly_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BP_Jelly_Base.h" },
		{ "ModuleRelativePath", "BP_Jelly_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Jelly_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Jelly_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_Jelly_Base_Statics::ClassParams = {
		&ABP_Jelly_Base::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABP_Jelly_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Jelly_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Jelly_Base()
	{
		if (!Z_Registration_Info_UClass_ABP_Jelly_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_Jelly_Base.OuterSingleton, Z_Construct_UClass_ABP_Jelly_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABP_Jelly_Base.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<ABP_Jelly_Base>()
	{
		return ABP_Jelly_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Jelly_Base);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_BP_Jelly_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_BP_Jelly_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABP_Jelly_Base, ABP_Jelly_Base::StaticClass, TEXT("ABP_Jelly_Base"), &Z_Registration_Info_UClass_ABP_Jelly_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_Jelly_Base), 2931977010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_BP_Jelly_Base_h_3113454635(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_BP_Jelly_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_BP_Jelly_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
