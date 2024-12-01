// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunSurviver_init() {}
	GUNSURVIVER_API UFunction* Z_Construct_UDelegateFunction_GunSurviver_EnemyDeathDelegate__DelegateSignature();
	GUNSURVIVER_API UFunction* Z_Construct_UDelegateFunction_GunSurviver_PlayerDiedDelegate__DelegateSignature();
	GUNSURVIVER_API UFunction* Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GunSurviver;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GunSurviver()
	{
		if (!Z_Registration_Info_UPackage__Script_GunSurviver.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GunSurviver_EnemyDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GunSurviver_PlayerDiedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GunSurviver_ScoreChangedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GunSurviver",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1E77BD0B,
				0xE21C675D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GunSurviver.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GunSurviver.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GunSurviver(Z_Construct_UPackage__Script_GunSurviver, TEXT("/Script/GunSurviver"), Z_Registration_Info_UPackage__Script_GunSurviver, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1E77BD0B, 0xE21C675D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
