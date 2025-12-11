// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/Pokemon.h"
#include "CPP_PokemonBase.generated.h"

UCLASS()
class POKELIKE_API ACPP_PokemonBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_PokemonBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	
};
