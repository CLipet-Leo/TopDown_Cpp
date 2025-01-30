// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDown_CppGameMode.h"
#include "TopDown_CppPlayerController.h"
#include "TopDown_CppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATopDown_CppGameMode::ATopDown_CppGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopDown_CppPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}