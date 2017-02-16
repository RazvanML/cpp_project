// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Cpp_Project.h"
#include "Cpp_ProjectGameMode.h"
#include "Cpp_ProjectPlayerController.h"
#include "Cpp_ProjectCharacter.h"

ACpp_ProjectGameMode::ACpp_ProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACpp_ProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}