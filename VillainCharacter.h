// VillainSpawnLibrary.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VillainSpawnLibrary.generated.h"

UCLASS()
class GAME1_API UVillainSpawnLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Villain")
    static void SpawnVillain(UWorld* World, TSubclassOf<class AVillainCharacter> VillainClass, const FVector& SpawnLocation);
};
