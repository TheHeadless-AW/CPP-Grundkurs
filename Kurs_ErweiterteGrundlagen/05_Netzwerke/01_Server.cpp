#include <iostream>
#include <winsock2.h>
#include <string>
#include <WS2tcpip.h>
using namespace std;

#pragma comment(lib, "ws2_32.lib")

void starteServer() {
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        cerr << "Fehler bei der Initialisierung von Winsock\n";
        return;
    }

    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == INVALID_SOCKET) {
        cerr << "Fehler beim Erstellen des Sockets\n";
        WSACleanup();
        return;
    }

    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(12345);

    if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        cerr << "Binden fehlgeschlagen\n";
        closesocket(serverSocket);
        WSACleanup();
        return;
    }

    if (listen(serverSocket, 5) == SOCKET_ERROR) {
        cerr << "Fehler beim Warten auf Verbindungen\n";
        closesocket(serverSocket);
        WSACleanup();
        return;
    }

    // Server lauscht auf Port 12345...
    cout << "Server lauscht auf Port 12345...\n";

    while (true) {
        SOCKET clientSocket;
        sockaddr_in clientAddr;
        int clientAddrLen = sizeof(clientAddr);

        clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddr, &clientAddrLen);
        if (clientSocket == INVALID_SOCKET) {
            cerr << "Verbindungsaufbau fehlgeschlagen\n";
            closesocket(serverSocket);
            WSACleanup();
            return;
        }

        char clientIp[INET_ADDRSTRLEN];
        inet_ntop(AF_INET, &(clientAddr.sin_addr), clientIp, INET_ADDRSTRLEN);

        cout << "Client verbunden: " << clientIp << " - Port: " << ntohs(clientAddr.sin_port) << endl;

        // Kommunikation mit dem Client verarbeiten
        char buffer[4096];
        int bytesReceived;

        do {
            bytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0);
            if (bytesReceived == SOCKET_ERROR) {
                cerr << "Fehler beim Empfangen der Nachricht vom Client\n";
            }
            else if (bytesReceived > 0) {
                buffer[bytesReceived] = '\0'; // Null-terminieren, um als Zeichenkette zu behandeln
                cout << "Vom Client empfangen: " << clientIp << " - " << buffer << endl;
            }

        } while (bytesReceived > 0 && strcmp(buffer, "Beenden") != 0);

        cout << "Client hat 'Beenden' eingegeben. Verbindung wird geschlossen.\n";

        closesocket(clientSocket);

        if (strcmp(buffer, "Beenden") == 0) {
            break;  // Server beenden, wenn der Client "Beenden" eingegeben hat
        }
    }

    closesocket(serverSocket);
    WSACleanup();
}