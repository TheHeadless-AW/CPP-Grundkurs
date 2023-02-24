/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "Fahrzeug.h"
#include <iostream>
using namespace std;

int anzahl = 0;

Fahrzeug::Fahrzeug() {
	anzahl++;
	this->anzahl_fahrzeuge = anzahl;
}

Fahrzeug::Fahrzeug(int anzahl_reifen) {
	this->anzahl_reifen = anzahl_reifen;
	anzahl++;
	this->anzahl_fahrzeuge = anzahl;
}

void Fahrzeug::geraeusch_machen() {
	cout << "Fahrzeugklasse: Fahrzeuge machen Ger\x84usche" << endl;
}

void Fahrzeug::fahren() {
	cout << "Fahrzeugklasse: Ich bewege mich." << endl;
}
