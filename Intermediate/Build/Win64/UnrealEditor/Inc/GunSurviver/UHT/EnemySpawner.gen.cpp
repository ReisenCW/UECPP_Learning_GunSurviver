// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunSurviver/Public/EnemySpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
GUNSURVIVER_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
GUNSURVIVER_API UClass* Z_Construct_UClass_AEnemySpawner();
GUNSURVIVER_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_GunSurviver();
// End Cross Module References

// Begin Class AEnemySpawner Function OnEnemyDied
struct Z_Construct_UFunction_AEnemySpawner_OnEnemyDied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawner_OnEnemyDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemySpawner, nullptr, "OnEnemyDied", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_OnEnemyDied_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemySpawner_OnEnemyDied_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemySpawner_OnEnemyDied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemySpawner_OnEnemyDied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemySpawner::execOnEnemyDied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyDied();
	P_NATIVE_END;
}
// End Class AEnemySpawner Function OnEnemyDied

// Begin Class AEnemySpawner Function OnPlayerDied
struct Z_Construct_UFunction_AEnemySpawner_OnPlayerDied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawner_OnPlayerDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemySpawner, nullptr, "OnPlayerDied", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_OnPlayerDied_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemySpawner_OnPlayerDied_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemySpawner_OnPlayerDied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemySpawner_OnPlayerDied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemySpawner::execOnPlayerDied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerDied();
	P_NATIVE_END;
}
// End Class AEnemySpawner Function OnPlayerDied

// Begin Class AEnemySpawner
void AEnemySpawner::StaticRegisterNativesAEnemySpawner()
{
	UClass* Class = AEnemySpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnemyDied", &AEnemySpawner::execOnEnemyDied },
		{ "OnPlayerDied", &AEnemySpawner::execOnPlayerDied },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpawner);
UClass* Z_Construct_UClass_AEnemySpawner_NoRegister()
{
	return AEnemySpawner::StaticClass();
}
struct Z_Construct_UClass_AEnemySpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawner.h" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "EnemySpawner" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTime_MetaData[] = {
		{ "Category", "EnemySpawner" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDistance_MetaData[] = {
		{ "Category", "EnemySpawner" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalEnemyCount_MetaData[] = {
		{ "Category", "EnemySpawner" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifficultySpikeInterval_MetaData[] = {
		{ "Category", "EnemySpawner" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTimeMinimumLimit_MetaData[] = {
		{ "Category", "EnemySpawner" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTimeDecrement_MetaData[] = {
		{ "Category", "EnemySpawner" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalEnemyCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DifficultySpikeInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTimeMinimumLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTimeDecrement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemySpawner_OnEnemyDied, "OnEnemyDied" }, // 849148638
		{ &Z_Construct_UFunction_AEnemySpawner_OnPlayerDied, "OnPlayerDied" }, // 3482864904
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnTime = { "SpawnTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, SpawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTime_MetaData), NewProp_SpawnTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnDistance = { "SpawnDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, SpawnDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnDistance_MetaData), NewProp_SpawnDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_TotalEnemyCount = { "TotalEnemyCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, TotalEnemyCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalEnemyCount_MetaData), NewProp_TotalEnemyCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_DifficultySpikeInterval = { "DifficultySpikeInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, DifficultySpikeInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifficultySpikeInterval_MetaData), NewProp_DifficultySpikeInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnTimeMinimumLimit = { "SpawnTimeMinimumLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, SpawnTimeMinimumLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTimeMinimumLimit_MetaData), NewProp_SpawnTimeMinimumLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnTimeDecrement = { "SpawnTimeDecrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, SpawnTimeDecrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTimeDecrement_MetaData), NewProp_SpawnTimeDecrement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_TotalEnemyCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_DifficultySpikeInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnTimeMinimumLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnTimeDecrement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GunSurviver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawner_Statics::ClassParams = {
	&AEnemySpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemySpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemySpawner()
{
	if (!Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton, Z_Construct_UClass_AEnemySpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton;
}
template<> GUNSURVIVER_API UClass* StaticClass<AEnemySpawner>()
{
	return AEnemySpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawner);
AEnemySpawner::~AEnemySpawner() {}
// End Class AEnemySpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawner, AEnemySpawner::StaticClass, TEXT("AEnemySpawner"), &Z_Registration_Info_UClass_AEnemySpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawner), 1096893214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_4225787567(TEXT("/Script/GunSurviver"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
