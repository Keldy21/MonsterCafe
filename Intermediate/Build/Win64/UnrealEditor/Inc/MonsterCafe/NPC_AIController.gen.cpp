// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterCafe/NPC_AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_AIController() {}
// Cross Module References
	MONSTERCAFE_API UClass* Z_Construct_UClass_ANPC_AIController_NoRegister();
	MONSTERCAFE_API UClass* Z_Construct_UClass_ANPC_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_MonsterCafe();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANPC_AIController::execon_updated)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_updated_actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->on_updated(Z_Param_Out_updated_actors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPC_AIController::execon_target_detected)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_stimulas);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->on_target_detected(Z_Param_actor,Z_Param_stimulas);
		P_NATIVE_END;
	}
	void ANPC_AIController::StaticRegisterNativesANPC_AIController()
	{
		UClass* Class = ANPC_AIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "on_target_detected", &ANPC_AIController::execon_target_detected },
			{ "on_updated", &ANPC_AIController::execon_updated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics
	{
		struct NPC_AIController_eventon_target_detected_Parms
		{
			AActor* actor;
			FAIStimulus stimulas;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stimulas_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_stimulas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_AIController_eventon_target_detected_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_stimulas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_stimulas = { "stimulas", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_AIController_eventon_target_detected_Parms, stimulas), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_stimulas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_stimulas_MetaData)) }; // 1354403599
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_stimulas,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_AIController, nullptr, "on_target_detected", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NPC_AIController_eventon_target_detected_Parms), Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_AIController_on_target_detected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPC_AIController_on_updated_Statics
	{
		struct NPC_AIController_eventon_updated_Parms
		{
			TArray<AActor*> updated_actors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_updated_actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_updated_actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_updated_actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::NewProp_updated_actors_Inner = { "updated_actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::NewProp_updated_actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::NewProp_updated_actors = { "updated_actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_AIController_eventon_updated_Parms, updated_actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::NewProp_updated_actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::NewProp_updated_actors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::NewProp_updated_actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::NewProp_updated_actors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_AIController, nullptr, "on_updated", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::NPC_AIController_eventon_updated_Parms), Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_AIController_on_updated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_AIController_on_updated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPC_AIController);
	UClass* Z_Construct_UClass_ANPC_AIController_NoRegister()
	{
		return ANPC_AIController::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_behavior_tree_component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_behavior_tree_component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_btree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_btree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterCafe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPC_AIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPC_AIController_on_target_detected, "on_target_detected" }, // 4031088616
		{ &Z_Construct_UFunction_ANPC_AIController_on_updated, "on_updated" }, // 1029685725
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NPC_AIController.h" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::NewProp_behavior_tree_component_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp_behavior_tree_component = { "behavior_tree_component", nullptr, (EPropertyFlags)0x004000000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_AIController, behavior_tree_component), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_behavior_tree_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_behavior_tree_component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::NewProp_btree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp_btree = { "btree", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_AIController, btree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_btree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_btree_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_AIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp_behavior_tree_component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp_btree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_AIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC_AIController_Statics::ClassParams = {
		&ANPC_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPC_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC_AIController()
	{
		if (!Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton, Z_Construct_UClass_ANPC_AIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton;
	}
	template<> MONSTERCAFE_API UClass* StaticClass<ANPC_AIController>()
	{
		return ANPC_AIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_AIController);
	struct Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_NPC_AIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_NPC_AIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPC_AIController, ANPC_AIController::StaticClass, TEXT("ANPC_AIController"), &Z_Registration_Info_UClass_ANPC_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC_AIController), 2295440842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_NPC_AIController_h_201774647(TEXT("/Script/MonsterCafe"),
		Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_NPC_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MonsterCafe_Source_MonsterCafe_NPC_AIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
