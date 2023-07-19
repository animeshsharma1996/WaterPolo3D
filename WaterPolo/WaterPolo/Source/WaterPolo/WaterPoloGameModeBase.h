// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "WaterPoloGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class WATERPOLO_API AWaterPoloGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
    public:
        /** Remove the current menu widget and create a new one from the specified class, if provided. */
        UFUNCTION(BlueprintCallable, Category = "Water Polo")
            void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

    protected:
        /** Called when the game starts. */
        virtual void BeginPlay() override;

        /** The widget class we will use as our menu when the game starts. */
        UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Water Polo")
            TSubclassOf<UUserWidget> startingWidgetClass;

        /** The widget instance that we are using as our menu. */
        UPROPERTY()
            UUserWidget* currentWidget;
};
