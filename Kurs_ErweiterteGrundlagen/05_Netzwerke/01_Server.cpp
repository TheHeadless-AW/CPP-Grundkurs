#include <iostream>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

void starteServer() {
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "Fehler bei der Initialisierung von Winsock\n";
        return;
    }

    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == INVALID_SOCKET) {
        std::cerr << "Fehler beim Erstellen des Sockets\n";
        WSACleanup();
        return;
    }

    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(12345);

    if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        std::cerr << "Binden fehlgeschlagen\n";
        closesocket(serverSocket);
        WSACleanup();
        return;
    }

    if (listen(serverSocket, 5) == SOCKET_ERROR) {
        std::cerr << "Fehler beim Warten auf Verbindungen\n";
        closesocket(serverSocket);
        WSACleanup();
        return;
    }

    std::cout << "Server lauscht auf Port 12345...\n";

    SOCKET clientSocket;
    sockaddr_in clientAddr;
    int clientAddrLen = sizeof(clientAddr);

    clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddr, &clientAddrLen);
    if (clientSocket == INVALID_SOCKET) {
        std::cerr << "Verbindungsaufbau fehlgeschlagen\n";
        closesocket(serverSocket);
        WSACleanup();
        return;
    }

    std::cout << "Client verbunden\n";

    // Hier die Kommunikation mit dem Client verarbeiten...

    closesocket(clientSocket);
    closesocket(serverSocket);
    WSACleanup();
}
