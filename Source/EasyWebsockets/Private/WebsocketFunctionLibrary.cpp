// Copyright 2022 Chris Ringenberg https://www.ringenberg.dev/

#include "WebsocketFunctionLibrary.h"

#include "IWebSocket.h"
#include "Websocket.h"
#include "WebSocketsModule.h"

UWebSocket* UWebSocketFunctionLibrary::CreateWebSocket(FString ServerUrl, FString ServerProtocol)
{
	return CreateWebSocketWithHeaders(ServerUrl, {}, ServerProtocol);
}

UWebSocket* UWebSocketFunctionLibrary::CreateWebSocketWithHeaders(FString ServerUrl, TMap<FString, FString> UpgradeHeaders, FString ServerProtocol /* = TEXT("ws") */)
{
	const TSharedPtr<IWebSocket> ActualSocket = FModuleManager::LoadModuleChecked<FWebSocketsModule>(TEXT("WebSockets")).CreateWebSocket(ServerUrl, ServerProtocol, UpgradeHeaders);
	UWebSocket* const WrapperSocket = NewObject<UWebSocket>();
	WrapperSocket->InitWebSocket(ActualSocket);
	return WrapperSocket;
}
