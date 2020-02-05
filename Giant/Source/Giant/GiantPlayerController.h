// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Giant.h"
#include "GameFramework/PlayerController.h"
#include "GiantPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GIANT_API AGiantPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void PostInitializeComponents() override;
	virtual void Possess(APawn* aPawn) override;
	
protected:
	virtual void BeginPlay() override;
	
	
};
