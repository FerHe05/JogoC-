// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PersonagemTPS.generated.h"

UCLASS()
class GAME_API APersonagemTPS : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APersonagemTPS();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//---------------------Mover Para Frente---------------------
	void MoverParaFrente(float Valor);
	void MoverDireita(float Valor);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		class UCameraComponent* CameraPersonagem;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CameraBoom")
		class USpringArmComponent* SpringArmCamera;

	UPROPERTY(BlueprintReadOnly, Category = "Pulo")
		bool bEstaPulando;


	void Agachar();
	void Levantar();
	void Pular();
	void PararPulo();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
