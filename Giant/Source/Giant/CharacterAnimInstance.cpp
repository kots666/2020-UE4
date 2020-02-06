// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterAnimInstance.h"

UCharacterAnimInstance::UCharacterAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
}

void UCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size2D();
		auto Character = Cast<ACharacter>(Pawn);
		if (nullptr != Character)
		{
			IsInAir = Character->GetCharacterMovement()->IsFalling();
		}
	}
}
