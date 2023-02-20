/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung9.h"
#include <iostream>
#include <string>
using namespace std;

void uebung_9_aufgabe_1() {
	// a)
	string s1 = "Alle Jahre kommt...";
	string s2 = "wieder";

	cout << s1 << endl;

	// b)
	s1.insert(s1.find("kommt"), s2 + " ");
	cout << s1 << endl;

	// c)
	s1.erase(s1.find("kommt"));
	cout << s1 << endl;

	// d)
	s1.replace(s1.find("Jahre"), s1.substr(s1.find("Jahre"), 5).length(), "kommen");

	cout << s1 << endl;
}

void uebung_9_aufgabe_2() {
	string einlesen, wiederholung;

	do {
		cout << "Geben sie ihr Pr\x81" << "fwort ein : ";
		cin >> einlesen;

		cout << "Eingelesenes Wort: " << einlesen << endl;

		// Damit das Vergleichswort definitiv mindestens die
		// Länge des Eingabestrings hat
		string vergleichs_wort = einlesen;

		int vergleichs_index = 0;

		// Länge - 1, da length = Anzahl Zeichen also 1-X statt 0-X
		for (int stelle = einlesen.length() - 1; stelle >= 0; stelle--) {
			vergleichs_wort[vergleichs_index] = einlesen.at(stelle);
			cout << "Stelle: " << stelle << " - Vergleichs_Index: " << vergleichs_index << endl;

			vergleichs_index++;
		}

		cout << "Eingelesenes Wort: " << einlesen << endl;
		cout << "Vergleichswort: " << vergleichs_wort << endl;

		if (einlesen == vergleichs_wort) {
			cout << "Ihr Wort ist ein Palindrom." << endl;
		}
		else {
			cout << "Ihr Wort ist kein Palindrom." << endl;
		}



		cout << "M\x94" << "chten Sie weitere eingaben testen ? (J / N) : ";
		cin >> wiederholung;
	} while (wiederholung == "J");
}

void uebung_9_aufgabe_3() {
	string eingabe, name, wert;

	cout << "Geben sie ein Paar 'Name=Wert' ein: ";
	cin >> eingabe;

	// Wenn find = -1 (npos) dann gibt es kein = Zeichen und wenn find = 0 ist,
	// dann 
	while (eingabe.find("=") == string::npos || eingabe.find("=") == 0) {
		cout << "Falsche Eingabe. Geben sie erneut eine Nachricht im Format: Name=Wert ein: ";
		//cout << "= gefunden? " << (eingabe.find("=") != string::npos) << endl;
		//cout << "Position von = ? " << eingabe.find("=") << endl;
		cin >> eingabe;
	}

	name = eingabe.substr(0, eingabe.find("="));
	wert = eingabe.substr(eingabe.find("=")+1, eingabe.length());

	cout << "L\x84nge: " << eingabe.length() << endl;
	cout << "Name: " << name << endl;
	cout << "Wert: " << wert << endl;
}
