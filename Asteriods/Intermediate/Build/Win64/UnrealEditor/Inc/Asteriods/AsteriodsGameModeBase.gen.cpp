// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asteriods/AsteriodsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteriodsGameModeBase() {}
// Cross Module References
	ASTERIODS_API UClass* Z_Construct_UClass_AAsteriodsGameModeBase_NoRegister();
	ASTERIODS_API UClass* Z_Construct_UClass_AAsteriodsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Asteriods();
// End Cross Module References
	void AAsteriodsGameModeBase::StaticRegisterNativesAAsteriodsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAsteriodsGameModeBase_NoRegister()
	{
		return AAsteriodsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAsteriodsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsteriodsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Asteriods,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteriodsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "AsteriodsGameModeBase.h" },
		{ "ModuleRelativePath", "AsteriodsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsteriodsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteriodsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsteriodsGameModeBase_Statics::ClassParams = {
		&AAsteriodsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAsteriodsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteriodsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsteriodsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsteriodsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsteriodsGameModeBase, 487140540);
	template<> ASTERIODS_API UClass* StaticClass<AAsteriodsGameModeBase>()
	{
		return AAsteriodsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteriodsGameModeBase(Z_Construct_UClass_AAsteriodsGameModeBase, &AAsteriodsGameModeBase::StaticClass, TEXT("/Script/Asteriods"), TEXT("AAsteriodsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteriodsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
