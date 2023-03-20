// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/Jelly_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJelly_Base() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_AJelly_Base_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_AJelly_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
// End Cross Module References
	void AJelly_Base::StaticRegisterNativesAJelly_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJelly_Base);
	UClass* Z_Construct_UClass_AJelly_Base_NoRegister()
	{
		return AJelly_Base::StaticClass();
	}
	struct Z_Construct_UClass_AJelly_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJelly_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJelly_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Jelly_Base.h" },
		{ "ModuleRelativePath", "Jelly_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJelly_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJelly_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJelly_Base_Statics::ClassParams = {
		&AJelly_Base::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AJelly_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJelly_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJelly_Base()
	{
		if (!Z_Registration_Info_UClass_AJelly_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJelly_Base.OuterSingleton, Z_Construct_UClass_AJelly_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJelly_Base.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<AJelly_Base>()
	{
		return AJelly_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJelly_Base);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Jelly_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Jelly_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJelly_Base, AJelly_Base::StaticClass, TEXT("AJelly_Base"), &Z_Registration_Info_UClass_AJelly_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJelly_Base), 3491626552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Jelly_Base_h_2059126058(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Jelly_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Jelly_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
