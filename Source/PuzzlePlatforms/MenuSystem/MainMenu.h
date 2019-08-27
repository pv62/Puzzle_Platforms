// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuInterface.h"
#include "MainMenu.generated.h"

class UButton;

UCLASS()
class PUZZLEPLATFORMS_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void SetMenuInterface(IMenuInterface* MenuInterface);

protected:
	virtual bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	UButton* Host;

	UPROPERTY(meta = (BindWidget))
	UButton* Join;

private:
	UFUNCTION()
	void HostServer();

	IMenuInterface* MenuInterface;
};
