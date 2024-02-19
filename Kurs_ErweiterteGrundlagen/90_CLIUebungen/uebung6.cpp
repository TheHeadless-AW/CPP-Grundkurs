#include <iostream>
#include "uebung6.h"
#include <iostream>
using namespace std;

// Funktion zur Kategorisierung von Dreiecken
void kategorisiereDreieck(bool antwort1, bool antwort2, bool antwort3, bool antwort4, bool antwort5) {
    // Variablen zur Beschreibung der Eigenschaften des Dreiecks
    bool gleichseitig = antwort1 && antwort2 && antwort3;
    bool gleichschenklig = (antwort1 && antwort2 && !antwort3) || (!antwort1 && antwort2 && antwort3) || (antwort1 && !antwort2 && antwort3);
    bool unregelmaessig = !antwort1 || (antwort1 && !antwort2 && !antwort3) || (!antwort1 && antwort2 && !antwort3);
    bool rechtwinklig = antwort3 && antwort4 && !antwort5;
    bool stumpfwinklig = !rechtwinklig && antwort4 && !antwort5;
    bool spitzwinklig = !gleichseitig && !gleichschenklig && !unregelmaessig && !rechtwinklig && !stumpfwinklig;

    // Ausgabe des Typs des Dreiecks
    if (gleichseitig) {
        cout << "Das Dreieck ist gleichseitig." << endl;
    }
    else if (gleichschenklig) {
        cout << "Das Dreieck ist gleichschenklig." << endl;
    }
    else if (rechtwinklig) {
        cout << "Das Dreieck ist rechtwinklig." << endl;
    }
    else if (stumpfwinklig) {
        cout << "Das Dreieck ist stumpfwinklig." << endl;
    }
    else if (spitzwinklig) {
        cout << "Das Dreieck ist spitzwinklig." << endl;
    }
    else if (unregelmaessig) {
        cout << "Das Dreieck ist unregelmaessig." << endl;
    }
    else {
        // Es ist ein Fehler aufgetreten.
        cerr << "Ungültige Kombination von Eigenschaften." << endl;
    }
}

