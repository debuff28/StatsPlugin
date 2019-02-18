// Fill out your copyright notice in the Description page of Project Settings.

#include "StatModifyZone.h"
#include "StatsComponent.h"
#include "UnrealNetwork.h"
#include "Engine/World.h"

// Sets default values
AStatModifyZone::AStatModifyZone()
{
	bReplicates = true;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ZoneCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ProjectileCollision"));
	ZoneCollision->SetupAttachment(RootComponent);
	ZoneCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ZoneCollision->SetCollisionProfileName(TEXT("OverlapAll"));
	ZoneCollision->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void AStatModifyZone::BeginPlay()
{
	Super::BeginPlay();

	for (ECollisionChannel bjectType : ReactObjectTypes)
		ObjectQueryParams.AddObjectTypesToQuery(bjectType);
	TraceParams.bTraceAsyncScene = true;
	TraceParams.bTraceComplex = true;
	TraceParams.bReturnPhysicalMaterial = true;
	TraceParams.AddIgnoredActor(this);
	CollisionShape.ShapeType = ECollisionShape::Box;
	CollisionShape.SetBox(ZoneCollision->GetScaledBoxExtent());
	if (ZoneType.Contains(EZoneType::ZT_PeriodAplication))
	{
		FTimerHandle TimerHandle_CheckCollision;
		FTimerDynamicDelegate eventCheckCollision;
		eventCheckCollision.BindDynamic(this, &AStatModifyZone::CheckCollision);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_CheckCollision, eventCheckCollision, CheckCollisionPeriod, true);
	}
}

void AStatModifyZone::CheckCollision()
{
	bool bHitSomething = GetWorld()->SweepMultiByObjectType(HitResults, this->GetActorLocation(), this->GetActorLocation(), FQuat::Identity, ObjectQueryParams, CollisionShape, TraceParams);
	{
		ZoneApplyModsAndEffects(HitResults);
	}
}

void AStatModifyZone::NewActorInZone(AActor * NewActor)
{

	if (OnNewActorInZone.IsBound())
		OnNewActorInZone.Broadcast(NewActor);

	if (GetNetMode() != NM_Client)
	{
		if (ZoneType.Contains(EZoneType::ZT_OnEnterAplication))
		{
			ZoneApplyModsAndEffectsToActor(NewActor);
		}
	}
}

void AStatModifyZone::ActorLeaveZone(AActor * ActorLeave)
{
	if (OnActorLeaveZone.IsBound())
		OnActorLeaveZone.Broadcast(ActorLeave);

	if (GetNetMode() != NM_Client)
	{
		if (RemoveAplicatedEffectOnLeaveZone)
		{
			if (AplicatedEffects.Num() > 0)
			{
				int32 Count = 0;
				for (int32 i = 0; i <= AplicatedEffects.Num() - 1; i++)
				{
					if (AplicatedEffects[i].TargetActor == ActorLeave)
					{
						for (AActor* Effect : AplicatedEffects[i].AplicatedEffects)
						{
							if (Effect)
							{
								
								if (!Cast<AStats_Effect_Base>(Effect)->finish)
								{
									Cast<AStats_Effect_Base>(Effect)->FinishServer();
									Count++;
								}
							}
						}
						AplicatedEffects.RemoveAt(i);
					}
				}
			}

		}
	}
	
}

// Called every frame
void AStatModifyZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	bool bHitSomething = GetWorld()->SweepMultiByObjectType(HitResults, this->GetActorLocation(), this->GetActorLocation(), FQuat::Identity, ObjectQueryParams, CollisionShape, TraceParams);
	{
		TArray<AActor*> HitedActors;
		if(HitResults.Num()>0)
		{
			for (FHitResult HitResult : HitResults)
			{
				if (!HitedActors.Contains(HitResult.GetActor()))
				{
					HitedActors.Add(HitResult.GetActor());
					if (!OverlapedActors.Contains(HitResult.GetActor()))
					{
						OverlapedActors.Add(HitResult.GetActor());
						NewActorInZone(HitResult.GetActor());
						
					}
				}
			}
		}
		if (OverlapedActors.Num() > 0)
		{
			for (AActor* CurActor : OverlapedActors)
			{
				if (!HitedActors.Contains(CurActor))
				{
					ActorLeaveZone(CurActor);
					
					OverlapedActors.RemoveSingleSwap(CurActor);
					break;
				}
			}
		}
	}
}


void AStatModifyZone::ZoneApplyModsAndEffects(TArray<FHitResult>  ReactHitResults)
{
	if (GetNetMode() != NM_Client)
	{
		TArray<AActor*> HitedActors;
		for (FHitResult HitResult : HitResults)
		{
			if (!HitedActors.Contains(HitResult.GetActor()))
			{
				HitedActors.Add(HitResult.GetActor());
				ZoneApplyModsAndEffectsToActor(HitResult.GetActor());
			}
		}
	}
}



void AStatModifyZone::ZoneApplyModsAndEffectsToActor(AActor*  Actor)
{
	if (GetNetMode() != NM_Client)
	{
				UActorComponent* Component = Actor->GetComponentByClass(UStatsComponent::StaticClass());
				if (Component)
				{
					//получаем в кого попали враг друг или еще кто то
					EReactRule currentRule = EReactRule::RR_Other;
					UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
					if (StatComponent->TeamID == TeamID)
						currentRule = EReactRule::RR_Frieds;
					if ((StatComponent->TeamID != TeamID) && (StatComponent->TeamID != "None") && (StatComponent->TeamID != "Neutral"))
						currentRule = EReactRule::RR_Enemys;
					if ((StatComponent->TeamID == "Neutral"))
						currentRule = EReactRule::RR_Neutrals;
					if ((StatComponent->TeamID == "None"))
						currentRule = EReactRule::RR_Other;

					//если соответствует правилу то начинаем 
					if (ReactionRules.Contains(currentRule))
					{
						//применяем изменение статов
						if (StatsModifications.Num() > 0)
						{
							for (FStatsModifications statsMod : StatsModifications)
							{
								bool WasModified;
								//Вызываем функцию модификации на удаленном компоненте статов
								float delta = 0;
								float newValue = 0;
								FGameplayTag ModifiedStat;

								/** Модицикация стата
								float delta = значение на которое изменился стат
								float newValue = новое значение стата
								FGameplayTag ModifiedStat = какой стат в итоге поменялся
								*/
								StatComponent->ModifyStat(GetOwner(), statsMod.Stat, statsMod.ModificationValue, statsMod.ChangeType, statsMod.ValueType, statsMod.AffectingStats, WasModified, delta, newValue, ModifiedStat, statsMod.ClearChange, statsMod.AdditionInfoTags);
								//if (WasModified && GEngine)
								//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, ReactHitResult.GetActor()->GetActorLabel() + TEXT(" Stats Found! Stats:") + statsMod.Stat.ToString() + " Modifyed!");
							}
						}


						//накладываем эффекты
						if (Effects.Num() > 0)
						{
							for (TSubclassOf<AStats_Effect_Base> Effect : Effects)
							{
								FVector Location(0.0f, 0.0f, 0.0f);
								FRotator Rotation(0.0f, 0.0f, 0.0f);
								FActorSpawnParameters SpawnInfo;
								SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
								AActor* SpawnedEffect = GetWorld()->SpawnActor(Effect, &Location, &Rotation, FActorSpawnParameters::FActorSpawnParameters(SpawnInfo));
								if (GetOwner())
								{
									SpawnedEffect->SetOwner(GetOwner());
								}
								Cast<AStats_Effect_Base>(SpawnedEffect)->Initiate(Actor);


								bool New = true;
								if (AplicatedEffects.Num() > 0)
								{
									for (int32 i = 0; i <= AplicatedEffects.Num() - 1; i++)
									{
										if (AplicatedEffects[i].TargetActor == Actor)
										{
											New = false;
											AplicatedEffects[i].AplicatedEffects.Add(SpawnedEffect);
										}
									}
								}
								if (New)
								{
									FZoneAplicatedEffects AplicatedEffect;
									AplicatedEffect.TargetActor = Actor;
									AplicatedEffect.AplicatedEffects.Add(SpawnedEffect);
									AplicatedEffects.Add(AplicatedEffect);
								}
							}
								
							
						}


						

					}

				}
				else
				{
					if (ReactionRules.Contains(EReactRule::RR_Other))
					{

						//применяем урон через стандартную функцию ue4
						//if (GEngine)
						//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, ReactHitResult.GetActor()->GetActorLabel() + TEXT(" Stats not Found! apply std damage!"));
					}
				}
		
	}
}