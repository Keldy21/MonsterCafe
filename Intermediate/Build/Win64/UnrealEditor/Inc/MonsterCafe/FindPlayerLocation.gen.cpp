// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/FindPlayerLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindPlayerLocation() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_UFindPlayerLocation_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_UFindPlayerLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
// End Cross Module References
	void UFindPlayerLocation::StaticRegisterNativesUFindPlayerLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindPlayerLocation);
	UClass* Z_Construct_UClass_UFindPlayerLocation_NoRegister()
	{
		return UFindPlayerLocation::StaticClass();
	}
	struct Z_Construct_UClass_UFindPlayerLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_search_random_MetaData[];
#endif
		static void NewProp_search_random_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_search_random;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_search_radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_search_radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindPlayerLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FindPlayerLocation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FindPlayerLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random_MetaData[] = {
		{ "AllowProtectedAccess", "true" },
		{ "Category", "Search" },
		{ "ModuleRelativePath", "FindPlayerLocation.h" },
	};
#endif
	void Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random_SetBit(void* Obj)
	{
		((UFindPlayerLocation*)Obj)->search_random = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random = { "search_random", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFindPlayerLocation), &Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_radius_MetaData[] = {
		{ "AllowProtectedAccess", "true" },
		{ "Category", "Search" },
		{ "ModuleRelativePath", "FindPlayerLocation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_radius = { "search_radius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindPlayerLocation, search_radius), METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_radius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindPlayerLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindPlayerLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindPlayerLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindPlayerLocation_Statics::ClassParams = {
		&UFindPlayerLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFindPlayerLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindPlayerLocation()
	{
		if (!Z_Registration_Info_UClass_UFindPlayerLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindPlayerLocation.OuterSingleton, Z_Construct_UClass_UFindPlayerLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFindPlayerLocation.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<UFindPlayerLocation>()
	{
		return UFindPlayerLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindPlayerLocation);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_FindPlayerLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_FindPlayerLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFindPlayerLocation, UFindPlayerLocation::StaticClass, TEXT("UFindPlayerLocation"), &Z_Registration_Info_UClass_UFindPlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindPlayerLocation), 2339613881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_FindPlayerLocation_h_3221249417(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_FindPlayerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_FindPlayerLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
