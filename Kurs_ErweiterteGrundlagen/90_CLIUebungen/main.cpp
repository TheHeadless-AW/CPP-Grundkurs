/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <iostream>
#include "uebung1.h"
#include "uebung2.h"
#include "uebung3.h"
#include "uebung4.h"
#include "uebung5.h"
#include "uebung6.h"
#include "uebung7.h"
#include "uebung8.h"
#include "uebung9.h"
#include "main.h"
#include "uebung10.h"
#include "uebung11.h"
using namespace std;

void uebung5() {
	string zeichenkette;

	// Einlesen der Zeichenkette
	cout << "Geben Sie eine Zeichenkette ein: ";
	cin >> zeichenkette;

	// Länge der Zeichenkette berechnen
	int laenge = zeichenkette.length();

	// Umgekehrte Zeichenkette ausgeben
	invers(zeichenkette.c_str(), laenge);
}

void uebung6() {
	// Die Ausgaben passen noch nicht mit der entsprechenden Wahrheitstabelle
	// überein. Sind jedoch für den Kursinhalt irrelevant.

	kategorisiereDreieck(true, true, false, false, false); // Gleichseitig

	kategorisiereDreieck(false, true, true, true, false); // Gleichschenklig
	kategorisiereDreieck(false, true, true, false, false);
	kategorisiereDreieck(false, true, false, true, false);
	//kategorisiereDreieck(false, true, false, false, false);

	kategorisiereDreieck(false, false, true, true, true); // Unregelmaessig
	kategorisiereDreieck(false, false, false, true, true);
	kategorisiereDreieck(false, false, true, false, true);
	//kategorisiereDreieck(false, false, false, false, true);

	kategorisiereDreieck(false, true, true, false, true); // Rechtwinklig
	kategorisiereDreieck(false, false, true, false, true);
	kategorisiereDreieck(false, true, true, false, false);
	//kategorisiereDreieck(false, false, true, false, false);
}

void uebung8() {
	cout << "Der Notendurchschnitt ist: " << durchschnitt(1, 5, 3, 3, 4, 12, 5, 2, 0) << endl;
	cout << "Der Notendurchschnitt ist: " << durchschnitt(1, 5, 0) << endl;
	cout << "Der Notendurchschnitt ist: " << durchschnitt(1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 6, 1, 0) << endl;
}

void uebung10() {
	aufgabe10();
}

void uebung11() {
	// Erzeugen Sie ein CKonto-Objekt mit einem anfänglichen Kontostand von 1000 Euro und einem Dispo von 500 Euro.
	CKonto konto(1000.0, 500.0);
	konto.Information();

	konto.Einzahlen(200.0);
	konto.Information();

	// Auszahlen von 2000 Euro (sollte fehlschlagen)
	konto.Auszahlen(2000.0);
	konto.Information();

	konto.Auszahlen(800.0);
	konto.Information();

	// Hier wird nun das Dispo genutzt
	konto.Auszahlen(600.0);
	konto.Information();
}

int main()
{
	// Aufruf der entsprechenden Uebungsfunktionen. Gewünschte Funktion ausklammern.

	// Uebung 1
	// namensausgabe();

	// Uebung 2
	// entertoexit();

	// Uebung 3
	// manipulatoren_rechnung();

	// Uebung 4
	// artikelformatierung();

	// Uebung 5
	// uebung5();

	// Uebung 6
	// uebung6();

	// Uebung 7
	// ausgabeText();

	// Uebung 8
	// uebung8();

	// Uebung 9 (Seltsame Aufgabenstellung)
	// ausgabeLandUndHauptstadt();

	// Uebung 10
	// uebung10();

	// Uebung 11
	uebung11();

}

