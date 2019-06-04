// Fill out your copyright notice in the Description page of Project Settings.

#include "Stats_CharacterMovementComponent.h"
#include "StatsCharacter.h"



//============================================================================================
//Replication
//============================================================================================


class FNetworkPredictionData_Client* UStats_CharacterMovementComponent::GetPredictionData_Client() const
{
	if (PawnOwner != NULL)
	{
		if (PawnOwner->Role < ROLE_Authority)
		{

			if (!ClientPredictionData)
			{
				UStats_CharacterMovementComponent * MutableThis = const_cast<UStats_CharacterMovementComponent*>(this);

				MutableThis->ClientPredictionData = new FNetworkPredictionData_Client_MyMovement(*this);
				MutableThis->ClientPredictionData->MaxSmoothNetUpdateDist = 92.f;
				MutableThis->ClientPredictionData->NoSmoothNetUpdateDist = 140.f;
			}

		}
	}
	return ClientPredictionData;
}






void FSavedMove_MyMovement::SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character & ClientData)
{
	Super::SetMoveFor(Character, InDeltaTime, NewAccel, ClientData);

	UStats_CharacterMovementComponent* CharMov = Cast<UStats_CharacterMovementComponent >(Character->GetCharacterMovement());
	if (CharMov)
	{
		bSavedWantsToSprint = CharMov->bWantsToSprint;

		//Again, just taking the player movement component's state and storing it for later it in the saved move.
		SavedMoveDirection = CharMov->MoveDirection;
		SavedDodgeCooldownTimer = CharMov->DodgeCooldownTimer;
	}
}




void FSavedMove_MyMovement::PrepMoveFor(class ACharacter* Character)
{
	Super::PrepMoveFor(Character);

	UStats_CharacterMovementComponent* CharMov = Cast<UStats_CharacterMovementComponent>(Character->GetCharacterMovement());
	if (CharMov)
	{

		CharMov->MoveDirection = SavedMoveDirection;

		//Don't update flags here. They're automatically setup before corrections using the compressed flag methods.
		CharMov->DodgeCooldownTimer = SavedDodgeCooldownTimer;
	}
}

FNetworkPredictionData_Client_MyMovement::FNetworkPredictionData_Client_MyMovement(const UCharacterMovementComponent& ClientMovement)
	: Super(ClientMovement)
{

}

FSavedMovePtr FNetworkPredictionData_Client_MyMovement::AllocateNewMove()
{
	return FSavedMovePtr(new FSavedMove_MyMovement());
}

void UStats_CharacterMovementComponent::SetSprinting(bool bSprinting)
{
	bWantsToSprint = bSprinting;
}

float UStats_CharacterMovementComponent::GetMaxSpeed() const
{
	float MaxSpeed = Super::GetMaxSpeed();

	if (bWantsToSprint)
	{
		MaxSpeed *= SprintSpeedMultiplier;
	}

	return MaxSpeed;
}

float UStats_CharacterMovementComponent::GetMaxAcceleration() const
{
	float MaxAccel = Super::GetMaxAcceleration();

	if (bWantsToSprint)
	{
		MaxAccel *= SprintAccelerationMultiplier;
	}

	return MaxAccel;
}

void UStats_CharacterMovementComponent::UpdateFromCompressedFlags(uint8 Flags)
{
	Super::UpdateFromCompressedFlags(Flags);

	//The Flags parameter contains the compressed input flags that are stored in the saved move.
	//UpdateFromCompressed flags simply copies the flags from the saved move into the movement component.
	//It basically just resets the movement component to the state when the move was made so it can simulate from there.
	bWantsToSprint = (Flags&FSavedMove_Character::FLAG_Custom_0) != 0;
}


void FSavedMove_MyMovement::Clear()
{
	Super::Clear();

	//Clear variables back to their default values.
	bSavedWantsToSprint = false;
	SavedMoveDirection = FVector::ZeroVector;
	SavedDodgeCooldownTimer = 0;
}


uint8 FSavedMove_MyMovement::GetCompressedFlags() const
{
	uint8 Result = Super::GetCompressedFlags();

	if (bSavedWantsToSprint)
	{
		Result |= FLAG_Custom_0;
	}

	return Result;
}

bool FSavedMove_MyMovement::CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const
{
	//This pretty much just tells the engine if it can optimize by combining saved moves. There doesn't appear to be
	//any problem with leaving it out, but it seems that it's good practice to implement this anyways.
	if (bSavedWantsToSprint != ((FSavedMove_MyMovement*)&NewMove)->bSavedWantsToSprint)
	{
		return false;
	}

	if (SavedMoveDirection != ((FSavedMove_MyMovement*)&NewMove)->SavedMoveDirection)
	{
		return false;
	}
	if (SavedDodgeCooldownTimer != ((FSavedMove_MyMovement*)&NewMove)->SavedDodgeCooldownTimer)
	{
		return false;
	}

	return Super::CanCombineWith(NewMove, Character, MaxDelta);
	
}

bool UStats_CharacterMovementComponent::ServerSetMoveDirection_Validate(const FVector& MoveDir)
{
	return true;
}

void UStats_CharacterMovementComponent::ServerSetMoveDirection_Implementation(const FVector& MoveDir)
{
	MoveDirection = MoveDir;
}

void UStats_CharacterMovementComponent::OnMovementUpdated(float DeltaSeconds, const FVector& OldLocation, const FVector& OldVelocity)
{
	Super::OnMovementUpdated(DeltaSeconds, OldLocation, OldVelocity);

	if (!CharacterOwner)
	{
		return;
	}

	//Store movement vector
	if (PawnOwner->IsLocallyControlled())
	{
		MoveDirection = PawnOwner->GetLastMovementInputVector();
	}
	//Send movement vector to server
	if (PawnOwner->Role < ROLE_Authority)
	{
		ServerSetMoveDirection(MoveDirection);
	}

	//Update dodge movement
	if (bWantsToDodge && DodgeCooldownTimer <= 0.0f)
	{
		MoveDirection.Normalize();
		FVector DodgeVel = MoveDirection * DodgeStrength;
		DodgeVel.Z = 0.0f;

		if (IsMovingOnGround())
		{
			DodgeVel *= GroundDodgeStrengthMultiplier;
		}

		Launch(DodgeVel);

		bWantsToDodge = false;

		//Reset cooldown timer
		DodgeCooldownTimer = DodgeCooldown;
	}
	if (bWantsToDodge && DodgeCooldownTimer > 0.0f)
	{
		bWantsToDodge = false;
	}

	//Update cooldown timers
	{
		if (DodgeCooldownTimer > 0.0f)
		{
			DodgeCooldownTimer -= DeltaSeconds;
		}
	}
}

void UStats_CharacterMovementComponent::DoDodge()
{
	bWantsToDodge = true;
}

