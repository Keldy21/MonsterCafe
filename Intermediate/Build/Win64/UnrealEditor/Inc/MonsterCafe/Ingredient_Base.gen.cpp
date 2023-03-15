// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/Ingredient_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIngredient_Base() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_AIngredient_Base_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_AIngredient_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
// End Cross Module References
	void AIngredient_Base::StaticRegisterNativesAIngredient_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIngredient_Base);
	UClass* Z_Construct_UClass_AIngredient_Base_NoRegister()
	{
		return AIngredient_Base::StaticClass();
	}
	struct Z_Construct_UClass_AIngredient_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIngredient_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredient_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ingredient_Base.h" },
		{ "ModuleRelativePath", "Ingredient_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIngredient_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIngredient_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIngredient_Base_Statics::ClassParams = {
		&AIngredient_Base::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AIngredient_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredient_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIngredient_Base()
	{
		if (!Z_Registration_Info_UClass_AIngredient_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIngredient_Base.OuterSingleton, Z_Construct_UClass_AIngredient_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIngredient_Base.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<AIngredient_Base>()
	{
		return AIngredient_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIngredient_Base);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Ingredient_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Ingredient_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIngredient_Base, AIngredient_Base::StaticClass, TEXT("AIngredient_Base"), &Z_Registration_Info_UClass_AIngredient_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIngredient_Base), 1933368132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Ingredient_Base_h_1163494764(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Ingredient_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Ingredient_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
