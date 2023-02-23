/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include <string>

class Konto{
private:
	int kontonummer;

	int kontostand;

	int dispo_grenze;

	std::string kontoinhaber;

public:

	Konto();

	Konto(int kontostand, std::string kontoinhaber, int dispo_grenze);

	//void init(int kontostand, std::string kontoinhaber, int dispo_grenze);

	void geld_einzahlen(int menge);

	void geld_auszahlen(int menge);

	void ueberweisung(Konto *empfaengerkonto, int betrag);

	void anzeigen();

	std::string get_kontoinhaber();

	int get_kontonummer();

	int get_kontostand();

	int get_dispo_grenze;

	void set_kontoinhaber(std::string kontoinhaber);

	void set_kontostand(int menge);



};

