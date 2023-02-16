#include "uebung7.h"
#include <cmath>
#include <time.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void uebung_7_aufgabe_1() {

	cout << "Seed: ";
	int seedzahl;
	cin >> seedzahl;
	srand(seedzahl);

	for (int i = 0; i < 20; i++) {
		cout << i + 1 << ". Zahl: " << (rand() % 100 + 1) << endl;
	}
}

void uebung_7_aufgabe_2() {
	while (true) {
		cout << "Seed: ";
		int seedzahl, schaetzzahl;
		cin >> seedzahl;
		srand(seedzahl);

		int zufallszahl = rand() % 15 + 1;
		cout << zufallszahl << endl;

		for (int anzahl_versuche = 3; anzahl_versuche > 0; anzahl_versuche--) {
			cout << "Geben Sie ihre Vermutung ein: ";
			cin >> schaetzzahl;

			if (schaetzzahl < zufallszahl) {
				cout << "Ihre Zahl ist kleiner als die gesuchte Zahl." << endl;
			}
			else if (schaetzzahl > zufallszahl) {
				cout << "Ihre Zahl ist gr\x94\xE1" << "er als die gesuchte Zahl." << endl;
			}
			else {
				cout << "Ihre Zahl ist richtig!" << endl;

				// Hier macht es Sinn break (ohne Zusatz) zu nutzen, da hier
				// das Spiel gewonnen ist und somit nicht weiter geprüft werden muss.
				break;
			}
		}

		cout << endl << "Die gesuchte Zahl war: " << zufallszahl << endl;
	}
}

void uebung_7_aufgabe_3() {

	// Im Beispiel (Siehe PDF) haben wir 12 Zeilen,
	// da die Symbolzeile aus -----+---- ebenfalls eine
	// Zeile ist, genauso wie die 1. Zeile mit den Spalten
	// Überschriften.
	// Insgesamt haben wir auch 12 Spalten.

	// 1. Zeile mit allen 12 Spalten
	// 1. Spalte (2 Leerzeichen) und 2. Spalte (|)
	cout << "    " << "|";

	// Anschließend soll für die nächsten 10 Spalten der
	// 1. Zeile 1 bis 10 ausgegeben werden
	for (int spalten = 1; spalten <= 10; spalten++) {
		cout << setw(5) << right << spalten;
	}

	// Da wir nun zur nächsten Zeile wechseln
	cout << endl;

	// 2. Zeile bestehend aus Sonderzeichen und Wechsel zur nächsten Zeile
	cout << "----+---------------------------------------------------" << endl;;

	// Zeile 3 bis 12:
	// Zeile 0 = die 1. Zeile von 1 * 1
	for (int zeile = 1; zeile <= 10; zeile++) {
		cout << setw(2) << right << zeile << "  |";

		for (int spalte = 1; spalte <= 10; spalte++) {
			cout << setw(5) << right << zeile * spalte;
		}
		cout << endl;
	}
}
