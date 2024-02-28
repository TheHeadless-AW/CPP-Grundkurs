#ifndef UEBUNG15_H
#define UEBUNG15_H

#include <iostream>

using namespace std;

template <typename Container>
void ElementAusgabe(const Container& container, char delimiter = '\0') {
    // Iteriere über die Elemente des Containers
    for (auto it = container.begin(); it != container.end(); it++) {
        // Gib das aktuelle Element auf dem Bildschirm aus
        cout << *it;

        // Überprüfe, ob das aktuelle Element nicht das letzte im Container ist
        if (next(it) != container.end() && delimiter != '\0') {
            // Wenn ja und ein Trennzeichen vorhanden ist, gib das Trennzeichen aus
            cout << delimiter;
        }
        else {
            // Wenn es das letzte Element ist oder kein Trennzeichen vorhanden ist,
            // füge eine neue Zeile hinzu
            cout << endl;
        }
    }

    // Füge eine zusätzliche neue Zeile hinzu, um den Ausgabebereich zu trennen
    cout << endl;
}

#endif 
