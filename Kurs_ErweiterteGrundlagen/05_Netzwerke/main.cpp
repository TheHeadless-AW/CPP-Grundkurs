#include <iostream>
#include <string>

void starteServer();
void starteClient();

int main() {
    std::cout << "Willkommen zur Client-Server-Anwendung!\n";

    std::string auswahl;

    std::cout << "Möchten Sie als Server (s) oder als Client (c) starten? ";
    std::cin >> auswahl;

    if (auswahl == "s" || auswahl == "S") {
        starteServer();
    }
    else if (auswahl == "c" || auswahl == "C") {
        starteClient();
    }
    else {
        std::cout << "Ungültige Auswahl. Programm wird beendet.\n";
    }

    return 0;
}
