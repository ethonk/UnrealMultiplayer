// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerTestingGameMode.h"
#include "MultiplayerTestingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerTestingGameMode::AMultiplayerTestingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
