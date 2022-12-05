// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EthoobMultiplayerSessions/Public/MultiplayerSessionsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSessionsSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ETHOOBMULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem();
	ETHOOBMULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EthoobMultiplayerSessions();
// End Cross Module References
	void UMultiplayerSessionsSubsystem::StaticRegisterNativesUMultiplayerSessionsSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiplayerSessionsSubsystem);
	UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister()
	{
		return UMultiplayerSessionsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EthoobMultiplayerSessions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MultiplayerSessionsSubsystem.h" },
		{ "ModuleRelativePath", "Public/MultiplayerSessionsSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayerSessionsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::ClassParams = {
		&UMultiplayerSessionsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton, Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton;
	}
	template<> ETHOOBMULTIPLAYERSESSIONS_API UClass* StaticClass<UMultiplayerSessionsSubsystem>()
	{
		return UMultiplayerSessionsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayerSessionsSubsystem);
	UMultiplayerSessionsSubsystem::~UMultiplayerSessionsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Games__Projects__UE5_Udemy_MultiplayerCourse_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games__Projects__UE5_Udemy_MultiplayerCourse_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayerSessionsSubsystem, UMultiplayerSessionsSubsystem::StaticClass, TEXT("UMultiplayerSessionsSubsystem"), &Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayerSessionsSubsystem), 4000264121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games__Projects__UE5_Udemy_MultiplayerCourse_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_2991716494(TEXT("/Script/EthoobMultiplayerSessions"),
		Z_CompiledInDeferFile_FID_Games__Projects__UE5_Udemy_MultiplayerCourse_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games__Projects__UE5_Udemy_MultiplayerCourse_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
