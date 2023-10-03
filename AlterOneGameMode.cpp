// Copyright Epic Games, Inc. All Rights Reserved.

#include "AlterOneGameMode.h"
#include "AlterOneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAlterOneGameMode::AAlterOneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
