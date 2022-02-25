// Copyright 2022 Chris Ringenberg https://www.ringenberg.dev/

#pragma once

#include "CoreMinimal.h"

#include "WebsocketFunctionLibrary.generated.h"

class UWebSocket;

UCLASS(MinimalAPI)
class UWebSocketFunctionLibrary final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Easy WebSockets")
	static UWebSocket* CreateWebSocket(FString ServerUrl, FString ServerProtocol = TEXT("ws"));

	UFUNCTION(BlueprintCallable, Category = "Easy WebSockets")
	static UWebSocket* CreateWebSocketWithHeaders(FString ServerUrl, TMap<FString, FString> UpgradeHeaders, FString ServerProtocol = TEXT("ws"));
};