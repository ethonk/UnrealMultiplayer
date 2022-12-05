// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionDelegates.h"
#include "Interfaces/OnlineSessionInterface.h"

#include "MenuSystemCharacter.generated.h"


UCLASS(config=Game)
class AMenuSystemCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

public:
	AMenuSystemCharacter();
	

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	//
	// == SESSION RELATED ==
	//
	
public:
	// pointer to the online session interface
	IOnlineSessionPtr OnlineSessionInterface;

protected:
	// create a steam session
	UFUNCTION(BlueprintCallable)
	void CreateGameSession();

	// join a steam session
	UFUNCTION(BlueprintCallable)
	void JoinGameSession();

	// called when the session is created and completed
	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful);
	// called when sessions have been found
	void OnFindSessionsComplete(bool bWasSuccessful);
	// called when session is joined
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);

private:
	// delegate for when session is completed.
	FOnCreateSessionCompleteDelegate CreateSessionCompleteDelegate;
	// delegate for when sessions are found
	FOnFindSessionsCompleteDelegate FindSessionsCompleteDelegate;
	// delegate for when session is successfully joined
	FOnJoinSessionCompleteDelegate JoinSessionCompleteDelegate;

	// session search results
	TSharedPtr<FOnlineSessionSearch> SessionSearch;
};

