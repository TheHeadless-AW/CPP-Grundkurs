/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "Konto.h"
#include <iostream>
using namespace std;

static int neue_kontonummer = 1000000000;

Konto::Konto() {
	this->kontostand = 0;
	this->kontoinhaber = "Zu bef\x81llen";
	this->dispo_grenze = 0;

	// Kontonummer muss static sein, damit die Zahl
	// statisch bleibt und somit unabhängig von anderen
	// Objekten erhöht werden kann und nicht immer bei 
	// 1000000000 anfängt. Eine "Neuerstellung" beim
	// Aufruf von static int kontonummer = 1000000000
	// wird quasi dann nicht genutzt.

	this->kontonummer = neue_kontonummer;

	neue_kontonummer++;
}

Konto::Konto(int kontostand, std::string kontoinhaber, int dispo_grenze){
	this->kontostand = kontostand;
	this->kontoinhaber = kontoinhaber;
	this->dispo_grenze = dispo_grenze;

	// Kontonummer muss static sein, damit die Zahl
	// statisch bleibt und somit unabhängig von anderen
	// Objekten erhöht werden kann und nicht immer bei 
	// 1000000000 anfängt. Eine "Neuerstellung" beim
	// Aufruf von static int kontonummer = 1000000000
	// wird quasi dann nicht genutzt.

	this->kontonummer = neue_kontonummer;

	neue_kontonummer++;
}

/*void Konto::init(int kontostand, std::string kontoinhaber, int dispo_grenze) {
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
}*/

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
		cout << "Die gew\x81nschte Abbuchung in H\x94he von " << menge << " Euro \x81" << "bersteigt ihre Dispo Grenze (" << this->dispo_grenze << " Euro) um " << menge - (this->kontostand + (this->dispo_grenze * (-1))) << " Euro." << endl;
	}
}

void Konto::ueberweisung(Konto *empfaengerkonto, int menge) {
	if (this->kontostand - menge > this->dispo_grenze) {
		this->kontostand -= menge;
		cout << "Konto: " << empfaengerkonto->kontostand << endl;
		empfaengerkonto->kontostand += menge;
		cout << menge << " Euro vom Konto von " << this->kontoinhaber << " (Konto Nr.: " << this->kontonummer << ") auf das Konto von " << empfaengerkonto->kontoinhaber << " (Konto Nr.: " << empfaengerkonto->kontonummer << ") \x81" << "berwiesen." << endl;
	}
	else {
		cout << "Die gew\x81nschte \x9A" << "berweisung in H\x94he von " << menge << " Euro \x81" << "bersteigt ihre Dispo Grenze(" << this->dispo_grenze << " Euro) um " << menge - (this->kontostand + (this->dispo_grenze * (-1))) << " Euro." << endl;
	}
}

void Konto::anzeigen() {
	cout << "----------------------------------------" << endl;
	cout << "Kontoinhaber\t: " << this->kontoinhaber << endl;
	cout << "Kontonummer\t: " << this->kontonummer << endl;
	cout << "Kontostand\t: " << this->kontostand << endl;
	cout << "----------------------------------------" << endl;
}

std::string Konto::get_kontoinhaber(){
	return this->kontoinhaber;
}

int Konto::get_kontonummer(){
	return this->kontonummer;
}

int Konto::get_kontostand(){
	return this->kontostand;
}

void Konto::set_kontoinhaber(std::string kontoinhaber){
	this->kontoinhaber = kontoinhaber;
}

void Konto::set_kontostand(int menge){
	this->kontostand += menge;
}
