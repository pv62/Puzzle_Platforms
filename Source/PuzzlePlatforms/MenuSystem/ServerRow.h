// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ServerRow.generated.h"

class UMainMenu;
class UTextBlock;
class UButton;

UCLASS()
class PUZZLEPLATFORMS_API UServerRow : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void Setup(UMainMenu* InParent, uint32 InIndex);

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ServerName;

	UPROPERTY(BlueprintReadOnly)
	bool Selected = false;

protected:
	UPROPERTY(meta = (BindWidget))
	UButton* RowButton;

private:
	UPROPERTY()
	UMainMenu* Parent; 

	uint32 Index;

	UFUNCTION()
	void OnClicked();
};