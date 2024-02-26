#include "01_DateiverarbeitungSimpel.h"
#include <iostream>
using namespace std;

void dateiverarbeitung() {
    const string dateiName = "ausgabe.txt";

    // Datei erzeugen
    dateiErzeugen(dateiName);

    // Datei in der Konsole auslesen lassen
    cout << "Inhalt der Datei:" << endl;
    dateiInKonsoleAuslesen(dateiName);

    // Datei erzeugen und direkt mit Inhalt fuellen
    vector<string> startDaten = { "Dies ist ein Beispiel mit etwas mehr Text damit man mehr sehen kann.\n", "C++ ist maechtig und kann wirklich sehr viel Dateiverarbeitung.\n" };
    dateiErzeugenMitInhalt(dateiName, startDaten);

    // Datei in der Konsole auslesen lassen
    cout << "Inhalt der Datei:" << endl;
    dateiInKonsoleAuslesen(dateiName);

    // In Datei schreiben / anhaengen
    vector<string> schreibDaten = { "Hallo", "Welt", "C++" };
    inDateiSchreiben(dateiName, schreibDaten);

    // In Datei an eine bestimmte Stelle schreiben (ueberschreibt ab der 5. Stelle)
    anStelleInDateiSchreiben(dateiName, "-Stelle5Eingefuegt-", 5);

    // Datei in der Konsole auslesen lassen
    cout << "Inhalt der Datei:" << endl;
    dateiInKonsoleAuslesen(dateiName);

    // Datei loeschen mit Konsolenabfrage
    dateiLoeschenMitAbfrage(dateiName);
}

int main() {
    // 01_DateiverarbeitungSimpel
    dateiverarbeitung();
}