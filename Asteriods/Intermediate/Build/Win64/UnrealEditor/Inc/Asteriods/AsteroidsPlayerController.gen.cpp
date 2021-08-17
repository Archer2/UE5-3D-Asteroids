// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asteriods/AsteroidsPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroidsPlayerController() {}
// Cross Module References
	ASTERIODS_API UClass* Z_Construct_UClass_AAsteroidsPlayerController_NoRegister();
	ASTERIODS_API UClass* Z_Construct_UClass_AAsteroidsPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Asteriods();
// End Cross Module References
	void AAsteroidsPlayerController::StaticRegisterNativesAAsteroidsPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AAsteroidsPlayerController_NoRegister()
	{
		return AAsteroidsPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAsteroidsPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsteroidsPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Asteriods,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroidsPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AsteroidsPlayerController.h" },
		{ "ModuleRelativePath", "AsteroidsPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsteroidsPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroidsPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsteroidsPlayerController_Statics::ClassParams = {
		&AAsteroidsPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAsteroidsPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidsPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsteroidsPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsteroidsPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsteroidsPlayerController, 3036801430);
	template<> ASTERIODS_API UClass* StaticClass<AAsteroidsPlayerController>()
	{
		return AAsteroidsPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroidsPlayerController(Z_Construct_UClass_AAsteroidsPlayerController, &AAsteroidsPlayerController::StaticClass, TEXT("/Script/Asteriods"), TEXT("AAsteroidsPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroidsPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
