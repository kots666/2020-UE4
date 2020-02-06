// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacter.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Sword = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SWORD"));
	SwordCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SWORDCOLLISION"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	Sword->SetupAttachment(GetMesh(), TEXT("RightHandSocket"));
	Sword->SetRelativeLocation(FVector(0.0f, 0.0f, -30.0f));

	SwordCollision->SetupAttachment(Sword);
	SwordCollision->SetRelativeLocation(FVector(0.0f, 0.0f, 75.0f));
	SwordCollision->SetRelativeScale3D(FVector(2.25f, 2.0f, 3.0f));
	SwordCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SwordCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);

	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);

	GetCapsuleComponent()->SetCapsuleHalfHeight(110.0f);
	
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -110.0f), FRotator(0.0f, -90.0f, 0.0f));

	SetControlMode(0);
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SK_MYSWORD(TEXT("/Game/Meshes/Sword.Sword"));
	if (SK_MYSWORD.Succeeded())
	{
		Sword->SetStaticMesh(SK_MYSWORD.Object);
		//Sword->SetStaticMesh(SK_MYSWORD.Object);
	}

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_MYCHARACTER(TEXT("/Game/Modelings/Character/character_normal.character_normal"));
	if (SK_MYCHARACTER.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_MYCHARACTER.Object);
	}

	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	static ConstructorHelpers::FClassFinder<UAnimInstance> MYCHARACTER_ANIM(TEXT("/Game/Animations/Character/character_AnimBP.character_AnimBP_C"));
	if (MYCHARACTER_ANIM.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(MYCHARACTER_ANIM.Class);
	}

	GetCharacterMovement()->MaxWalkSpeed = 800.0f;
	GetCharacterMovement()->JumpZVelocity = 650.0f;
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyCharacter::SetControlMode(int32 ControlMode)
{
	if (0 == ControlMode)
	{
		SpringArm->TargetArmLength = 900.0f;
		SpringArm->SetRelativeLocation(FVector(-30.0f, 0.0f, 100.0f));
		SpringArm->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
		SpringArm->bUsePawnControlRotation = true;
		SpringArm->bInheritPitch = true;
		SpringArm->bInheritRoll = true;
		SpringArm->bInheritYaw = true;
		SpringArm->bDoCollisionTest = true;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 360.0f, 0.0f);
	}
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AMyCharacter::Jump);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMyCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AMyCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AMyCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMyCharacter::Turn);
}

void AMyCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(FRotator(0.0f, GetControlRotation().Yaw, 0.0f)).GetUnitAxis(EAxis::X), NewAxisValue);
	//AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), NewAxisValue);
}

void AMyCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(FRotator(0.0f, GetControlRotation().Yaw, 0.0f)).GetUnitAxis(EAxis::Y), NewAxisValue);
	//AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), NewAxisValue);
}

void AMyCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}

void AMyCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}

