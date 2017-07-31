// Copyright 2017 Daniel Dickson (Fluroclad). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UEVCharacter.generated.h"

UCLASS()
class UEVOX_API AUEVCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AUEVCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Returns CameraBoom Subobject
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	// Returns FollowCamera Subobject
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Move forwards/backwards input
	void MoveForward(float Value);

	// Move side to side
	void MoveRight(float Value);

	// Turn at rate
	void TurnAtRate(float Rate);

	// Look up at rate
	void LookUpAtRate(float Rate);

private:

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
		float BaseTurnRate = 45.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
		float BaseLookUpRate = 45.f;

protected:
private:
	
};
