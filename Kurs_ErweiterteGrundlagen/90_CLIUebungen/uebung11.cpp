/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung11.h"
#include <iostream>
#include <iomanip>
using namespace std;

CKonto::CKonto(double initialerKontostand, double dispo)
	: kontostand(initialerKontostand), dispo(dispo) {}

void CKonto::SetKontostand(double neuerKontostand) {
	kontostand = neuerKontostand;
}

double CKonto::GetKontostand() const {
	return kontostand;
}

void CKonto::Einzahlen(double betrag) {
	// Einzahlen ist immer erfolgreich
	kontostand += betrag;
}

bool CKonto::Auszahlen(double betrag) {
	// ueberpruefen, ob genug Deckung vorhanden ist
	if (kontostand - betrag >= -dispo) {
		// Auszahlung erfolgreich
		kontostand -= betrag;
		return true;
	}
	else {
		// Nicht genug Deckung
		cout << "Nicht ausreichend Deckung." << endl;
		return false;
	}
}

void CKonto::Information() const {
	// Kontoinformationen ausgeben
	cout << setw(20) << setfill('=') << "=" << setfill(' ') << " Kontoinformation " << setw(20) << setfill('=') << "=" << setfill(' ') << endl;
	cout << left << "=" << endl;
	cout << left << setw(20) << "=  Dispositionskredit: " << fixed << setprecision(2) << setw(15) << right << dispo << " EUR" << setw(15) << endl;
	cout << left << "=" << endl;
	cout << left << setw(20) << "=  Kontostand:         " << setw(15) << right << kontostand << " EUR" << setw(15) << endl;
	cout << left << "=" << endl;
	cout << left << setw(20) << "=  Verfuegbarer Betrag:" << setw(15) << right << (kontostand + dispo) << " EUR" << setw(15) << endl;

	// Rahmen aus Gleichheitszeichen erzeugen
	cout << setw(58) << setfill('=') << "=" << setfill(' ') << endl;
}
