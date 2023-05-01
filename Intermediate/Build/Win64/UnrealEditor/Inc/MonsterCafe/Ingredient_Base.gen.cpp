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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AIngredient_Base::execPickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup();
		P_NATIVE_END;
	}
	void AIngredient_Base::StaticRegisterNativesAIngredient_Base()
	{
		UClass* Class = AIngredient_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Pickup", &AIngredient_Base::execPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AIngredient_Base_Pickup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIngredient_Base_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Ingredient_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIngredient_Base_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIngredient_Base, nullptr, "Pickup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIngredient_Base_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIngredient_Base_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIngredient_Base_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIngredient_Base_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIngredient_Base);
	UClass* Z_Construct_UClass_AIngredient_Base_NoRegister()
	{
		return AIngredient_Base::StaticClass();
	}
	struct Z_Construct_UClass_AIngredient_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldingComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIngredient_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AIngredient_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIngredient_Base_Pickup, "Pickup" }, // 2756607194
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredient_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ingredient_Base.h" },
		{ "ModuleRelativePath", "Ingredient_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredient_Base_Statics::NewProp_MyMesh_MetaData[] = {
		{ "Category", "Ingredient_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ingredient_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIngredient_Base_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIngredient_Base, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIngredient_Base_Statics::NewProp_MyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredient_Base_Statics::NewProp_MyMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngredient_Base_Statics::NewProp_HoldingComp_MetaData[] = {
		{ "Category", "Ingredient_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ingredient_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIngredient_Base_Statics::NewProp_HoldingComp = { "HoldingComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIngredient_Base, HoldingComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIngredient_Base_Statics::NewProp_HoldingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIngredient_Base_Statics::NewProp_HoldingComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIngredient_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredient_Base_Statics::NewProp_MyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIngredient_Base_Statics::NewProp_HoldingComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIngredient_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIngredient_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIngredient_Base_Statics::ClassParams = {
		&AIngredient_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AIngredient_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AIngredient_Base_Statics::PropPointers),
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
		{ Z_Construct_UClass_AIngredient_Base, AIngredient_Base::StaticClass, TEXT("AIngredient_Base"), &Z_Registration_Info_UClass_AIngredient_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIngredient_Base), 3771725101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Ingredient_Base_h_3999742802(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Ingredient_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_Ingredient_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
