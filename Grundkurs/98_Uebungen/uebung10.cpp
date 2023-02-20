
/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/

#include "uebung10.h"
#include <cmath>
#include <time.h>
#include <iostream>
using namespace std;

// Summe gehört zu Aufgabe 1

long summe(long zahl1, long zahl2, long zahl3 = 0, long zahl4 = 0) {
	return zahl1 + zahl2 + zahl3 + zahl4;
};
void uebung_10_aufgabe_1() {
	srand(time(NULL));

	long von = 1;
	long bis = 1000000000L;

	long zufallszahl1 = rand() % bis + von;
	long zufallszahl2 = rand() % bis + von;
	long zufallszahl3 = rand() % bis + von;
	long zufallszahl4 = rand() % bis + von;

	cout << "Summe aus " << zufallszahl1 << " und " << zufallszahl2 << " ist " << summe(zufallszahl1, zufallszahl2) << endl;
	cout << "Summe aus " << zufallszahl1 << " und " << zufallszahl2 << " und " << zufallszahl3 << " ist " << summe(zufallszahl1, zufallszahl2, zufallszahl3) << endl;
	cout << "Summe aus " << zufallszahl1 << " und " << zufallszahl2 << " und " << zufallszahl3 << " und " << zufallszahl4 << " ist " << summe(zufallszahl1, zufallszahl2, zufallszahl3, zufallszahl4) << endl;



	// Zusatz von b) ignoriert, da die Struktur durchgehend
	// genutzt wird.
}

// Alle inline Funktionen gehören zu Aufgabe 2

inline double Max(double x, double y) {
	return std::max(x, y);
}

inline char Max(char x, char y) {
	return std::max(x, y);
}

inline int Max(int x, int y) {
	return std::max(x, y);
}

void uebung_10_aufgabe_2() {
	string wiederholung;

	double kommazahl1;
	double kommazahl2;
	char zeichen1;
	char zeichen2;
	int zahl1;
	int zahl2;


	do {
		// Kommazahlen

		cout << "Geben sie die erste Kommazahl ein : ";
		cin >> kommazahl1;

		cout << "Geben sie die zweite Kommazahl ein : ";
		cin >> kommazahl2;

		cout << Max(kommazahl1, kommazahl2) << " ist die gr\x94\xE1" << "ere." << endl;

		// Zeichen

		cout << "Geben sie das erste Zeichen ein : ";
		cin >> zeichen1;

		cout << "Geben sie das zweite Zeichen ein : ";
		cin >> zeichen2;

		cout << Max(zeichen1, zeichen2) << " ist die gr\x94\xE1" << "ere." << endl;

		// Ganzzahlen

		cout << "Geben sie die erste Ganzzahl ein : ";
		cin >> zahl1;

		cout << "Geben sie die zweite Ganzzahl ein : ";
		cin >> zahl2;

		cout << Max(zahl1, zahl2) << " ist die gr\x94\xE1" << "ere." << endl;

		cout << "M\x94" << "chten Sie weitere Eingaben testen ? (J / N) : ";
		cin >> wiederholung;
	} while (wiederholung == "J");
}

// Beide Fakultäts Funktionen gehören zu Aufgabe 3

// long long damit auch Fakultät 20 z.B. möglich ist
long long fakultaet_schleife(int zahl) {
	long long ergebnis = 1;

	for (int zaehler = 1; zaehler <= zahl; zaehler++) {
		cout << ergebnis;
		ergebnis = ergebnis * zaehler;
		cout << " * " << zaehler << " = " << ergebnis << endl;
	}

	return ergebnis;
}

long long fakultaet_rekursiv(long zahl) {
	if (zahl <= 1) {
		return 1;
	}
	else {
		return zahl * fakultaet_rekursiv(zahl - 1);
	}
}

void uebung_10_aufgabe_3() {
	string wiederholung;
	do {
		int zahl;
		cout << "Geben Sie eine Zahl zu welcher sie die Fakult\x84t suchen ein: ";
		cin >> zahl;

		cout << "Die Fakult\x84t von " << zahl << " ist : " << fakultaet_schleife(zahl) << endl;

		cout << "Die Fakult\x84t von " << zahl << " ist : " << fakultaet_rekursiv(zahl) << endl;

		cout << "M\x94" << "chten Sie weitere Eingaben testen ? (J / N) : ";
		cin >> wiederholung;
	} while (wiederholung == "J");

}
