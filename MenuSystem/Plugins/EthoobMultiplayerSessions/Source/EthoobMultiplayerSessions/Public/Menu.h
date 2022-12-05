// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Menu.generated.h"

/**
 * 
 */
UCLASS()
class ETHOOBMULTIPLAYERSESSIONS_API UMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void MenuSetup(int32 NumberOfPublicConnections = 4, FString TypeOfMatch = "FFA");

protected:
	// initialize the menu
	virtual bool Initialize() override;
	// call when level is removed from world
	virtual void NativeDestruct() override;
	
private:
	//
	// defining our buttons
	//
	//	- host button
	UPROPERTY(meta = (BindWidget))
	class UButton* BTN_Host;	// must be the same as button in widget
	//	- join button
	UPROPERTY(meta = (BindWidget))
	class UButton* BTN_Join;

	//
	// button click events
	//
	//	- host button
	UFUNCTION()
	void HostButtonClicked();
	//	- join button
	UFUNCTION()
	void JoinButtonClicked();

	// disable menu, give input back
	void MenuTearDown();
	
	//
	// subsystem related
	//
	class UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;	// handles multiplayer functionality

	//
	// session attributes
	//
	int32 NumPublicConnections{4};
	FString MatchType{TEXT("FFA")};
};
