// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Giant.h"
#include "Components/ActorComponent.h"
#include "MyCharacterStatComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnHPIsZeroDelegate);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GIANT_API UMyCharacterStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyCharacterStatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void InitializeComponent() override;

public:
	void SetNewLevel(int32 NewLevel);
	void UnderAttacked(float NewDamage);

	FOnHPIsZeroDelegate OnHPIsZero;

	float GetHP();
	float GetATK();

private:
	struct FMyCharacterData* CurrentStatData = nullptr;

	UPROPERTY(EditInstanceOnly, Category = Stat, Meta = (AllowPrivateAccess = true))
	int32 Level;

	UPROPERTY(Transient, VisibleInstanceOnly, Category = Stat, Meta = (AllowPrivateAccess = true))
	float HP;

	UPROPERTY(Transient, VisibleInstanceOnly, Category = Stat, Meta = (AllowPrivateAccess = true))
	float ATK;
	
};
