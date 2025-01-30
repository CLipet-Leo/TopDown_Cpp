// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TopDown_CppPlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UInputMappingContext;

/**
 *
 */
UCLASS()
class TOPDOWN_CPP_API ATopDown_CppPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* DefaultMappingContext;

protected:
	// To add mapping context
	virtual void BeginPlay();

};


