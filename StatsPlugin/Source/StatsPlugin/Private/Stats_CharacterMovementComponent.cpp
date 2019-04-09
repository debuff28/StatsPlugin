// Fill out your copyright notice in the Description page of Project Settings.

#include "Stats_CharacterMovementComponent.h"
#include "StatsCharacter.h"



void UStats_CharacterMovementComponent::OnMovementUpdated(float DeltaTime, const FVector& OldLocation, const FVector& OldVelocity)
{
	Super::OnMovementUpdated(DeltaTime, OldLocation, OldVelocity);

	if (!CharacterOwner)
	{
		return;
	}

	//Set Max Walk Speed
	if (bRequestMaxWalkSpeedChange)
	{
		bRequestMaxWalkSpeedChange = false;
		MaxWalkSpeed = MyNewMaxWalkSpeed;
	}

	//Dodge
	if (bWantsToDodge)
	{
		bWantsToDodge = false;

		//Only dodge if on the ground (in the air causes problems trying to get the two modes to line up due to friction)
		if (IsMovingOnGround())
		{
			MoveDirection.Normalize();
			FVector DodgeVelocity = MoveDirection * DodgeStrength;
			//Set Z component to zero so we don't go up
			DodgeVelocity.Z = 0.0f;

			Launch(DodgeVelocity);
		}
	}
}

bool UStats_CharacterMovementComponent::HandlePendingLaunch()
{
	if (!PendingLaunchVelocity.IsZero() && HasValidData())
	{
		Velocity = PendingLaunchVelocity;
		//Remmed out so our dodge move won't play the falling animation.
		//SetMovementMode(MOVE_Falling);
		PendingLaunchVelocity = FVector::ZeroVector;
		bForceNextFloorCheck = true;
		return true;
	}

	return false;
}


void UStats_CharacterMovementComponent::UpdateFromCompressedFlags(uint8 Flags)//Client only
{
	Super::UpdateFromCompressedFlags(Flags);

	bRequestMaxWalkSpeedChange = (Flags&FSavedMove_Character::FLAG_Custom_0) != 0;
	bWantsToDodge = (Flags&FSavedMove_Character::FLAG_Custom_1) != 0;
}

class FNetworkPredictionData_Client* UStats_CharacterMovementComponent::GetPredictionData_Client() const
{
	//check(PawnOwner != NULL);
	//check(PawnOwner->Role < ROLE_Authority);
	if (PawnOwner)
	{
		if (PawnOwner->Role < ROLE_Authority)
		{
			if (!ClientPredictionData)
			{
				UStats_CharacterMovementComponent* MutableThis = const_cast<UStats_CharacterMovementComponent*>(this);

				MutableThis->ClientPredictionData = new FNetworkPredictionData_Client_My(*this);
				MutableThis->ClientPredictionData->MaxSmoothNetUpdateDist = 92.f;
				MutableThis->ClientPredictionData->NoSmoothNetUpdateDist = 140.f;
			}
		}
	}
	return ClientPredictionData;
}

void UStats_CharacterMovementComponent::FSavedMove_My::Clear()
{
	Super::Clear();

	bSavedRequestMaxWalkSpeedChange = false;
	bSavedWantsToDodge = false;
	SavedMoveDirection = FVector::ZeroVector;
}

uint8 UStats_CharacterMovementComponent::FSavedMove_My::GetCompressedFlags() const
{
	uint8 Result = Super::GetCompressedFlags();

	if (bSavedRequestMaxWalkSpeedChange)
	{
		Result |= FLAG_Custom_0;
	}

	if (bSavedWantsToDodge)
	{
		Result |= FLAG_Custom_1;
	}

	return Result;
}

bool UStats_CharacterMovementComponent::FSavedMove_My::CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const
{
	//Set which moves can be combined together. This will depend on the bit flags that are used.	
	if (bSavedRequestMaxWalkSpeedChange != ((FSavedMove_My*)&NewMove)->bSavedRequestMaxWalkSpeedChange)
	{
		return false;
	}
	if (bSavedWantsToDodge != ((FSavedMove_My*)&NewMove)->bSavedWantsToDodge)
	{
		return false;
	}
	if (SavedMoveDirection != ((FSavedMove_My*)&NewMove)->SavedMoveDirection)
	{
		return false;
	}

	return Super::CanCombineWith(NewMove, Character, MaxDelta);
}

void UStats_CharacterMovementComponent::FSavedMove_My::SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character & ClientData)
{
	Super::SetMoveFor(Character, InDeltaTime, NewAccel, ClientData);

	UStats_CharacterMovementComponent* CharacterMovement = Cast<UStats_CharacterMovementComponent>(Character->GetCharacterMovement());
	if (CharacterMovement)
	{
		bSavedRequestMaxWalkSpeedChange = CharacterMovement->bRequestMaxWalkSpeedChange;
		bSavedWantsToDodge = CharacterMovement->bWantsToDodge;
		SavedMoveDirection = CharacterMovement->MoveDirection;
	}
}

void UStats_CharacterMovementComponent::FSavedMove_My::PrepMoveFor(class ACharacter* Character)
{
	Super::PrepMoveFor(Character);

	UStats_CharacterMovementComponent* CharacterMovement = Cast<UStats_CharacterMovementComponent>(Character->GetCharacterMovement());
	if (CharacterMovement)
	{
		CharacterMovement->MoveDirection = SavedMoveDirection;
	}
}

UStats_CharacterMovementComponent::FNetworkPredictionData_Client_My::FNetworkPredictionData_Client_My(const UCharacterMovementComponent& ClientMovement)
	: Super(ClientMovement)
{

}

FSavedMovePtr UStats_CharacterMovementComponent::FNetworkPredictionData_Client_My::AllocateNewMove()
{
	return FSavedMovePtr(new FSavedMove_My());
}


//Set Max Walk Speed RPC to transfer the current Max Walk Speed from the Owning Client to the Server
bool UStats_CharacterMovementComponent::Server_SetMaxWalkSpeed_Validate(const float NewMaxWalkSpeed)
{
	if (NewMaxWalkSpeed < 0.f || NewMaxWalkSpeed > 2000.f)
		return false;
	else
		return true;
}

void UStats_CharacterMovementComponent::Server_SetMaxWalkSpeed_Implementation(const float NewMaxWalkSpeed)
{
	MyNewMaxWalkSpeed = NewMaxWalkSpeed;
}

void UStats_CharacterMovementComponent::SetMaxWalkSpeed(float NewMaxWalkSpeed)
{
	if (PawnOwner->IsLocallyControlled())
	{
		MyNewMaxWalkSpeed = NewMaxWalkSpeed;
		Server_SetMaxWalkSpeed(NewMaxWalkSpeed);
	}

	bRequestMaxWalkSpeedChange = true;
}


//Dodge RPC to transfer the current Move Direction from the Owning Client to the Server
bool UStats_CharacterMovementComponent::Server_MoveDirection_Validate(const FVector& MoveDir)
{
	return true;
}

void UStats_CharacterMovementComponent::Server_MoveDirection_Implementation(const FVector& MoveDir)
{
	MoveDirection = MoveDir;
}

//Trigger the Dodge ability on the Owning Client
void UStats_CharacterMovementComponent::Dodge()
{
	if (PawnOwner->IsLocallyControlled())
	{
		MoveDirection = PawnOwner->GetLastMovementInputVector();
		Server_MoveDirection(MoveDirection);
	}

	bWantsToDodge = true;
}

