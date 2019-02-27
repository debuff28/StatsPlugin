// Fill out your copyright notice in the Description page of Project Settings.

#include "Stats_Effect_Base.h"
#include "Kismet/KismetMathLibrary.h"
#include "StatsComponent.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AStats_Effect_Base::AStats_Effect_Base()
{
	bReplicates = true;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AStats_Effect_Base::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AStats_Effect_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//если проинициировали то аттачим к родительскому объекту
	if ((!attach)&&(ParentActor))
	{
		attach = true;
		this->SetActorLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
		this->AttachToActor(ParentActor, FAttachmentTransformRules::KeepRelativeTransform);
	}


	//считаем время до конца
	if(init)
	{
		switch (StacksRules)
		{
		case EStackRules::SR_AllStacksHaveATotalTime:
			GetAllTimeToFinish();
			break;
		case EStackRules::SR_EachStackHasItsOwnTime:
			GetThisTimeToFinish();
			break;
		case EStackRules::SR_NewStackNotReplacesOld:
			GetThisTimeToFinish();
			break;
		case EStackRules::SR_NewStackReplacesOld:
			GetThisTimeToFinish();
			break;
		default:
			break;
		}

		
	}
}

void AStats_Effect_Base::StartWorkServer()
{
	Client_StartWork();
}


bool AStats_Effect_Base::Client_StartWork_Validate()
{
	return true;
}

void AStats_Effect_Base::FinishServer()
{
	if (init)
	{
		if (GetOwner())
		{

			if (ParentActor != GetOwner())
			{
				UActorComponent* Component = ParentActor->GetComponentByClass(UStatsComponent::StaticClass());
				if (Component)
				{
					UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
					if (StatComponent)
					{
						StatComponent->OnEffectRemoved.Broadcast(this, ParentActor);
					}
				}
				UActorComponent* MyComponent = GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
				if (MyComponent)
				{
					UStatsComponent* StatComponent = Cast<UStatsComponent>(MyComponent);
					if (StatComponent)
					{
						StatComponent->OnMyEffectRemoved.Broadcast(this, ParentActor);
					}
				}
			}
			else
			{
				UActorComponent* MyComponent = GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
				if (MyComponent)
				{
					UStatsComponent* StatComponent = Cast<UStatsComponent>(MyComponent);
					if (StatComponent)
					{
						StatComponent->OnMyEffectRemoved.Broadcast(this, ParentActor);
					}
				}
			}
		}
		else
		{
			UActorComponent* Component = ParentActor->GetComponentByClass(UStatsComponent::StaticClass());
			if (Component)
			{
				UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
				if (StatComponent)
				{
					StatComponent->OnEffectApplicated.Broadcast(this, ParentActor);
				}
			}
		}
	}
	finish = true;
	FinishAll();
}

//собираем все экземпляры данного эффекта
void AStats_Effect_Base::GetEffectOfMyTag()
{
	TArray<AActor*> TempChildActors;

	TArray< AStats_Effect_Base*> TempEffectsBase;
	if (this->ParentActor)
	{
		ParentActor->GetAttachedActors(TempChildActors);
		if (TempChildActors.Num() > 0)
		{
			for (AActor* ChildActor : TempChildActors)
			{
				AStats_Effect_Base* EffectBase = Cast<AStats_Effect_Base>(ChildActor);
				if (EffectBase)
				{
					if ((EffectBase->EffectTag == EffectTag) && (this != EffectBase))
					{
						TempEffectsBase.Add(EffectBase);
					}
				}
			}
		}
		if (TempEffectsBase.Num() > 0)
		{
			EffectsBase = TempEffectsBase;
		}
	}
}

//получаем время окончания эффекта по самому старому экземпляру этого эффекта
void AStats_Effect_Base::GetThisTimeToFinish()
{

	GetEffectOfMyTag();
	TimeToFinish = FMath::Clamp(LiveTime - this->GetGameTimeSinceCreation(), 0.0f, LiveTime);
	if ((TimeToFinish == 0.0f) && !finish)
	{
		

		if (GetNetMode() != NM_Client)
		{
			FinishServer();
		}

		
	}
}

//получаем время окончания эффекта по самому молодому экземпляру этого эффекта
void AStats_Effect_Base::GetAllTimeToFinish()
{
	GetEffectOfMyTag();
	float timeSinceCreation = LiveTime;
	for (AStats_Effect_Base* tempEffect : EffectsBase)
	{
		if (timeSinceCreation > tempEffect->GetGameTimeSinceCreation())
		{
			timeSinceCreation = tempEffect->GetGameTimeSinceCreation();

		}
	}
	if (timeSinceCreation> this->GetGameTimeSinceCreation())
		timeSinceCreation = this->GetGameTimeSinceCreation();
	TimeToFinish = FMath::Clamp(LiveTime - timeSinceCreation, 0.0f, LiveTime);

	if ((TimeToFinish == 0.0f) && !finish)
	{
		if (GetNetMode() != NM_Client)
		{
			FinishServer();
		}

		
	}
}

//инициируем эффект Parent - то куда аттачим эффект
void AStats_Effect_Base::Initiate(AActor* Parent)
{
	ParentActor = Parent;

	GetEffectOfMyTag();

	if (GetNetMode() != NM_Client)
	{
		switch (StacksRules)
		{
		case EStackRules::SR_AllStacksHaveATotalTime:
			ApplyStackCountRule();
			break;
		case EStackRules::SR_EachStackHasItsOwnTime:
			ApplyStackCountRule();
			break;
		case EStackRules::SR_NewStackNotReplacesOld:
			if (EffectsBase.Num() > 0)
			{
				FinishServer();
				apply = false;
			}
			break;
		case EStackRules::SR_NewStackReplacesOld:
			if (EffectsBase.Num() > 0) {
				for (AStats_Effect_Base* TempEffect : EffectsBase)
				{
					if (TempEffect != this)
					{
						TempEffect->FinishServer();
					}
				}
			}
			break;
		default:
			break;
		}
		if(apply)
		{
			
			if (GetOwner())
			{
				UActorComponent* Component = GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
					if (Component)
					{
						UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
							for (FStatsAffectingParameters AffectingStat : EffectPowerAffectors)
							{
								if (StatComponent->Stats.Contains(AffectingStat.affectingStatTag))
								{
									float mod = StatComponent->Stats.FindRef(AffectingStat.affectingStatTag).GetValue(AffectingStat.affectingValue)*AffectingStat.affectingMultiplier;
										if (mod != 0) {
											switch (AffectingStat.affectingType)
											{
											case EStatChangeType::SCT_Add:
												EffectBasePower = EffectBasePower + mod;
												break;
											case EStatChangeType::SCT_Sub:
												EffectBasePower = EffectBasePower - mod;
												break;
											case EStatChangeType::SCT_Multiply:
												EffectBasePower = EffectBasePower * mod;
												break;
											case EStatChangeType::SCT_Divide:
												EffectBasePower = EffectBasePower / mod;
												break;
											case EStatChangeType::SCT_AddPercent:
												EffectBasePower = EffectBasePower + ((EffectBasePower / 100) * mod);
												break;
											case EStatChangeType::SCT_SubtractPercent:
												EffectBasePower = EffectBasePower - ((EffectBasePower / 100) * mod);
												break;
											default:
												break;
											}
										}
								}
							}
					}
			}

			TArray<AActor*> actors;
			ParentActor->GetAttachedActors(actors);
			if (actors.Num() > 0)
			{
				for (AActor* attachedActor : actors)
				{
					AStats_Effect_Base* Effect = Cast<AStats_Effect_Base>(attachedActor);
					if (Effect)
					{
						if (Effect != this)
						{
							if (Effect->EffectBasePower < EffectBasePower)
							{
								Effect->TryToRemove(RemoveEffectsWithInfoTags);
							}
						}
					}
				}
			}

			StartWorkServer();
		}

		if (apply)
		{
			if (GetOwner())
			{

				if (ParentActor != GetOwner())
				{
					UActorComponent* Component = ParentActor->GetComponentByClass(UStatsComponent::StaticClass());
					if (Component)
					{
						UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
						if (StatComponent)
						{
							StatComponent->OnEffectApplicated.Broadcast(this, ParentActor);
						}
					}
					UActorComponent* MyComponent = GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
					if (MyComponent)
					{
						UStatsComponent* StatComponent = Cast<UStatsComponent>(MyComponent);
						if (StatComponent)
						{
							StatComponent->OnMyEffectApplicated.Broadcast(this, ParentActor);
						}
					}
				}
				else
				{
					UActorComponent* MyComponent = GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
					if (MyComponent)
					{
						UStatsComponent* StatComponent = Cast<UStatsComponent>(MyComponent);
						if (StatComponent)
						{
							StatComponent->OnMyEffectApplicated.Broadcast(this, ParentActor);
						}
					}
				}

			}
			else
			{
				UActorComponent* Component = ParentActor->GetComponentByClass(UStatsComponent::StaticClass());
				if (Component)
				{
					UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
					if (StatComponent)
					{
						StatComponent->OnEffectApplicated.Broadcast(this, ParentActor);
					}
				}
			}
		}
	}
	init = true;
	
}

//уничтожаем эффект если содержится нужный таг
void AStats_Effect_Base::TryToRemove(TArray<FGameplayTag> RemoveInfoTags)
{
	if (GetNetMode() != NM_Client)
	{
		for (FGameplayTag inputTag : EffectInfoTag)
		{
			if (RemoveInfoTags.Contains(inputTag))
			{
				FinishServer();
				
			}
		}
	}

}

//уничтожаем старейший экземпляр данного эффекта
void AStats_Effect_Base::DestroyOldest()
{
	AStats_Effect_Base* EffectToDestroy = nullptr;
	float timeSinceCreation = -1.0f;
	for (AStats_Effect_Base* tempEffect : EffectsBase)
	{
		if (timeSinceCreation < tempEffect->GetGameTimeSinceCreation())
		{
			timeSinceCreation = tempEffect->GetGameTimeSinceCreation();
			EffectToDestroy = tempEffect;
		}
	}
	if (EffectToDestroy != nullptr)
	{
		EffectToDestroy->FinishServer();
	}
}

//уничтожаем новейший экземпляр данного эффекта
void AStats_Effect_Base::DestroyNewest()
{
	AStats_Effect_Base* EffectToDestroy = nullptr;
	float timeSinceCreation = LiveTime;
	for (AStats_Effect_Base* tempEffect : EffectsBase)
	{
		if (timeSinceCreation > tempEffect->GetGameTimeSinceCreation())
		{
			timeSinceCreation = tempEffect->GetGameTimeSinceCreation();
			EffectToDestroy = tempEffect;
		}
	}
	if (EffectToDestroy!= nullptr)
	{
		EffectToDestroy->FinishServer();
	}
}


//применяем правило стаков когда уже достигнуто макситальное колличество стаков
void AStats_Effect_Base::ApplyStackCountRule()
{
	if (EffectsBase.Num() >= StacksMaxCount)
	{
		switch (StacksCountRules)
		{
		case EStackCountRules::SCR_None:
			FinishServer();
			apply = false;
			break;
		case EStackCountRules::SCR_ReplaceTheNewest:
			DestroyNewest();
			break;
		case EStackCountRules::SCR_ReplaceTheOldest:
			DestroyOldest();
			break;
		default:
			break;
		}
	}
}

//репликация
void AStats_Effect_Base::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	DOREPLIFETIME(AStats_Effect_Base, ParentActor);
	DOREPLIFETIME(AStats_Effect_Base, init);
}











void AStats_Effect_Base::FinishAll_Implementation()
{
}

bool AStats_Effect_Base::FinishAll_Validate()
{
	return true;
}

void AStats_Effect_Base::ActivateEffectAll_Implementation()
{
	ActivateEffect();
}

bool AStats_Effect_Base::ActivateEffectAll_Validate()
{
	return true;
}

void AStats_Effect_Base::DeactivateEffectAll_Implementation()
{
	DeactivateEffect();
}

bool AStats_Effect_Base::DeactivateEffectAll_Validate()
{
	return true;
}

void AStats_Effect_Base::Client_StartWork_Implementation()
{

}
