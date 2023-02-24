/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "Datum.h"
#include <string>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

Datum::Datum() {
	this->setDatum();
}

Datum::Datum(int tag, int monat, int jahr) {
	this->tag = tag;
	this->monat = monat;
	this->jahr = jahr;
}

Datum::~Datum(){
	cout << "Datumsobjekt vernichtet" << endl;
}

// Inits wurden dann für Aufgabe 14 durch die Konstruktoren
// ersetzt.
void Datum::init(int tag, int monat, int jahr) {
	this->tag = tag;
	this->monat = monat;
	this->jahr = jahr;
}

void Datum::init() {
	time_t t = time(NULL);
	tm zeit;

	localtime_s(&zeit, &t);

	this->tag = zeit.tm_mday;
	this->monat = zeit.tm_mon + 1;
	this->jahr = zeit.tm_year;
}

void Datum::print() {
	string str_monat, ausgabe;

	switch (this->monat) {
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

// Keine getter nutzen, da wir hier im lokalen Kontext auch auf private Variablen zugreifen können
bool Datum::isEqual(Datum& dat) {
	return this->tag == dat.tag && this->monat == dat.monat && this->jahr == dat.jahr;
}

const string& Datum::asString() const {
	stringstream out;
	// Ist dieser nicht static wird bei der Rueckgabe nur "" 
	// zurueckgegeben, da der lokale Wert beim Verlassen der
	// Funktion über return diesen löscht.
	static string rueckgabe_string;

	// Achtung es wird immer bis zum nächsten Leerzeichen gelesen
	out << setfill('0') << setw(2) << tag << "." << setw(2) << monat << "." << jahr << setfill(' ');
	// Befinden sich im Stream Leerzeichen so ist 
	// getline(out, str);
	// zu nutzen.
	out >> rueckgabe_string;

	return rueckgabe_string;
}

void Datum::setDatum() {
	time_t t = time(NULL);
	tm zeit;

	localtime_s(&zeit, &t);

	this->tag = zeit.tm_mday;
	this->monat = zeit.tm_mon + 1;
	this->jahr = zeit.tm_year;
}

bool Datum::setDatum(int Tag, int Monat, int Jahr) {
	this->tag = tag;
	this->monat = monat;
	this->jahr = jahr;

	return true;
}

int Datum::getTag() {
	return this->tag;
}

int Datum::getMonat() {
	return this->monat;
}

int Datum::getJahr() {
	return this->jahr;
}


