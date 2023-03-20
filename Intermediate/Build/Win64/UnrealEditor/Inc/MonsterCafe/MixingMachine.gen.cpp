// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/MixingMachine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMixingMachine() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_AMixingMachine_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_AMixingMachine();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
// End Cross Module References
	void AMixingMachine::StaticRegisterNativesAMixingMachine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMixingMachine);
	UClass* Z_Construct_UClass_AMixingMachine_NoRegister()
	{
		return AMixingMachine::StaticClass();
	}
	struct Z_Construct_UClass_AMixingMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMixingMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMixingMachine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MixingMachine.h" },
		{ "ModuleRelativePath", "MixingMachine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMixingMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMixingMachine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMixingMachine_Statics::ClassParams = {
		&AMixingMachine::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMixingMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMixingMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMixingMachine()
	{
		if (!Z_Registration_Info_UClass_AMixingMachine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMixingMachine.OuterSingleton, Z_Construct_UClass_AMixingMachine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMixingMachine.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<AMixingMachine>()
	{
		return AMixingMachine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMixingMachine);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MixingMachine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MixingMachine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMixingMachine, AMixingMachine::StaticClass, TEXT("AMixingMachine"), &Z_Registration_Info_UClass_AMixingMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMixingMachine), 794397323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MixingMachine_h_2605981251(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MixingMachine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MixingMachine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
