#ifndef UEBUNG16_H
#define UEBUNG16_H

#include <iostream>
#include <map>
#include <stack>
#include <list>
#include <algorithm>

using namespace std;

class Personalverwaltung {
public:
    // Funktion zum Einlesen von Namen und Personalnummern
    void NamenUndNummernEingeben(int anzahl);

    // Funktion zum Hinzufügen von Namen und Nummern zu den Maps
    void ZuMapHinzufuegen();

    // Funktion zum Ausgeben der sortierten Listen
    void AlphabetischSortierteListenAusgeben();

private:
    map<int, string> personalnummerMap;
    map<string, int> nameMap;
    stack<pair<string, int>> namenUndNummernStack;
};

#endif // UEBUNG16_H
