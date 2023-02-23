/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include <string>

class Artikel {
private:
	long artikelnummer;
	std::string artikelbezeichnung;
	double verkaufspreis;
public:

	Artikel(long artikelnummer = 0, const std::string& artikelbezeichnung = "", double verkaufspreis = 0.0);
	~Artikel();
	void print();

	/// Getter
	long get_artikelnummer() { return this->artikelnummer; }
	std::string get_artikelbezeichnung() { return this->artikelbezeichnung; }
	double get_verkaufspreis() { return this->verkaufspreis; }

	/// Setter
	void set_artikelnummer(long artikelnummer) {
		this->artikelnummer = artikelnummer;
	}
	void set_artikelbezeichnung(std::string artikelbezeichnung) {
		this->artikelbezeichnung = artikelbezeichnung;
	}
	void set_verkaufspreis(double verkaufspreis) { this->verkaufspreis = verkaufspreis; }
};

