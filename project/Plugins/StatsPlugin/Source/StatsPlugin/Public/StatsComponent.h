// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/Texture2D.h"
#include "GameplayTagContainer.h"
#include "Kismet/KismetMathLibrary.h"
#include "Delegates/Delegate.h"
#include "EnumsObject.h"
#include "StructsObject.h"
#include "Stats_Effect_Base.h"
#include "StatsComponent.generated.h"



	
USTRUCT(BlueprintType)
struct FStatsEffects
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		TArray<AStats_Effect_Base*> CurrentEffectsActors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		float TimeToEnd;

};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStatModDelegate, FGameplayTag, tag, TArray<FGameplayTag>, AdditinsTags, float, deltaChange);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatDelegate, FGameplayTag, tag);



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATSPLUGIN_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatsComponent();


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, replicated, Category = "Info")
		FName Name;

	/**
	TeamID of Parent Actor

	Const Neutrals TeamID = Neutral
	Const Other TeamID = None

	If an actor does not have a "StatsComponent" component, its TeamID is considered "None"

	*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, replicated, Category = "Info")
		FName TeamID;

	/**
	stats are based on gameplay tags.
	Available to edit the original values ​​of stats, which are used for initialization.

	regenRule - regeneration rule
	Constant = stat is constantly updated
	PauseRegenAfterModify = stat ceases to regenerate for a while (RegenPauseLenght) after modifying this stat

	**For example, when a player takes damage, his health is stopped for a few seconds.**

	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Stats")
		TMap<FGameplayTag, FStatsDatabase> Stats;

	UPROPERTY(BlueprintReadWrite, Category = "Stats")
		TMap<FGameplayTag, FStatsEffects> Effects;
	
	/**
	when a stat is modified there is an opportunity to influence the melon modification.

	InputModifyTag - modification of this stat will be changed

	Affects - an array affecting the change InputModifyTag

	**For example, armor affects incoming damage.**
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "StatsInputModifiers")
		TArray <FStatInputModifyAffects> InputModifiers;


	/**
	redirect incoming changes to stats

	the redirection is applied last in the list, provided that the selected value is greater than the minimum.

	***********
	For example:
	we have stats shield1, shield2, and an array of redirection modifications [shield1, shield2]. 
	Shield2 is the last in the array.
	We have HP changes coming in, which are redirected to the shields.
	At first, redirects will occur on shield2. As soon as the shield2 reaches the minimum value, the redirects will pass to the shield1.
	***********

	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "StatsInputRetargets")
		TArray <FInputModifyRetargeting> InputRetargets;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Networking")
		float ReplicateStatsPeriod = 0.1f;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/**
	Initiate all stats
	Set all *curren valuses = *base valuse
	You can use for example when lvlup, statrt pvp, etc
	 */
	UFUNCTION(BlueprintCallable, Category = "StatsAction")
		void InitStats();

	/**
	Get stat by tag
	Returns all values of stat
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = true, Category = "StatsAction")
		void GetStatByTag(FGameplayTag Stat, bool& found, FStatsDatabase& StatsValues);

	/**
	Get stat value by tag
	Returns selected value of stat
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = true, Category = "StatsAction")
		void GetStatSelectedValueByTag(FGameplayTag Stat, EStatValueType ValueToReturn, bool& found, float& StatsValues);

	/** 
	Search for effects by tag contained in additional information
	can use for example to check whether the character is stunned
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = true, Category = "StatsAction")
		void GetEffectsByInfoTag(FGameplayTag InfoTag, bool& found, TArray<AStats_Effect_Base*>& FoundedEffects);

	UFUNCTION(NetMulticast, Unreliable)
		void Client_TestReplicateStats(const TArray<FReplicateTmapSupportStruct>& ArrayOfStats);
		virtual void Client_TestReplicateStats_Implementation(const TArray<FReplicateTmapSupportStruct>& ArrayOfStats);

	UFUNCTION(NetMulticast, Reliable)
		void Client_onStatMinValue(const FGameplayTag tag);
		virtual void Client_onStatMinValue_Implementation(const FGameplayTag tag);
		virtual bool Client_onStatMinValue_Validate(const FGameplayTag tag);

	UFUNCTION(Server, Reliable, BlueprintCallable, WithValidation, Category = "StatsAction")
			void Server_SetName(const FName NewName);
			virtual void Server_SetName_Implementation(const FName NewName);
			virtual bool Server_SetName_Validate(const FName NewName);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "StatsAction")
			void SetTeam(const FName NewTeam);
			

	UFUNCTION()
	void ReplicateTimer();

	/** How Modify stat? 
	 inputs
	 Stat - gameplay tag stat which will change
	 ChangeType - how the stat will change
	 ValueType - which value will change
	 AffectingStats - What value influence the driving value?
	 clear - Do stats inside the component affect the change?
	 AdditionTags - Additional tags transmitted upon change. For example, you can say that this is fire damage.

	 Returs
	 Modify - was there a change?
	 deltaChangeValue - Delta change
	 ResultValue - new value after change

	 !The changes in values will be applied in turn to the incoming value, after which the resulting value will be applied to the specified stat!

	*/
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "StatsAction")
		void ModifyStat(AActor* initiator, FGameplayTag Stat, float inputValue, EStatChangeType ChangeType, EStatValueType ValueType, TArray<FStatsAffectingParameters> AffectingStats, bool& Modify, float& deltaChangeValue, float& ResultValue, FGameplayTag& ChangedStat, bool clear, TArray<FGameplayTag> AdditionTags);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "StatsAction")
		void SetRegenEnable(FGameplayTag Stat, bool NewValue);

	UFUNCTION()
		void SetStatValue(FGameplayTag Stat, EStatValueType ValueType, float NewValue);
	UFUNCTION()
		void AddEffect(AStats_Effect_Base* EffectBase, TMap<FGameplayTag, FStatsEffects> EffectsTemp);

	/** 
	 called when any stat has reached a minimum
	*/
	UPROPERTY(BlueprintAssignable)
		FStatDelegate onStatMinValue;
	/**
	 called when any stat is changed
	*/
	UPROPERTY(BlueprintAssignable)
		FStatModDelegate OnStatChange;

	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;

	

		
}; 
