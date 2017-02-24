// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "cpp_project.h"
#include "cpp_projectGameMode.h"
#include "cpp_projectCharacter.h"

Acpp_projectGameMode::Acpp_projectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
