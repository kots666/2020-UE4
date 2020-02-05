// Fill out your copyright notice in the Description page of Project Settings.

#include "GiantPlayerController.h"

void AGiantPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	GTLOG_S(Warning);
}


void AGiantPlayerController::Possess(APawn* aPawn)
{
	GTLOG_S(Warning);
	Super::Possess(aPawn);
}

void AGiantPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}
