// Fill out your copyright notice in the Description page of Project Settings.

#include "AI_Sight.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/Actor.h"
#include "EngineUtils.h"
#include "TimerManager.h"
#include "StatsComponent.h"
#include "Projectile.h"
#include "StatModifyZone.h"
#include "DrawDebugHelpers.h"
#include "AbilitiesComponent.h"

// Sets default values for this component's properties
UAI_Sight::UAI_Sight()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAI_Sight::BeginPlay()
{
	Super::BeginPlay();

	UActorComponent* Component = GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
	if (Component)
	{
		StatComponent = Cast<UStatsComponent>(Component);
		
	}
	
	for (ECollisionChannel bjectType : SightObjectTypes)
	{
		ObjectQueryParams.AddObjectTypesToQuery(bjectType);
		OTQ.Add(UEngineTypes::ConvertToObjectType(bjectType));
	}
	for (ECollisionChannel bjectType : BlockingSightObjectTypes)
	{
		ObjectBlockingParams.AddObjectTypesToQuery(bjectType);
	}

	// = SightObjectTypes
	
	TraceParams.bTraceAsyncScene = true;
	TraceParams.bTraceComplex = true;
	TraceParams.bReturnPhysicalMaterial = true;
	TraceParams.AddIgnoredActor(GetOwner());

	CollisionRadiusShape.ShapeType = ECollisionShape::Sphere;
	CollisionRadiusShape.SetSphere(SightRadius);

	

	FTimerHandle TimerHandle_Update;
	FTimerDynamicDelegate eventUpdate;
	eventUpdate.BindDynamic(this, &UAI_Sight::Update);
	GetOwner()->GetWorldTimerManager().SetTimer(TimerHandle_Update, eventUpdate, UpdatePeriod, true);
	// ...
	
}


// Called every frame
void UAI_Sight::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// ...
}

void UAI_Sight::Update()
{
	TArray<AActor*> FindedFriends;
	TArray<AActor*> FindedEnemys;
	TArray<AActor*> FindedUsefulProjectiles;
	TArray<AActor*> FindedDangerousProjectiles;
	TArray<AActor*> FindedUsefulZones;
	TArray<AActor*> FindedDangerousZones;
	FindedFriends.Empty();
	FindedEnemys.Empty();
	FindedUsefulProjectiles.Empty();
	FindedDangerousProjectiles.Empty();
	FindedUsefulZones.Empty();
	FindedDangerousZones.Empty();

	if (FastSight)
	{

		TArray<AActor*> FindedActors;
		UKismetSystemLibrary::SphereOverlapActors(GetWorld(), GetComponentLocation(), SightRadius, OTQ, AActor::StaticClass(), ActorsToIgnore, FindedActors);
		if (FindedActors.Num() > 0)
		{
			for (AActor* FindedActor : FindedActors)
			{
				FHitResult TempResult;
				FCollisionShape CollisionLine;
				CollisionLine.ShapeType = ECollisionShape::Line;
				bool blocking = GetWorld()->SweepSingleByObjectType(TempResult, GetComponentLocation(), FindedActor->GetActorLocation(), FQuat::Identity, ObjectBlockingParams, CollisionLine, TraceParams);
				if (!blocking)
				{
					if (APawn* pawn = Cast<APawn>(FindedActor))
					{
						//нашли какой то павн! надо проверить команду
						UActorComponent* Component = pawn->GetComponentByClass(UStatsComponent::StaticClass());
						if (Component)
						{
							UStatsComponent* TargetStatComponent = Cast<UStatsComponent>(Component);
							if (TargetStatComponent->TeamID == StatComponent->TeamID)
							{
								//своя команда
								FindedFriends.Add(pawn);

								if (!Friends.Contains(pawn))
								{
									NewFriend(pawn);
								}
								//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Green, false, UpdatePeriod, 0, 0.5f);
							}
							else
							{
								//чужая команда
								FindedEnemys.Add(pawn);

								if (!Enemys.Contains(pawn))
								{
									NewEnemy(pawn);
								}
								//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Orange, false, UpdatePeriod, 0, 0.5f);
							}
						}
						else
						{
							//без компонента статов
						}
					}

					//смотрим на прожектайлы
					if (AProjectile* Projectile = Cast<AProjectile>(FindedActor))
					{
						if (StatComponent->TeamID == Projectile->TeamID)
						{
							//своя команда
							FindedUsefulProjectiles.Add(Projectile);
							//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Green, false, UpdatePeriod, 0, 0.5f);
						}
						else
						{
							//чужая команда
							FindedDangerousProjectiles.Add(Projectile);
							//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Orange, false, UpdatePeriod, 0, 0.5f);
						}
					}

					//смотрим на зоны
					if (AStatModifyZone* Zone = Cast<AStatModifyZone>(FindedActor))
					{

						if (StatComponent->TeamID == Zone->TeamID)
						{
							//своя команда
							FindedUsefulZones.Add(Zone);
							//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Green, false, UpdatePeriod, 0, 0.5f);
						}
						else
						{
							//чужая команда
							FindedDangerousZones.Add(Zone);
							//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Orange, false, UpdatePeriod, 0, 0.5f);
						}
					}
				}
			}
		}

	}
	else
	{

		TArray<FHitResult> SortedHitResults;
		TArray<AActor*> uniqActors;
		bool bHitSomething = GetWorld()->SweepMultiByObjectType(PeriodResults, GetComponentLocation(), GetComponentLocation(), FQuat::Identity, ObjectQueryParams, CollisionRadiusShape, TraceParams);
		if (bHitSomething)
		{
			for (FHitResult fresult : PeriodResults)
			{
				FHitResult TResult = fresult;
				FHitResult TempResult;
				FCollisionShape CollisionLine;
				CollisionLine.ShapeType = ECollisionShape::Line;
				bool blocking = GetWorld()->SweepSingleByObjectType(TempResult, GetComponentLocation(), fresult.ImpactPoint, FQuat::Identity, ObjectBlockingParams, CollisionLine, TraceParams);//LineTraceSingleByObjectType(TempResult, this->GetActorLocation(), fresult.ImpactPoint,);
				if (!blocking)
				{
					if (!uniqActors.Contains(fresult.GetActor()))
					{
						uniqActors.Add(fresult.GetActor());
						if (APawn* pawn = Cast<APawn>(fresult.GetActor()))
						{
							//нашли какой то павн! надо проверить команду
							UActorComponent* Component = pawn->GetComponentByClass(UStatsComponent::StaticClass());
							if (Component)
							{
								UStatsComponent* TargetStatComponent = Cast<UStatsComponent>(Component);
								if (TargetStatComponent->TeamID == StatComponent->TeamID)
								{
									//своя команда
									FindedFriends.Add(pawn);

									if (!Friends.Contains(pawn))
									{
										NewFriend(pawn);
									}
									//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Green, false, UpdatePeriod, 0, 0.5f);
								}
								else
								{
									//чужая команда
									FindedEnemys.Add(pawn);

									if (!Enemys.Contains(pawn))
									{
										NewEnemy(pawn);
									}
									//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Orange, false, UpdatePeriod, 0, 0.5f);
								}
							}
							else
							{
								//без компонента статов
							}
						}

						//смотрим на прожектайлы
						if (AProjectile* Projectile = Cast<AProjectile>(fresult.GetActor()))
						{
							if (StatComponent->TeamID == Projectile->TeamID)
							{
								//своя команда
								FindedUsefulProjectiles.Add(Projectile);
								//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Green, false, UpdatePeriod, 0, 0.5f);
							}
							else
							{
								//чужая команда
								FindedDangerousProjectiles.Add(Projectile);
								//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Orange, false, UpdatePeriod, 0, 0.5f);
							}
						}

						//смотрим на зоны
						if (AStatModifyZone* Zone = Cast<AStatModifyZone>(fresult.GetActor()))
						{

							if (StatComponent->TeamID == Zone->TeamID)
							{
								//своя команда
								FindedUsefulZones.Add(Zone);
								//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Green, false, UpdatePeriod, 0, 0.5f);
							}
							else
							{
								//чужая команда
								FindedDangerousZones.Add(Zone);
								//DrawDebugLine(GetWorld(), GetComponentLocation(), fresult.ImpactPoint, FColor::Orange, false, UpdatePeriod, 0, 0.5f);
							}
						}


					}
				}


			}

		}
	}


	//пишем в массивы данные
	UsefulProjectiles = FindedUsefulProjectiles;
	DangerousProjectiles = FindedDangerousProjectiles;
	UsefulZones = FindedUsefulZones;
	DangerousZones = FindedDangerousZones;

	for (AActor* Friend : Friends)
	{
		if (!FindedFriends.Contains(Friend))
		{
			LostFriends.Add(Friend);
			FriendIsLost(Friend);
		}
	}
	Friends = FindedFriends;
	for (AActor* Enemy : Enemys)
	{
		if (!FindedEnemys.Contains(Enemy))
		{
			LostFriends.Add(Enemy);
			EnemyIsLost(Enemy);
		}
	}
	Enemys = FindedEnemys;
		
	



	if ((FDateTime::Now().operator-(TargetEnemySetupTime)).GetTotalMilliseconds() > UpdatePeriod * 3)
	{
		//определяем более подходящего врага
		switch (EnemyTargetSelectingRule)
		{
		case ETargetSelectingRule::TSR_DistanceNearest:
			FindNearestTarget(Enemys, EnemyIgnoreRule, EnemyIgnoreRuleTags, TargetEnemy);
			TargetEnemySetupTime = FDateTime::Now();
			break;
		case ETargetSelectingRule::TSR_DistanceFarthest:
			FindFarthestTarget(Enemys, EnemyIgnoreRule, EnemyIgnoreRuleTags, TargetEnemy);
			TargetEnemySetupTime = FDateTime::Now();
			break;
		case ETargetSelectingRule::TSR_Rating:
			FindByRatingTarget(Enemys, EnemyTargetRating, EnemyTagsTargetRating, EnemyIgnoreRule, EnemyIgnoreRuleTags, EnemyTargetSelectMaxRating, TargetEnemy);
			TargetEnemySetupTime = FDateTime::Now();
			break;
		default:
			break;
		}
	}



	if ((FDateTime::Now().operator-(TargetFriendSetupTime)).GetTotalMilliseconds() > UpdatePeriod * 3)
	{
		//определяем более подходящего друга
		switch (FriendTargetSelectingRule)
		{
		case ETargetSelectingRule::TSR_DistanceNearest:
			FindNearestTarget(Friends, FriendIgnoreRule, FriendIgnoreRuleTags, TargetFriend);
			TargetFriendSetupTime = FDateTime::Now();
			break;
		case ETargetSelectingRule::TSR_DistanceFarthest:
			FindFarthestTarget(Friends, FriendIgnoreRule, FriendIgnoreRuleTags, TargetFriend);
			TargetFriendSetupTime = FDateTime::Now();
			break;
		case ETargetSelectingRule::TSR_Rating:
			FindByRatingTarget(Friends, FriendTargetRating, FriendTagsTargetRating, FriendIgnoreRule, FriendIgnoreRuleTags, FriendTargetSelectMaxRating, TargetFriend);
			TargetFriendSetupTime = FDateTime::Now();
			break;
		default:
			break;
		}
	}






}


void UAI_Sight::CheckActor(AActor * Actors)
{
}


void UAI_Sight::FindNearestTarget(TArray<AActor*> Actors, TArray<FIgnoreRule> IgnoreRule, TArray<FIgnoreTagsRule> IgnoreRuleTags, AActor*& Target)
{
	Target = NULL;
	float minDistance = 99999.9f;

	for (AActor* Actor : Actors)
	{
		float DistanceSquared = FVector::Distance(GetOwner()->GetActorLocation(), Actor->GetActorLocation());

		UActorComponent* Component = Actor->GetComponentByClass(UStatsComponent::StaticClass());
		if (Component)
		{
			UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);

			bool ignore = false;
			if (IgnoreRule.Num() > 0)
			{
				for (FIgnoreRule rule : IgnoreRule)
				{
					float Current;
					float Check_Value = 0.0f;
					bool found;
					StatComponent->GetStatSelectedValueByTag(rule.StatTag, EStatValueType::SVT_Current, found, Current);
					switch (rule.IgnoreIfCurrentValueEqual)
					{
					case EStatsIgnoreValue::SIV_MaxValue:
						StatComponent->GetStatSelectedValueByTag(rule.StatTag, EStatValueType::SVT_MaxCurrent, found, Check_Value);
						break;
					case EStatsIgnoreValue::SIV_MinValue:
						StatComponent->GetStatSelectedValueByTag(rule.StatTag, EStatValueType::SVT_MinCurrent, found, Check_Value);
						break;
					default:
						break;
					}

					if (found)
					{
						if (Current == Check_Value)
							ignore = true;
					}

				}
			}

			if (IgnoreRuleTags.Num() > 0)
			{
				UActorComponent* AbilitiesComp = Actor->GetComponentByClass(UAbilitiesComponent::StaticClass());
				if (AbilitiesComp)
				{
					UAbilitiesComponent* AbilitiesComponent = Cast<UAbilitiesComponent>(AbilitiesComp);
					FGameplayTagContainer Tags = FGameplayTagContainer::CreateFromArray(AbilitiesComponent->GetAbilitiesAndEffectsTags());
					for (FIgnoreTagsRule rule : IgnoreRuleTags)
					{
						if (rule.HasAllTags)
						{
							if (Tags.HasAllExact(rule.Tags))
							{
								ignore = true;
							}
						}
						else
						{
							if (Tags.HasAnyExact(rule.Tags))
							{
								ignore = true;
							}
						}
					}
				}
			}
			if (!ignore)
			{
				if (DistanceSquared < minDistance)
				{
					Target = Actor;
					minDistance = DistanceSquared;
				}
			}
		}
	}
}

void UAI_Sight::FindFarthestTarget(TArray<AActor*> Actors, TArray<FIgnoreRule> IgnoreRule, TArray<FIgnoreTagsRule> IgnoreRuleTags,  AActor*& Target)
{
	Target = NULL;
	float MaxDistance = -1.0f;

	for (AActor* Actor : Actors)
	{
		float DistanceSquared = FVector::Distance(GetOwner()->GetActorLocation(), Actor->GetActorLocation());
		UActorComponent* Component = Actor->GetComponentByClass(UStatsComponent::StaticClass());
		if (Component)
		{
			UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);

			bool ignore = false;
			if (IgnoreRule.Num() > 0)
			{
				for (FIgnoreRule rule : IgnoreRule)
				{
					float Current;
					float Check_Value = 0.0f;
					bool found;
					StatComponent->GetStatSelectedValueByTag(rule.StatTag, EStatValueType::SVT_Current, found, Current);
					switch (rule.IgnoreIfCurrentValueEqual)
					{
					case EStatsIgnoreValue::SIV_MaxValue:
						StatComponent->GetStatSelectedValueByTag(rule.StatTag, EStatValueType::SVT_MaxCurrent, found, Check_Value);
						break;
					case EStatsIgnoreValue::SIV_MinValue:
						StatComponent->GetStatSelectedValueByTag(rule.StatTag, EStatValueType::SVT_MinCurrent, found, Check_Value);
						break;
					default:
						break;
					}

					if (found)
					{
						if (Current == Check_Value)
							ignore = true;
					}

				}
			}
			if (IgnoreRuleTags.Num() > 0)
			{
				UActorComponent* AbilitiesComp = Actor->GetComponentByClass(UAbilitiesComponent::StaticClass());
				if (AbilitiesComp)
				{
					UAbilitiesComponent* AbilitiesComponent = Cast<UAbilitiesComponent>(AbilitiesComp);
					FGameplayTagContainer Tags = FGameplayTagContainer::CreateFromArray(AbilitiesComponent->GetAbilitiesAndEffectsTags());
					for (FIgnoreTagsRule rule : IgnoreRuleTags)
					{
						if (rule.HasAllTags)
						{
							if (Tags.HasAllExact(rule.Tags))
							{
								ignore = true;
							}
						}
						else
						{
							if (Tags.HasAnyExact(rule.Tags))
							{
								ignore = true;
							}
						}
					}
				}
			}

			if (!ignore)
			{
				if (DistanceSquared > MaxDistance)
				{
					Target = Actor;
					MaxDistance = DistanceSquared;
				}
			}
		}

	}
}

void UAI_Sight::FindByRatingTarget(TArray<AActor*> Actors, TArray<FStatsRating> RatingRules, TArray<FTagsRating> TagsRatingRules, TArray<FIgnoreRule> IgnoreRule, TArray<FIgnoreTagsRule> IgnoreRuleTags, bool MaxRating, AActor*& Target)
{
	Target = NULL;
	float Rating;

	TArray<AActor*> SortedActors;
	OrderByDistance(Actors, SortedActors);

	if (MaxRating)
	{
		Rating = -1.0f;
	}
	else
	{
		Rating = 999999.9f;
	}
	for (AActor* Actor : SortedActors)
	{
		float currentRating = 0.0f;
		UActorComponent* Component = Actor->GetComponentByClass(UStatsComponent::StaticClass());
		if (Component)
		{
			UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
			bool ignore = false;
			if (IgnoreRule.Num() > 0)
			{
				for (FIgnoreRule rule : IgnoreRule)
				{
					float Current;
					float Check_Value = 0.0f;
					bool found;
					StatComponent->GetStatSelectedValueByTag(rule.StatTag, EStatValueType::SVT_Current, found, Current);
					switch (rule.IgnoreIfCurrentValueEqual)
					{
					case EStatsIgnoreValue::SIV_MaxValue:
						StatComponent->GetStatSelectedValueByTag(rule.StatTag, EStatValueType::SVT_MaxCurrent, found, Check_Value);
						break;
					case EStatsIgnoreValue::SIV_MinValue:
						StatComponent->GetStatSelectedValueByTag(rule.StatTag, EStatValueType::SVT_MinCurrent, found, Check_Value);
						break;
					default:
						break;
					}

					if (found)
					{
						if (Current == Check_Value)
							ignore = true;
					}

				}

			}
			if (IgnoreRuleTags.Num() > 0)
			{
				UActorComponent* AbilitiesComp = Actor->GetComponentByClass(UAbilitiesComponent::StaticClass());
				if (AbilitiesComp)
				{
					UAbilitiesComponent* AbilitiesComponent = Cast<UAbilitiesComponent>(AbilitiesComp);
					FGameplayTagContainer Tags = FGameplayTagContainer::CreateFromArray(AbilitiesComponent->GetAbilitiesAndEffectsTags());
					for (FIgnoreTagsRule rule : IgnoreRuleTags)
					{
						if (rule.HasAllTags)
						{
							if (Tags.HasAllExact(rule.Tags))
							{
								ignore = true;
							}
						}
						else
						{
							if (Tags.HasAnyExact(rule.Tags))
							{
								ignore = true;
							}
						}
					}
				}
			}





			if (!ignore)
			{
				if (RatingRules.Num() > 0)
				{
					for (FStatsRating Rule : RatingRules)
					{
						float StatRating = 0.0f;
						bool StatFound = false;
						switch (Rule.StatsValue)
						{
						case EStatsSelectingValue::SSV_CurrentValue:
						{
							StatComponent->GetStatSelectedValueByTag(Rule.StatTag, EStatValueType::SVT_Current, StatFound, StatRating);

						}
						break;

						case EStatsSelectingValue::SSV_MaxValue:
						{
							StatComponent->GetStatSelectedValueByTag(Rule.StatTag, EStatValueType::SVT_MaxCurrent, StatFound, StatRating);

						}
						break;

						case EStatsSelectingValue::SSV_Percent:
						{
							float MaxVal = 0.0f;
							float CurVal = 0.0f;
							StatComponent->GetStatSelectedValueByTag(Rule.StatTag, EStatValueType::SVT_Current, StatFound, CurVal);
							StatComponent->GetStatSelectedValueByTag(Rule.StatTag, EStatValueType::SVT_MaxCurrent, StatFound, MaxVal);
							if (StatFound)
							{
								StatRating = CurVal / MaxVal;
							}

						}
						break;
						default:
							break;
						}
						if (StatFound)
						{
							StatRating = StatRating * Rule.RatingMultiplier;
							currentRating += StatRating;

						}


					}
				}


				if (TagsRatingRules.Num() > 0)
				{
					UActorComponent* AbilitiesComp = Actor->GetComponentByClass(UAbilitiesComponent::StaticClass());
					if (AbilitiesComp)
					{
						UAbilitiesComponent* AbilitiesComponent = Cast<UAbilitiesComponent>(AbilitiesComp);
						FGameplayTagContainer Tags = FGameplayTagContainer::CreateFromArray(AbilitiesComponent->GetAbilitiesAndEffectsTags());
						for (FTagsRating TagRating : TagsRatingRules)
						{
							if (Tags.HasTagExact(TagRating.Tag))
							{
								currentRating += TagRating.TagRaiting;
							}
						}
					}
				}


				if (MaxRating)
				{
					if (currentRating > Rating)
					{
						Target = Actor;
						Rating = currentRating;
					}
				}
				else
				{
					if (currentRating < Rating)
					{
						Target = Actor;
						Rating = currentRating;
					}
				}
			}
		}
	}
}

void UAI_Sight::OrderByDistance(TArray<AActor*> Actors, TArray<AActor*>& OutActors)
{
	AActor* CompOwner = GetOwner();
	Actors.Sort([CompOwner](const AActor& A, const AActor& B)
	{
		float DistanceA = A.GetDistanceTo(CompOwner);
		float DistanceB = B.GetDistanceTo(CompOwner);
		return DistanceA < DistanceB;
	
	});
	OutActors = Actors;
}


