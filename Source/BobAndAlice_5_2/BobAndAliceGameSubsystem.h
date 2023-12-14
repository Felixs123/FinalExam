// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BobAndAliceGameSubsystem.generated.h"

UCLASS()
class BOBANDALICE_5_2_API UBobAndAliceGameSubsystem : public UGameInstanceSubsystem
{
  GENERATED_BODY()

public:
  virtual void Initialize(FSubsystemCollectionBase &Collection) override;

  virtual void Deinitialize() override;

  UFUNCTION(BlueprintCallable)
  void SaveIsPickedToSubsystem(bool PickedUp);
  
  UFUNCTION(BlueprintCallable,BlueprintPure)
  bool GetLocalSavedPickedUp() const;

  UFUNCTION(BlueprintCallable)
  void SaveTimeToSubsystem(float Time);
  
  UFUNCTION(BlueprintCallable,BlueprintPure)
  float GetLocalSavedTime() const;

  UFUNCTION(BlueprintCallable)
  void SaveDeliveredToSubsystem(bool Delivered);
  
  UFUNCTION(BlueprintCallable,BlueprintPure)
  bool GetLocalSavedDelivered() const;

private:
  bool IsPickedup;
  float rTime = 45;
  bool IsDelivered;
};
