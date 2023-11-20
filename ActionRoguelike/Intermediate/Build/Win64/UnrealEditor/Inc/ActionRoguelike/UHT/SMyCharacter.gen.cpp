// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/Public/SMyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMyCharacter() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASMyCharacter();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASMyCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
// End Cross Module References
	void ASMyCharacter::StaticRegisterNativesASMyCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMyCharacter);
	UClass* Z_Construct_UClass_ASMyCharacter_NoRegister()
	{
		return ASMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASMyCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SMyCharacter.h" },
		{ "ModuleRelativePath", "Public/SMyCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMyCharacter_Statics::ClassParams = {
		&ASMyCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASMyCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASMyCharacter()
	{
		if (!Z_Registration_Info_UClass_ASMyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMyCharacter.OuterSingleton, Z_Construct_UClass_ASMyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASMyCharacter.OuterSingleton;
	}
	template<> ACTIONROGUELIKE_API UClass* StaticClass<ASMyCharacter>()
	{
		return ASMyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMyCharacter);
	ASMyCharacter::~ASMyCharacter() {}
	struct Z_CompiledInDeferFile_FID_ActionRoguelike_Source_ActionRoguelike_Public_SMyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRoguelike_Source_ActionRoguelike_Public_SMyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASMyCharacter, ASMyCharacter::StaticClass, TEXT("ASMyCharacter"), &Z_Registration_Info_UClass_ASMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMyCharacter), 1770109684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRoguelike_Source_ActionRoguelike_Public_SMyCharacter_h_331808105(TEXT("/Script/ActionRoguelike"),
		Z_CompiledInDeferFile_FID_ActionRoguelike_Source_ActionRoguelike_Public_SMyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRoguelike_Source_ActionRoguelike_Public_SMyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
