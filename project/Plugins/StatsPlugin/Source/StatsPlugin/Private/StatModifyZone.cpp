// Fill out your copyright notice in the Description page of Project Settings.

#include "StatModifyZone.h"
#include "StatsComponent.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"

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
	ZoneCollision->OnComponentBeginOverlap.AddDynamic(this, &AStatModifyZone::OnZoneBeginOverlap);
	ZoneCollision->OnComponentEndOverlap.AddDynamic(this, &AStatModifyZone::OnZoneEndnOverlap);
}

void AStatModifyZone::OnZoneBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OnNewActorInZone.IsBound())
		OnNewActorInZone.Broadcast(OtherActor);

	if (GetNetMode() != NM_Client)
	{
		if (ZoneType.Contains(EZoneType::ZT_OnEnterAplication))
		{
			ZoneApplyModsAndEffectsToActor(OtherActor);
		}
	}
}

void AStatModifyZone::OnZoneEndnOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OnActorLeaveZone.IsBound())
		OnActorLeaveZone.Broadcast(OtherActor);

	if (GetNetMode() != NM_Client)
	{
		if (RemoveAplicatedEffectOnLeaveZone)
		{
			if (AplicatedEffects.Num() > 0)
			{
				int32 Count = 0;
				for (int32 i = 0; i <= AplicatedEffects.Num() - 1; i++)
				{
					if (AplicatedEffects[i].TargetActor == OtherActor)
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
		GetWorldTimerManager().SetTimer(TimerHandle_CheckCollision, eventCheckCollision, CheckCollisionPeriod, true);
	}





	if (GetOwner())
	{
		UActorComponent* Component = GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
		if (Component)
		{
			UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
			if (StatsModifications.Num() > 0)
			{
				for (int i = 0; i < StatsModifications.Num(); i++)
					//for (FStatsModifications statmmod : StatsModifications)
				{
					if (StatsModifications[i].AffectingStats.Num() > 0)
					{
						for (int a = 0; a < StatsModifications[i].AffectingStats.Num(); a++)
							//for (FStatsAffectingParameters AffectingStat : statmmod.AffectingStats)
						{
							if (StatComponent->Stats.Contains(StatsModifications[i].AffectingStats[a].affectingStatTag))
							{

								float mod = StatComponent->Stats.FindRef(StatsModifications[i].AffectingStats[a].affectingStatTag).GetValue(StatsModifications[i].AffectingStats[a].affectingValue)*StatsModifications[i].AffectingStats[a].affectingMultiplier;

								if (mod != 0) {
									switch (StatsModifications[i].AffectingStats[a].affectingType)
									{
									case EStatChangeType::SCT_Add:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue + mod;
										break;
									case EStatChangeType::SCT_Sub:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue - mod;
										break;
									case EStatChangeType::SCT_Multiply:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue * mod;
										break;
									case EStatChangeType::SCT_Divide:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue / mod;
										break;
									case EStatChangeType::SCT_AddPercent:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue + ((StatsModifications[i].ModificationValue / 100) * mod);
										break;
									case EStatChangeType::SCT_SubtractPercent:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue - ((StatsModifications[i].ModificationValue / 100) * mod);
										break;
									case EStatChangeType::SCT_SetValue:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue;
										break;
									default:
										break;
									}
								}
							}
						}

					}
				}
			}
		}
	}




}

void AStatModifyZone::CheckCollision()
{ 
	TArray<AActor*> OverlapingActors;
	ZoneCollision->GetOverlappingActors(OverlapingActors);
	ZoneApplyModsAndEffectsToActors(OverlapingActors);


}

void AStatModifyZone::NewActorInZone(AActor * NewActor)
{

	/*if (OnNewActorInZone.IsBound())
		OnNewActorInZone.Broadcast(NewActor);

	if (GetNetMode() != NM_Client)
	{
		if (ZoneType.Contains(EZoneType::ZT_OnEnterAplication))
		{
			ZoneApplyModsAndEffectsToActor(NewActor);
		}
	}*/
}

void AStatModifyZone::ActorLeaveZone(AActor * ActorLeave)
{
	/*if (OnActorLeaveZone.IsBound())
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
	}*/
	
}

// Called every frame
void AStatModifyZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*if (false) {
		bool bHitSomething = GetWorld()->SweepMultiByObjectType(HitResults, this->GetActorLocation(), this->GetActorLocation(), FQuat::Identity, ObjectQueryParams, CollisionShape, TraceParams);

		{
			TArray<AActor*> HitedActors;
			if (HitResults.Num() > 0)

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
	}*/
}


void AStatModifyZone::ZoneApplyModsAndEffects(TArray<FHitResult>  ReactHitResults)
{
	/*if (GetNetMode() != NM_Client)
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
	}*/
}

void AStatModifyZone::ZoneApplyModsAndEffectsToActors(TArray<AActor*> Actors)
{
	if (GetNetMode() != NM_Client)
	{
		TArray<AActor*> HitedActors;
		for (AActor* Actor : Actors)
		{
			if (!HitedActors.Contains(Actor))
			{
				HitedActors.Add(Actor);
				ZoneApplyModsAndEffectsToActor(Actor);
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
								StatComponent->ModifyStat(GetOwner(), statsMod.Stat, statsMod.ModificationValue, statsMod.ChangeType, statsMod.ValueType, Actor->GetActorLocation(), WasModified, delta, newValue, ModifiedStat, statsMod.ClearChange, statsMod.AdditionInfoTags);
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
								else
								{
									SpawnedEffect->SetOwner(this);
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