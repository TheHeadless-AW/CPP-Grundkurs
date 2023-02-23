#include "Artikel.h"
#include <iostream>
using namespace std;

static int anzahl_artikel = 0;

Artikel::Artikel(long artikelnummer, const std::string& artikelbezeichnung, double verkaufspreis) {
	this->artikelnummer = artikelnummer;
	this->artikelbezeichnung = artikelbezeichnung;
	this->verkaufspreis = verkaufspreis;

	if (verkaufspreis < 0) { this->verkaufspreis = 0.0; }

	anzahl_artikel++;

	cout << "Es wird ein Objekt f\x81r den Artikel " << this->artikelbezeichnung << " angelegt." << endl;
	cout << "Dies ist der " << anzahl_artikel << ". Artikel." << endl;
}

Artikel::~Artikel() {
	anzahl_artikel--;

	cout << "Das Objekt für den Artikel " << this->artikelbezeichnung << " wird zerst\x94rt." << endl;
	cout << "Es gibt noch " << anzahl_artikel << " Artikel." << endl;
}

void Artikel::print() {
	cout << "Artikelnummer: " << this->artikelnummer << "\t| Artikelbezeichnung: " << this->artikelbezeichnung << "\t| Verkaufspreis: " << this->verkaufspreis << endl;
}
