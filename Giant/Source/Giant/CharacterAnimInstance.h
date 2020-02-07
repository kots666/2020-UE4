// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Giant.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnNextAttackDelegate);
DECLARE_MULTICAST_DELEGATE(FOnAttackStartDelegate);
DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);

/**
 * 
 */
UCLASS()
class GIANT_API UCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UCharacterAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	void PlayAttackMontage();
	void JumpToAttackMontageSection(int32 NewSection);

public:
	FOnNextAttackDelegate OnNextAttack;
	FOnAttackStartDelegate OnAttackStart;
	FOnAttackEndDelegate OnAttackEnd;

private:
	UFUNCTION()
	void AnimNotify_AttackStart();

	UFUNCTION()
	void AnimNotify_AttackEnd();

	UFUNCTION()
	void AnimNotify_NextAttack();

	FName GetAttackMontaeSectionName(int32 Section);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float CurrentPawnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsInAir;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	UAnimMontage* AttackMontage;
};
