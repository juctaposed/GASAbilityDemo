// Copyright Epic Games, Inc. All Rights Reserved.

#include "GASAbilityDemoGameMode.h"
#include "GASAbilityDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGASAbilityDemoGameMode::AGASAbilityDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
