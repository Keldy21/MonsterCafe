// Copyright Epic Games, Inc. All Rights Reserved.

#include "MonsterCafeGameMode.h"
#include "MonsterCafeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMonsterCafeGameMode::AMonsterCafeGameMode()
{
	// set default pawn class to our Blueprinted character
	
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	
}
