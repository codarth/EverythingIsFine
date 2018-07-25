// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "OnFireGameMode.h"
#include "OnFireHUD.h"
#include "OnFireCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOnFireGameMode::AOnFireGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_OnFireCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AOnFireHUD::StaticClass();
}
