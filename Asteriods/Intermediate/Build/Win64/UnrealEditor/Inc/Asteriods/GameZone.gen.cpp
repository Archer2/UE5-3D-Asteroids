// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asteriods/GameZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameZone() {}
// Cross Module References
	ASTERIODS_API UClass* Z_Construct_UClass_AGameZone_NoRegister();
	ASTERIODS_API UClass* Z_Construct_UClass_AGameZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Asteriods();
// End Cross Module References
	void AGameZone::StaticRegisterNativesAGameZone()
	{
	}
	UClass* Z_Construct_UClass_AGameZone_NoRegister()
	{
		return AGameZone::StaticClass();
	}
	struct Z_Construct_UClass_AGameZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Asteriods,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameZone.h" },
		{ "ModuleRelativePath", "GameZone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameZone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameZone_Statics::ClassParams = {
		&AGameZone::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGameZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameZone, 2629855804);
	template<> ASTERIODS_API UClass* StaticClass<AGameZone>()
	{
		return AGameZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameZone(Z_Construct_UClass_AGameZone, &AGameZone::StaticClass, TEXT("/Script/Asteriods"), TEXT("AGameZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
