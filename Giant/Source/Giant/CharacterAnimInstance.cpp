// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterAnimInstance.h"

UCharacterAnimInstance::UCharacterAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE(TEXT("/Game/Montages/SK_Character_Montage.SK_Character_Montage"));
	if (ATTACK_MONTAGE.Succeeded())
	{
		AttackMontage = ATTACK_MONTAGE.Object;
	}
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

void UCharacterAnimInstance::PlayAttackMontage()
{
	Montage_Play(AttackMontage, 1.0f);
}

void UCharacterAnimInstance::JumpToAttackMontageSection(int32 NewSection)
{
	//GTCHECK(Montage_IsPlaying(AttackMontage));
	Montage_JumpToSection(GetAttackMontaeSectionName(NewSection), AttackMontage);
}

void UCharacterAnimInstance::AnimNotify_AttackStart()
{
	UE_LOG(LogTemp, Log, TEXT("AttackStart"));
	OnAttackStart.Broadcast();
}

void UCharacterAnimInstance::AnimNotify_AttackEnd()
{
	UE_LOG(LogTemp, Log, TEXT("AttackEnd"));
	OnAttackEnd.Broadcast();
}

void UCharacterAnimInstance::AnimNotify_NextAttack()
{
	//UE_LOG(LogTemp, Log, TEXT("NextAttack!!"));
	OnNextAttack.Broadcast();
}

FName UCharacterAnimInstance::GetAttackMontaeSectionName(int32 Section)
{
	GTCHECK(FMath::IsWithinInclusive<int32>(Section, 1, 3), NAME_None);
	//UE_LOG(LogTemp, Log, TEXT("Attack%d"), Section);
	return FName(*FString::Printf(TEXT("Attack%d"), Section));
}
