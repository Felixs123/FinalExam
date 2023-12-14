#include "BobAndAliceGameSubsystem.h"

void UBobAndAliceGameSubsystem::Initialize(
    FSubsystemCollectionBase &Collection) {
  Super::Initialize(Collection);
}

void UBobAndAliceGameSubsystem::Deinitialize() { Super::Deinitialize(); }

void UBobAndAliceGameSubsystem::SaveIsPickedToSubsystem(bool PickedUp)
{
	IsPickedup = PickedUp;
}

bool UBobAndAliceGameSubsystem::GetLocalSavedPickedUp() const
{
	return IsPickedup;
}

void UBobAndAliceGameSubsystem::SaveTimeToSubsystem(float Time)
{
	rTime = Time;
}

float UBobAndAliceGameSubsystem::GetLocalSavedTime() const
{
	return rTime;
}

void UBobAndAliceGameSubsystem::SaveDeliveredToSubsystem(bool Delivered)
{
	IsDelivered = Delivered;
}

bool UBobAndAliceGameSubsystem::GetLocalSavedDelivered() const
{
	return IsDelivered;
}
