// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacterStatComponent.h"
#include "MyGameInstance.h"


// Sets default values for this component's properties
UMyCharacterStatComponent::UMyCharacterStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	bWantsInitializeComponent = true;

	Level = 1;
	// ...
}


// Called when the game starts
void UMyCharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UMyCharacterStatComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetNewLevel(Level);
}

void UMyCharacterStatComponent::SetNewLevel(int32 NewLevel)
{
	auto MyGameInstance = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	GTCHECK(nullptr != MyGameInstance);
	CurrentStatData = MyGameInstance->GetMyCharacterData(NewLevel);
	if (nullptr != CurrentStatData)
	{
		Level = NewLevel;
		HP = CurrentStatData->MaxHP;
		ATK = CurrentStatData->Attack;
	}
}

void UMyCharacterStatComponent::UnderAttacked(float NewDamage)
{
	HP = FMath::Clamp<float>(HP - NewDamage, 0.0f, CurrentStatData->MaxHP);
	if (HP <= 0.0f)
	{
		OnHPIsZero.Broadcast();
	}
}

float UMyCharacterStatComponent::GetHP()
{
	return HP;
}

float UMyCharacterStatComponent::GetATK()
{
	return ATK;
}

