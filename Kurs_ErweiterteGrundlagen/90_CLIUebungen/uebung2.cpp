/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <iostream>
#include "uebung2.h"
using namespace std;

void entertoexit() {
    // Eingabeaufforderung f�r eine Zahl
    cout << "Geben Sie bitte eine Zahl ein: ";

    // Variable f�r die eingegebene Zahl
    double zahl;

    // Eingabe der Zahl durch den Benutzer
    cin >> zahl;

    // Berechnung des Quadrats der eingegebenen Zahl
    double quadrat = zahl * zahl;

    // Ausgabe des Ergebnisses
    cout << "Das Quadrat von " << zahl << " ist " << quadrat << endl;

    // Aufforderung zum Dr�cken der Enter-Taste
    cout << "Betaetigen Sie die Taste <ENTER>, um fortzusetzen!";
    cin.ignore(); // Ignoriert die Eingabetaste
    cin.get();    // Warten auf Enter
}