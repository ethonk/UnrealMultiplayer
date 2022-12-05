// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu.h"
#include "Components/Button.h"
#include "MultiplayerSessionsSubsystem.h"

void UMenu::MenuSetup(int32 NumberOfPublicConnections, FString TypeOfMatch)
{
	// setup widget
	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	bIsFocusable = true;

	// set input mode through player controller
	if (UWorld* World = GetWorld())
	{
		if (APlayerController* PlayerController = World->GetFirstPlayerController())
		{
			FInputModeUIOnly InputModeData;
			InputModeData.SetWidgetToFocus(TakeWidget());	// focus to our widget
			InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			
			// set the input mode
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(true);
		}
	}

	// access the subsystem and store it
	if (const UGameInstance* GameInstance = GetGameInstance())
	{
		MultiplayerSessionsSubsystem = GameInstance->GetSubsystem<UMultiplayerSessionsSubsystem>();
	}

	// set attributes of session
	NumPublicConnections = NumberOfPublicConnections;
	MatchType = TypeOfMatch;
	
	// bind multiplayer sessions subsystem callbacks.
	if (MultiplayerSessionsSubsystem)
	{
		// bind on create
		MultiplayerSessionsSubsystem->MultiplayerOnCreateSessionComplete.AddDynamic(this, &ThisClass::OnCreateSession);
	}
}

bool UMenu::Initialize()
{
	// if not initialized, return false
	if (!Super::Initialize()) return false;

	//
	// bind click callbacks
	//
	//	- host
	if (BTN_Host) BTN_Host->OnClicked.AddDynamic(this, &ThisClass::HostButtonClicked);
	//	- join
	if (BTN_Join) BTN_Join->OnClicked.AddDynamic(this, &ThisClass::UMenu::JoinButtonClicked);
	
	return true;
}

void UMenu::NativeDestruct()
{
	// remove widget and reset input mode
	MenuTearDown();
}

void UMenu::OnCreateSession(bool bWasSuccessful)
{
	// if unsuccessful, return
	if (!bWasSuccessful)
	{
		// debug
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
				FString(TEXT("Failed to create session!")));
		}
		
		return;
	}

	// debug
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString(TEXT("Session created successfully!")));
	}
	
	// transport to lobby
    if (UWorld* World = GetWorld())
    {
    	World->ServerTravel("/Game/ThirdPerson/Maps/Lobby?listen");	// ?listen = listen server
    }
}

void UMenu::HostButtonClicked()
{
	// create session if valid
	if (MultiplayerSessionsSubsystem)
	{
		// run create session
		MultiplayerSessionsSubsystem->CreateSession(NumPublicConnections, MatchType);
	}
}

void UMenu::JoinButtonClicked()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString(TEXT("Join Button Clicked")));
	}
}

void UMenu::MenuTearDown()
{
	RemoveFromParent();	// removes the widget
	if (UWorld* World = GetWorld())
	{
		// grant input
		if (APlayerController* PlayerController = World->GetFirstPlayerController())
		{
			FInputModeGameOnly InputModeData;
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(false);
		}
	}
}
