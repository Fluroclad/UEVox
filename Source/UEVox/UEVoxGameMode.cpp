// Copyright 2017 Daniel Dickson (Fluroclad). All Rights Reserved.

#include "UEVoxGameMode.h"
#include "Character/UEVCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEVoxGameMode::AUEVoxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Character/UEVCharacter_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
