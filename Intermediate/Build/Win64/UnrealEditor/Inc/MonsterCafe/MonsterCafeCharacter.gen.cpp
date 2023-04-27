// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/MonsterCafeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterCafeCharacter() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_AMonsterCafeCharacter_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_AMonsterCafeCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_AIngredient_Base_NoRegister();
// End Cross Module References
	void AMonsterCafeCharacter::StaticRegisterNativesAMonsterCafeCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterCafeCharacter);
	UClass* Z_Construct_UClass_AMonsterCafeCharacter_NoRegister()
	{
		return AMonsterCafeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterCafeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterCafeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCafeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MonsterCafeCharacter.h" },
		{ "ModuleRelativePath", "MonsterCafeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MonsterCafeCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCafeCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MonsterCafeCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCafeCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "MonsterCafeCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCafeCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_HoldingComponent_MetaData[] = {
		{ "Category", "MonsterCafeCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MonsterCafeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_HoldingComponent = { "HoldingComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCafeCharacter, HoldingComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_HoldingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_HoldingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_CurrentItem_MetaData[] = {
		{ "Category", "MonsterCafeCharacter" },
		{ "ModuleRelativePath", "MonsterCafeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_CurrentItem = { "CurrentItem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCafeCharacter, CurrentItem), Z_Construct_UClass_AIngredient_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_CurrentItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_CurrentItem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterCafeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_HoldingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCafeCharacter_Statics::NewProp_CurrentItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterCafeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterCafeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterCafeCharacter_Statics::ClassParams = {
		&AMonsterCafeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMonsterCafeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCafeCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterCafeCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCafeCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterCafeCharacter()
	{
		if (!Z_Registration_Info_UClass_AMonsterCafeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterCafeCharacter.OuterSingleton, Z_Construct_UClass_AMonsterCafeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMonsterCafeCharacter.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<AMonsterCafeCharacter>()
	{
		return AMonsterCafeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterCafeCharacter);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MonsterCafeCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MonsterCafeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterCafeCharacter, AMonsterCafeCharacter::StaticClass, TEXT("AMonsterCafeCharacter"), &Z_Registration_Info_UClass_AMonsterCafeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterCafeCharacter), 878764384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MonsterCafeCharacter_h_2079237592(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MonsterCafeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_MonsterCafeCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
