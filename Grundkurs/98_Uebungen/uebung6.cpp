#include "uebung6.h"
#include <iostream>
#include <string>
using namespace std;

// Man beachte, dass bis dato noch nicht das Erstellen
// eigener Funktionen effektiv gelehrt wurde


void uebung_6_aufgabe_1() {
	double vergleich;
	double max = 0;

	cout << "Geben Sie Zahl 1 ein:" << endl;
	cin >> vergleich;

	if (max < vergleich) max = vergleich;

	cout << "Geben Sie Zahl 2 ein:" << endl;
	cin >> vergleich;

	if (max < vergleich) max = vergleich;

	cout << "Geben Sie Zahl 3 ein:" << endl;
	cin >> vergleich;

	if (max < vergleich) max = vergleich;

	cout << "Die gr\x94\xE1te der Zahlen ist: " << max << endl;
}

void uebung_6_aufgabe_2() {
	int jahr;

	cout << "Geben Sie eine Jahreszahl zwischen 1584 und 2099 ein: ";
	cin >> jahr;

	if (jahr <= 1584 || jahr >= 2099) {
		cout << "Das Jahr soll zwischen 1584 und 2099 liegen." << endl;
	}
	else if ((jahr % 4 == 0 && jahr % 100 != 0) || jahr % 400 == 0) {
		cout << "Das Jahr " << jahr << " ist ein Schaltjahr." << endl;
	}
	else {
		cout << "Das Jahr " << jahr << " ist kein Schaltjahr." << endl;
	}
}

void uebung_6_aufgabe_3() {
	int tag, monat, jahr;
	string str_monat, ausgabe;

	cout << "Tag: ";
	cin >> tag;

	cout << "Monat: ";
	cin >> monat;

	cout << "Jahr: ";
	cin >> jahr;

	switch (monat) {
	case 1: str_monat = "Januar"; break;
	case 2: str_monat = "Februar"; break;
	case 3: str_monat = "M\x84rz"; break;
	case 4: str_monat = "April"; break;
	case 5: str_monat = "Mai"; break;
	case 6: str_monat = "Juni"; break;
	case 7: str_monat = "Juli"; break;
	case 8: str_monat = "August"; break;
	case 9: str_monat = "September"; break;
	case 10: str_monat = "Oktober"; break;
	case 11: str_monat = "November"; break;
	case 12: str_monat = "Dezember"; break;
	}

	ausgabe = (jahr >= 0 && jahr <= 50) ? jahr += 2000 : jahr += 1900;
	ausgabe = "Datum " + to_string(tag) + '.' + str_monat + " " + to_string(jahr);

	cout << ausgabe << endl;
}
