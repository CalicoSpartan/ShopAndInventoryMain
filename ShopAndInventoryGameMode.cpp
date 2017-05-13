// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ShopAndInventory.h"
#include "ShopAndInventoryGameMode.h"
#include "ShopAndInventoryHUD.h"
#include "ShopAndInventoryCharacter.h"

AShopAndInventoryGameMode::AShopAndInventoryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShopAndInventoryHUD::StaticClass();
}
