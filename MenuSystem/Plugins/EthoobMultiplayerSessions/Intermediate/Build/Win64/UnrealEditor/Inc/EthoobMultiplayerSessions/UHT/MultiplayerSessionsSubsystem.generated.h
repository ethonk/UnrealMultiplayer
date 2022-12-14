// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerSessionsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ETHOOBMULTIPLAYERSESSIONS_MultiplayerSessionsSubsystem_generated_h
#error "MultiplayerSessionsSubsystem.generated.h already included, missing '#pragma once' in MultiplayerSessionsSubsystem.h"
#endif
#define ETHOOBMULTIPLAYERSESSIONS_MultiplayerSessionsSubsystem_generated_h

#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_15_DELEGATE \
struct _Script_EthoobMultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FMultiplayerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnCreateSessionComplete, bool bWasSuccessful) \
{ \
	_Script_EthoobMultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	MultiplayerOnCreateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_SPARSE_DATA
#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_RPC_WRAPPERS
#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_ACCESSORS
#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionsSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EthoobMultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionsSubsystem)


#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionsSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EthoobMultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionsSubsystem)


#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiplayerSessionsSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiplayerSessionsSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionsSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionsSubsystem(UMultiplayerSessionsSubsystem&&); \
	NO_API UMultiplayerSessionsSubsystem(const UMultiplayerSessionsSubsystem&); \
public: \
	NO_API virtual ~UMultiplayerSessionsSubsystem();


#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionsSubsystem(UMultiplayerSessionsSubsystem&&); \
	NO_API UMultiplayerSessionsSubsystem(const UMultiplayerSessionsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayerSessionsSubsystem) \
	NO_API virtual ~UMultiplayerSessionsSubsystem();


#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_20_PROLOG
#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_SPARSE_DATA \
	FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_RPC_WRAPPERS \
	FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_ACCESSORS \
	FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_INCLASS \
	FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_SPARSE_DATA \
	FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_ACCESSORS \
	FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ETHOOBMULTIPLAYERSESSIONS_API UClass* StaticClass<class UMultiplayerSessionsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_UnrealMultiplayer_MenuSystem_Plugins_EthoobMultiplayerSessions_Source_EthoobMultiplayerSessions_Public_MultiplayerSessionsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
