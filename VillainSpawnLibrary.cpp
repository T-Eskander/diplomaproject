// VillainSpawnLibrary.cpp
#include "VillainSpawnLibrary.h"
#include "VillainCharacter.h" // Подключите заголовочный файл вашего злодея

void UVillainSpawnLibrary::SpawnVillain(UWorld* World, TSubclassOf<class AVillainCharacter> VillainClass, const FVector& SpawnLocation)
{
    if (World && VillainClass)
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
        
        AVillainCharacter* NewVillain = World->SpawnActor<AVillainCharacter>(VillainClass, SpawnLocation, FRotator::ZeroRotator, SpawnParams);
        
        if (NewVillain)
        {
            // Дополнительные действия, если необходимо
        }
    }
}
