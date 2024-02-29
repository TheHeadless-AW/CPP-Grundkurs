#include <WinSock2.h>
#include <iostream>
#include <WS2tcpip.h>
#include <string>

using namespace std;

#pragma comment(lib, "ws2_32.lib")

void starteClient() {
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        cerr << "Fehler bei der Initialisierung von Winsock\n";
        return;
    }

    SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == INVALID_SOCKET) {
        cerr << "Fehler beim Erstellen des Sockets\n";
        WSACleanup();
        return;
    }

    sockaddr_in serverAddr{};
    serverAddr.sin_family = AF_INET;
    if (inet_pton(AF_INET, "127.0.0.1", &serverAddr.sin_addr) != 1) {
        cerr << "Ungueltige IP-Adresse\n";
        closesocket(clientSocket);
        WSACleanup();
        return;
    }

    serverAddr.sin_port = htons(12345);

    if (connect(clientSocket, reinterpret_cast<struct sockaddr*>(&serverAddr), sizeof(serverAddr)) == SOCKET_ERROR) {
        cerr << "Verbindung zum Server fehlgeschlagen\n";
        closesocket(clientSocket);
        WSACleanup();
        return;
    }

    cout << "Mit Server verbunden\n";

    while (true) {
        cout << "Geben Sie eine Nachricht ein (oder 'Beenden' zum Schliessen): ";
        string nachricht;
        getline(cin, nachricht);

        // Nachricht an den Server senden
        send(clientSocket, nachricht.c_str(), nachricht.size(), 0);

        if (nachricht == "Beenden") {
            break;  // Schleife verlassen, wenn der Client "Beenden" eingibt
        }
    }

    closesocket(clientSocket);
    WSACleanup();
}
