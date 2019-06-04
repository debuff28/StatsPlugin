// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "StatsComponent.h"
#include "Projectile_Base.h"
#include "StatModifyZone.h"
#include "AI_Sight.generated.h"

UENUM(BlueprintType)
enum class EStatsSelectingValue : uint8
{
	SSV_CurrentValue				UMETA(DisplayName = "CurrentValue"),
	SSV_MaxValue					UMETA(DisplayName = "MaxValue"),
	SSV_Percent						UMETA(DisplayName = "Percent"),
};

UENUM(BlueprintType)
enum class EStatsIgnoreValue : uint8
{
	SIV_MaxValue				UMETA(DisplayName = "MaxValue"),
	SIV_MinValue				UMETA(DisplayName = "MinValue"),
};

USTRUCT(BlueprintType)
struct FIgnoreRule
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		FGameplayTag StatTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		EStatsIgnoreValue IgnoreIfCurrentValueEqual;

};

USTRUCT(BlueprintType)
struct FIgnoreTagsRule
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		FGameplayTagContainer Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		bool HasAllTags;

};

USTRUCT(BlueprintType)
struct FStatsRating
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		FGameplayTag StatTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		EStatsSelectingValue StatsValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		float RatingMultiplier = 1.0f;
};

USTRUCT(BlueprintType)
struct FTagsRating
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		FGameplayTag Tag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		float TagRaiting = 1.0f;
};

UENUM(BlueprintType)
enum class ETargetSelectingRule : uint8
{
	TSR_DistanceNearest				UMETA(DisplayName = "Nearest"),
	TSR_DistanceFarthest			UMETA(DisplayName = "Farthest"),
	TSR_Rating						UMETA(DisplayName = "Rating"),
};

UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class STATSPLUGIN_API UAI_Sight : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAI_Sight();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SightConfig")
		UClass *ActorClassFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SightConfig")
		float UpdatePeriod = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SightConfig")
		float SightRadius = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SightConfig")
		float EnemyLostTime = 15;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SightConfig")
		bool FastSight = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "ECollisionChannel"), Category = "SightConfig")
		TArray<TEnumAsByte<ECollisionChannel>> SightObjectTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "ECollisionChannel"), Category = "SightConfig")
		TArray<TEnumAsByte<ECollisionChannel>> BlockingSightObjectTypes;




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Enemy")
		ETargetSelectingRule EnemyTargetSelectingRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Enemy|Rating")
		TArray<FStatsRating> EnemyTargetRating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Enemy|Rating")
		TArray<FTagsRating> EnemyTagsTargetRating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Enemy|Rating")
		bool EnemyTargetSelectMaxRating = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Enemy|Ignore")
		TArray<FIgnoreRule> EnemyIgnoreRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Enemy|Ignore")
		TArray<FIgnoreTagsRule> EnemyIgnoreRuleTags;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Frined")
		ETargetSelectingRule FriendTargetSelectingRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Frined|Rating")
		TArray<FStatsRating> FriendTargetRating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Frined|Rating")
		TArray<FTagsRating> FriendTagsTargetRating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Frined|Rating")
		bool FriendTargetSelectMaxRating = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Frined|Ignore")
		TArray<FIgnoreRule> FriendIgnoreRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TargetSelectingConfig|Frined|Ignore")
		TArray<FIgnoreTagsRule> FriendIgnoreRuleTags;




	UPROPERTY(BlueprintReadWrite, Category = "Info")
		UStatsComponent* StatComponent;

	UPROPERTY(BlueprintReadWrite, Category = "SightConfig")
		TArray<AActor*> ActorsToIgnore;

	UPROPERTY(BlueprintReadOnly, Category = "SightConfig")
		TArray<AActor*> FindedActors;

	UPROPERTY(BlueprintReadOnly, Category = "SightResult")
		TArray<AActor*> Friends;

	UPROPERTY(BlueprintReadOnly, Category = "SightResult")
		TArray<AActor*> LostFriends;

	UPROPERTY(BlueprintReadOnly, Category = "SightResult")
		TArray<AActor*> Enemys;

	UPROPERTY(BlueprintReadOnly, Category = "SightResult")
		TArray<AActor*> LostEnemys;

	UPROPERTY(BlueprintReadOnly, Category = "SightResult")
		TArray<AActor*> UsefulProjectiles;

	UPROPERTY(BlueprintReadOnly, Category = "SightResult")
		TArray<AActor*> DangerousProjectiles;

	UPROPERTY(BlueprintReadOnly, Category = "SightResult")
		TArray<AActor*> UsefulZones;

	UPROPERTY(BlueprintReadOnly, Category = "SightResult")
		TArray<AActor*> DangerousZones;

	UPROPERTY(BlueprintReadOnly, Category = "SightResult")
		AActor* TargetEnemy;

	UPROPERTY()
		FDateTime TargetEnemySetupTime;

	UPROPERTY()
		FDateTime TargetFriendSetupTime;

	UPROPERTY(BlueprintReadOnly, Category = "SightResult")
		AActor* TargetFriend;


	TArray<TEnumAsByte<EObjectTypeQuery>> OTQ;
	FCollisionObjectQueryParams ObjectQueryParams;
	FCollisionObjectQueryParams ObjectBlockingParams;
	FCollisionShape CollisionRadiusShape;


	UPROPERTY()
		FHitResult HitResult;
	UPROPERTY()
		TArray<FHitResult> PeriodResults;



	FCollisionQueryParams TraceParams;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "SightAction")
		void Update();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "SightAction")
		void FindNearestTarget(TArray<AActor*> Actors, TArray<FIgnoreRule> IgnoreRule, TArray<FIgnoreTagsRule> IgnoreRuleTags, AActor*& Target);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "SightAction")
		void FindFarthestTarget(TArray<AActor*> Actors, TArray<FIgnoreRule> IgnoreRule, TArray<FIgnoreTagsRule> IgnoreRuleTags, AActor*& Target);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "SightAction")
		void FindByRatingTarget(TArray<AActor*> Actors, TArray<FStatsRating> RatingRules, TArray<FTagsRating> TagsRatingRules, TArray<FIgnoreRule> IgnoreRule, TArray<FIgnoreTagsRule> IgnoreRuleTags, bool MaxRating, AActor*& Target);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "SightAction")
		void OrderByDistance(TArray<AActor*> Actors, TArray<AActor*>& OutActors);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "SightAction")
		void CheckActor(AActor* Actors);

	UFUNCTION(Category = "SightEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void NewFriend(AActor* Actor);

	UFUNCTION(Category = "SightEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void NewEnemy(AActor* Actor);

	UFUNCTION(Category = "SightEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void FriendIsLost(AActor* Actor);

	UFUNCTION(Category = "SightEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void EnemyIsLost(AActor* Actor);


};
