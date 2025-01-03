// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunSurviver/Public/Bullet.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullet() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GUNSURVIVER_API UClass* Z_Construct_UClass_ABullet();
GUNSURVIVER_API UClass* Z_Construct_UClass_ABullet_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GunSurviver();
// End Cross Module References

// Begin Class ABullet Function OverlapBegin
struct Z_Construct_UFunction_ABullet_OverlapBegin_Statics
{
	struct Bullet_eventOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Bullet_eventOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Bullet_eventOverlapBegin_Parms), &Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullet_OverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullet_OverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullet, nullptr, "OverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ABullet_OverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABullet_OverlapBegin_Statics::Bullet_eventOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullet_OverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABullet_OverlapBegin_Statics::Bullet_eventOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullet_OverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullet_OverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullet::execOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ABullet Function OverlapBegin

// Begin Class ABullet
void ABullet::StaticRegisterNativesABullet()
{
	UClass* Class = ABullet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OverlapBegin", &ABullet::execOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABullet);
UClass* Z_Construct_UClass_ABullet_NoRegister()
{
	return ABullet::StaticClass();
}
struct Z_Construct_UClass_ABullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bullet.h" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
		{ "Category", "Bullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletSprite_MetaData[] = {
		{ "Category", "Bullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLaunched_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDisabled_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeleteTime_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletSprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static void NewProp_IsLaunched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLaunched;
	static void NewProp_IsDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDisabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeleteTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABullet_OverlapBegin, "OverlapBegin" }, // 1897032630
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComp_MetaData), NewProp_SphereComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_BulletSprite = { "BulletSprite", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, BulletSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletSprite_MetaData), NewProp_BulletSprite_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, MovementDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementDirection_MetaData), NewProp_MovementDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
void Z_Construct_UClass_ABullet_Statics::NewProp_IsLaunched_SetBit(void* Obj)
{
	((ABullet*)Obj)->IsLaunched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_IsLaunched = { "IsLaunched", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABullet), &Z_Construct_UClass_ABullet_Statics::NewProp_IsLaunched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLaunched_MetaData), NewProp_IsLaunched_MetaData) };
void Z_Construct_UClass_ABullet_Statics::NewProp_IsDisabled_SetBit(void* Obj)
{
	((ABullet*)Obj)->IsDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_IsDisabled = { "IsDisabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABullet), &Z_Construct_UClass_ABullet_Statics::NewProp_IsDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDisabled_MetaData), NewProp_IsDisabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_DeleteTime = { "DeleteTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, DeleteTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeleteTime_MetaData), NewProp_DeleteTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_SphereComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_BulletSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_MovementDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_IsLaunched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_IsDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_DeleteTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GunSurviver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABullet_Statics::ClassParams = {
	&ABullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABullet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams), Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABullet()
{
	if (!Z_Registration_Info_UClass_ABullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABullet.OuterSingleton, Z_Construct_UClass_ABullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABullet.OuterSingleton;
}
template<> GUNSURVIVER_API UClass* StaticClass<ABullet>()
{
	return ABullet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABullet);
ABullet::~ABullet() {}
// End Class ABullet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABullet, ABullet::StaticClass, TEXT("ABullet"), &Z_Registration_Info_UClass_ABullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABullet), 3799595659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_2687669510(TEXT("/Script/GunSurviver"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
