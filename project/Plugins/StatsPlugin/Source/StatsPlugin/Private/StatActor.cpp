// Fill out your copyright notice in the Description page of Project Settings.

#include "StatActor.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AStatActor::AStatActor()
{
	bReplicates = true;
	bAlwaysRelevant = true;
	NetUpdateFrequency = 2.0f;
	MinNetUpdateFrequency = 0.1f;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AStatActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStatActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Regen(DeltaTime);

	if ((FMath::Clamp(StatCurrentValue + (StatRegenCurrentValue*DeltaTime), StatMinCurrentValue, StatMaxCurrentValue) == StatMinCurrentValue) && (StatCurrentValue != StatMinCurrentValue) && (onCurrentStatMinValue.IsBound()))
	{
		onCurrentStatMinValue.Broadcast(FGameplayTag::RequestGameplayTag(StatTag, false));

	}
	
}

void AStatActor::InitStat()
{
	ValueWasChanged = true;
	StatMaxCurrentValue = StatMaxBaseValue;
	StatMinCurrentValue = StatMinBaseValue;
	StatCurrentValue = FMath::Clamp(StatBaseValue, StatMinBaseValue, StatMaxBaseValue);
	StatRegenCurrentValue = FMath::Clamp(StatRegenBaseValue, StatMaxBaseValue * -0.1f, StatMaxBaseValue);
}

void AStatActor::setRegenIsStoped(bool Enable)
{
	RegenIsStoped = Enable;
}

void AStatActor::Regen(float deltatime)
{
	if (StatRegenCurrentValue != 0)
	{
		if (!RegenIsStoped)
		{
			switch (regenRule)
			{
			case ERegenRule::RR_ConstantRegen:
				StatCurrentValue = FMath::Clamp(StatCurrentValue + (StatRegenCurrentValue*deltatime), StatMinCurrentValue, StatMaxCurrentValue);
				ValueWasChanged = true;
				break;
			case ERegenRule::RR_PauseRegenAfterModify:
				if ((FDateTime::Now()-(PauseTime)).GetTotalMilliseconds() > RegenPauseLenght)
				{
					StatCurrentValue = FMath::Clamp(StatCurrentValue + (StatRegenCurrentValue*deltatime), StatMinCurrentValue, StatMaxCurrentValue);
					ValueWasChanged = true;
				}
				break;
			default:
				break;
			}
		}
		else
		{
			ValueWasChanged = true;
		}

	}
}

float AStatActor::GetValue(EStatValueType ValueType)
{
	float value = 0.0f;
	switch (ValueType)
	{
	case EStatValueType::SVT_Base:
		value = StatBaseValue;
		break;
	case EStatValueType::SVT_Current:
		value = StatCurrentValue;
		break;
	case EStatValueType::SVT_RegenBase:
		value = StatRegenBaseValue;
		break;
	case EStatValueType::SVT_RegenCurrent:
		value = StatRegenCurrentValue;
		break;
	case EStatValueType::SVT_MaxBase:
		value = StatMaxBaseValue;
		break;
	case EStatValueType::SVT_MaxCurrent:
		value = StatMaxCurrentValue;
		break;
	case EStatValueType::SVT_MinBase:
		value = StatMinBaseValue;
		break;
	case EStatValueType::SVT_MinCurrent:
		value = StatMinCurrentValue;
		break;
	default:
		value = 0.0f;
		break;
	}
	return value;
}

void AStatActor::SetValue(EStatValueType ValueType, float NewValue)
{
	bool Forcereplicate = true;
	if ((FDateTime::Now()-(PauseTime)).GetTotalSeconds() <= 0.1)
	{
		Forcereplicate = false;
	}

	PauseTime = FDateTime::Now();
	ValueWasChanged = true;
	switch (ValueType)
	{
	case EStatValueType::SVT_Base:
		StatBaseValue = FMath::Clamp(NewValue, StatMinBaseValue, StatMaxBaseValue);
		break;
	case EStatValueType::SVT_Current:
	{
		StatCurrentValue = FMath::Clamp(NewValue, StatMinCurrentValue, StatMaxCurrentValue);
		if((StatCurrentValue == StatMinCurrentValue) && StopRegenOnMinValue)
		{
			RegenIsStoped = true;
		}
	}
		break;
	case EStatValueType::SVT_RegenBase:
		StatRegenBaseValue = FMath::Clamp(NewValue, StatMaxBaseValue * -1, StatMaxBaseValue);
		break;
	case EStatValueType::SVT_RegenCurrent:
		StatRegenCurrentValue = FMath::Clamp(NewValue, StatMaxCurrentValue * -1, StatMaxCurrentValue);
		break;
	case EStatValueType::SVT_MaxBase:
		StatMaxBaseValue = NewValue;
		break;
	case EStatValueType::SVT_MaxCurrent:
		StatMaxCurrentValue = NewValue;
		break;
	case EStatValueType::SVT_MinBase:
		StatMinBaseValue = NewValue;
		break;
	case EStatValueType::SVT_MinCurrent:
		StatMinCurrentValue = NewValue;
		break;
	default:
		break;
	}
	if(Forcereplicate)
		ForceNetUpdate();
	
}


void AStatActor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AStatActor, StatTag);
	DOREPLIFETIME(AStatActor, StatBaseValue);
	DOREPLIFETIME(AStatActor, StatCurrentValue);
	DOREPLIFETIME(AStatActor, StatRegenBaseValue);
	DOREPLIFETIME(AStatActor, StatRegenCurrentValue);
	DOREPLIFETIME(AStatActor, StatMaxBaseValue);
	DOREPLIFETIME(AStatActor, StatMaxCurrentValue);
	DOREPLIFETIME(AStatActor, StatMinBaseValue);
	DOREPLIFETIME(AStatActor, StatMinCurrentValue);
	DOREPLIFETIME(AStatActor, RegenPauseLenght);
	DOREPLIFETIME(AStatActor, StopRegenOnMinValue);
	DOREPLIFETIME(AStatActor, PauseTime);
	DOREPLIFETIME(AStatActor, RegenIsStoped);
	DOREPLIFETIME(AStatActor, ValueWasChanged);

}

