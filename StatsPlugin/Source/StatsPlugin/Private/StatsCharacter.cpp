// Fill out your copyright notice in the Description page of Project Settings.

#include "StatsCharacter.h"

// Sets default values
AStatsCharacter::AStatsCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UStats_CharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{

 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStatsCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStatsCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// forces the method they use to visually offset meshes for normal characters to work with papercharacters.
	
}

// Called to bind functionality to input
void AStatsCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AStatsCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	StatsMovementComponent = Cast<UStats_CharacterMovementComponent>(Super::GetMovementComponent());
}