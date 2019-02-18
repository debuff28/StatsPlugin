// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "StatsComponent.h"
#include "EnumsObject.h"
#include "StructsObject.h"
#include "Stats_Effect_Base.h"
#include "Components/BoxComponent.h"
#include "StatModifyZone.generated.h"


UENUM(BlueprintType, Category = "")
enum class EZoneType : uint8
{
	ZT_PeriodAplication 		UMETA(DisplayName = "PeriodAplication"),
	ZT_OnEnterAplication		UMETA(DisplayName = "OnEnterAplication"),
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOneParamsDelegateZone, AActor*, actor);

UCLASS()
class STATSPLUGIN_API AStatModifyZone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStatModifyZone();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "ECollisionChannel"), Category = "Zone")
		FName TeamID;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Collision)
		UBoxComponent* ZoneCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "ECollisionChannel"), Category = "Zone|Behavior")
		TArray<TEnumAsByte<ECollisionChannel>> ReactObjectTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone|Behavior")
		TArray<EReactRule> ReactionRules;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone|Behavior")
		TArray<EZoneType> ZoneType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "ECollisionChannel"), Category = "Zone|Behavior")
		bool RemoveAplicatedEffectOnLeaveZone = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone|Behavior")
		float CheckCollisionPeriod = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone|Behavior")
		bool DestroyOnReact = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone|Modification")
		TArray <FStatsModifications> StatsModifications;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone|Effects")
		TArray<TSubclassOf<AStats_Effect_Base>> Effects;

	UPROPERTY(BlueprintReadWrite)
		TArray<FZoneAplicatedEffects> AplicatedEffects;

	UPROPERTY()
		TArray<AActor*> OverlapedActors;


		FCollisionObjectQueryParams ObjectQueryParams;


		FCollisionQueryParams TraceParams;

		FCollisionShape CollisionShape;

	UPROPERTY()
		TArray<FHitResult> HitResults;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void ZoneApplyModsAndEffects(TArray<FHitResult> ReactHitResults);

	UFUNCTION()
		void ZoneApplyModsAndEffectsToActor(AActor* Actor);

	UFUNCTION()
		void CheckCollision();

	UFUNCTION()
		void NewActorInZone(AActor* NewActor);

	UFUNCTION()
		void ActorLeaveZone(AActor* ActorLeave);

	UPROPERTY(BlueprintAssignable)
		FOneParamsDelegateZone OnNewActorInZone;

	UPROPERTY(BlueprintAssignable)
		FOneParamsDelegateZone OnActorLeaveZone;
};
