#include <iostream>
#include <string>
using namespace std;

void starteServer();
void starteClient();

int main() {
    cout << "Willkommen zur Client-Server-Anwendung!\n";

    string auswahl;

    cout << "Moechten Sie als Server (s) oder als Client (c) starten? ";
    cin >> auswahl;

    if (auswahl == "s" || auswahl == "S") {
        starteServer();
    }
    else if (auswahl == "c" || auswahl == "C") {
        starteClient();
    }
    else {
        cout << "Ungueltige Auswahl. Programm wird beendet.\n";
    }

    return 0;
}
