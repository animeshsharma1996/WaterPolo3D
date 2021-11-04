// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class WATERPOLO_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
		virtual bool Initialize();

	UPROPERTY(meta = (BindWidget))
		class UButton* playButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* settingsButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* exitButton;

	UFUNCTION()
		void PlayButtonClicked();
		void SettingsButtonClicked();
		void ExitButtonClicked();
};
