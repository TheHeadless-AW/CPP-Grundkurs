#include "uebung16.h"

using namespace std;

void Personalverwaltung::NamenUndNummernEingeben(int anzahl) {
    string name;
    int personalnummer;

    cout << "Bitte Namen und Personalnummern eingeben:" << endl;
    for (int i = 0; i < anzahl; ++i) {
        cout << "Name: ";
        cin >> name;
        cout << "Personalnummer: ";
        cin >> personalnummer;

        namenUndNummernStack.push(make_pair(name, personalnummer));
    }
}

void Personalverwaltung::ZuMapHinzufuegen() {
    while (!namenUndNummernStack.empty()) {
        auto pair = namenUndNummernStack.top();
        namenUndNummernStack.pop();

        personalnummerMap[pair.second] = pair.first;
        nameMap[pair.first] = pair.second;
    }
}

void Personalverwaltung::AlphabetischSortierteListenAusgeben() {
    // Sortiere personalnummerMap nach Schlüsseln
    map<int, string> sortiertePersonalnummerMap(
        personalnummerMap.begin(), personalnummerMap.end());

    // Sortiere nameMap nach Schlüsseln
    map<string, int> sortierteNameMap(
        nameMap.begin(), nameMap.end());

    // Gib sortiertePersonalnummerMap aus
    cout << "Sortierte Liste nach Personalnummern:" << endl;
    for (const auto& pair : sortiertePersonalnummerMap) {
        cout << pair.second << " - " << pair.first << endl;
    }

    // Gib sortierteNameMap aus
    cout << "Sortierte Liste nach Namen:" << endl;
    for (const auto& pair : sortierteNameMap) {
        cout << pair.first << " - " << pair.second << endl;
    }
}
