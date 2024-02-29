#include <iostream>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

void starteClient() {
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "Fehler bei der Initialisierung von Winsock\n";
        return;
    }

    SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == INVALID_SOCKET) {
        std::cerr << "Fehler beim Erstellen des Sockets\n";
        WSACleanup();
        return;
    }

    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");  // Hier die IP-Adresse des Servers eintragen
    serverAddr.sin_port = htons(12345);

    if (connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        std::cerr << "Verbindung zum Server fehlgeschlagen\n";
        closesocket(clientSocket);
        WSACleanup();
        return;
    }

    std::cout << "Mit Server verbunden\n";

    // Hier die Kommunikation mit dem Server verarbeiten...

    closesocket(clientSocket);
    WSACleanup();
}
