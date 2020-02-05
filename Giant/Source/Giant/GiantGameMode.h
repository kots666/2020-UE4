// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Giant.h"
#include "GameFramework/GameModeBase.h"
#include "GiantGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GIANT_API AGiantGameMode : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	AGiantGameMode();
	
	virtual void PostLogin(APlayerController* NewPlayer) override;
	
	
};
