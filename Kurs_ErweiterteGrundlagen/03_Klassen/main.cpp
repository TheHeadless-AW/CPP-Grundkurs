#include "../04_Dateiverarbeitung/01_DateiverarbeitungSimpel.h"
using namespace std;

void dateiverarbeitung() {
    // Schreibende Dateiverarbeitung
    vector<string> schreibDaten = { "Hallo", "Welt", "C++" };
    dateiSchreiben("ausgabe.txt", schreibDaten);

    // Lesende Dateiverarbeitung
    vector<string> leseDaten;
    dateiLesen("ausgabe.txt", leseDaten);

    // Ausgabe der gelesenen Daten
    cout << "Gelesene Daten: ";
    for (const auto& zeile : leseDaten) {
        cout << zeile << " ";
    }
    cout << endl;
}

int main() {
	// 01_DateiverarbeitungSimpel

}