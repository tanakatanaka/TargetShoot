// Copyright Epic Games, Inc. All Rights Reserved.

#include "hitTargetGameMode.h"
#include "hitTargetHUD.h"
#include "hitTargetCharacter.h"
#include "UObject/ConstructorHelpers.h"

AhitTargetGameMode::AhitTargetGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/BP_FPC"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AhitTargetHUD::StaticClass();
}
