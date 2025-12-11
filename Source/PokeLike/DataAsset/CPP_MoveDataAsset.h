// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CPP_MoveDataAsset.generated.h"

UENUM(BlueprintType) 
enum class EMyDamageType : uint8
{
	Option_A UMETA(DisplayName = "Normal"),
	Option_B UMETA(DisplayName = "Fire"),
	Option_C UMETA(DisplayName = "Water"),
	Option_D UMETA(DisplayName = "Grass")
};

UCLASS(BlueprintType)
class POKELIKE_API UCPP_MoveDataAsset : public UDataAsset
{
	GENERATED_BODY()
    
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveData")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveData")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveData")
	EMyDamageType DamageType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveData")
	int MovePP;
};
