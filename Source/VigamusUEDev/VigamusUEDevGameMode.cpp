// Copyright Epic Games, Inc. All Rights Reserved.

#include "VigamusUEDevGameMode.h"
#include "VigamusUEDevCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVigamusUEDevGameMode::AVigamusUEDevGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
