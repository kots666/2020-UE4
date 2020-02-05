// Fill out your copyright notice in the Description page of Project Settings.

#include "GiantGameMode.h"
#include "MyCharacter.h"
#include "GiantPlayerController.h"

AGiantGameMode::AGiantGameMode()
{
	DefaultPawnClass = AMyCharacter::StaticClass();
	PlayerControllerClass = AGiantPlayerController::StaticClass();
}

void AGiantGameMode::PostLogin(APlayerController* NewPlayer)
{
	GTLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	GTLOG(Warning, TEXT("PostLogin End"));
}
