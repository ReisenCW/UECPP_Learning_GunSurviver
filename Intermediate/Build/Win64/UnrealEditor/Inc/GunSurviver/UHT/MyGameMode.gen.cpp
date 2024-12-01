// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunSurviver/Public/MyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GUNSURVIVER_API UClass* Z_Construct_UClass_AMyGameMode();
GUNSURVIVER_API UClass* Z_Construct_UClass_AMyGameMode_NoRegister();
GUNSURVIVER_API UFunction* Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GunSurviver();
// End Cross Module References

// Begin Delegate FScoreChangedDelegate
struct Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics
{
	struct _Script_GunSurviver_eventScoreChangedDelegate_Parms
	{
		int32 NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GunSurviver_eventScoreChangedDelegate_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GunSurviver, nullptr, "ScoreChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::_Script_GunSurviver_eventScoreChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::_Script_GunSurviver_eventScoreChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FScoreChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ScoreChangedDelegate, int32 NewScore)
{
	struct _Script_GunSurviver_eventScoreChangedDelegate_Parms
	{
		int32 NewScore;
	};
	_Script_GunSurviver_eventScoreChangedDelegate_Parms Parms;
	Parms.NewScore=NewScore;
	ScoreChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FScoreChangedDelegate

// Begin Class AMyGameMode
void AMyGameMode::StaticRegisterNativesAMyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameMode);
UClass* Z_Construct_UClass_AMyGameMode_NoRegister()
{
	return AMyGameMode::StaticClass();
}
struct Z_Construct_UClass_AMyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameMode.h" },
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "MyGameMode" },
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeforeRestartTime_MetaData[] = {
		{ "Category", "MyGameMode" },
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScoreChangedDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeforeRestartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameMode_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameMode, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyGameMode_Statics::NewProp_ScoreChangedDelegate = { "ScoreChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameMode, ScoreChangedDelegate), Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreChangedDelegate_MetaData), NewProp_ScoreChangedDelegate_MetaData) }; // 4237135573
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameMode_Statics::NewProp_BeforeRestartTime = { "BeforeRestartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameMode, BeforeRestartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeforeRestartTime_MetaData), NewProp_BeforeRestartTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode_Statics::NewProp_ScoreChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode_Statics::NewProp_BeforeRestartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GunSurviver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameMode_Statics::ClassParams = {
	&AMyGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameMode()
{
	if (!Z_Registration_Info_UClass_AMyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameMode.OuterSingleton, Z_Construct_UClass_AMyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameMode.OuterSingleton;
}
template<> GUNSURVIVER_API UClass* StaticClass<AMyGameMode>()
{
	return AMyGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameMode);
AMyGameMode::~AMyGameMode() {}
// End Class AMyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_MyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameMode, AMyGameMode::StaticClass, TEXT("AMyGameMode"), &Z_Registration_Info_UClass_AMyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameMode), 3989809721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_MyGameMode_h_3799424498(TEXT("/Script/GunSurviver"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_MyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_MyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
