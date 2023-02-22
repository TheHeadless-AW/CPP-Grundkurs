#include "Konto.h"
#include <iostream>
using namespace std;

void Konto::init(int kontostand, std::string kontoinhaber, int dispo_grenze) {
	this->kontostand = kontostand;
	this->kontoinhaber = kontoinhaber;
	this->dispo_grenze = dispo_grenze;

	// Kontonummer muss static sein, damit die Zahl
	// statisch bleibt und somit unabhängig von anderen
	// Objekten erhöht werden kann und nicht immer bei 
	// 1000000000 anfängt. Eine "Neuerstellung" beim
	// Aufruf von static int kontonummer = 1000000000
	// wird quasi dann nicht genutzt.
	static int kontonummer = 1000000000;

	this->kontonummer = kontonummer;

	kontonummer++;
}

void Konto::geld_einzahlen(int menge) {
	this->kontostand += menge;
	cout << menge << " Euro auf das Konto von " << this->kontoinhaber << " (Konto Nr.: " << this->kontonummer << ") eingezahlt." << endl;
}

void Konto::geld_auszahlen(int menge) {
	if (this->kontostand - menge > this->dispo_grenze) {
		this->kontostand -= menge;
		cout << menge << " Euro vom Konto von " << this->kontoinhaber << " (Konto Nr.: " << this->kontonummer << ") abgehoben." << endl;
	}
	else {
		cout << "Die gew\x81nschte Abbuchung in H\x94he von " << menge << " Euro \x81" << "bersteigt ihre Dispo Grenze (" << this->dispo_grenze << " Euro) um " << (this->kontostand - menge + this->dispo_grenze) * (-1) << " Euro." << endl;
	}
}

void Konto::anzeigen() {
	cout << "Kontoinhaber: " << this->kontoinhaber << endl;
	cout << "Kontonummer: " << this->kontonummer << endl;
	cout << "Kontostand: " << this->kontostand << endl << endl;
}
