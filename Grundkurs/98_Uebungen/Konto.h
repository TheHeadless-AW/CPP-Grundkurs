#pragma once
#include <string>

class Konto{
private:
	int kontonummer;

	int kontostand;

	int dispo_grenze;

	std::string kontoinhaber;

public:

	void init(int kontostand, std::string kontoinhaber, int dispo_grenze);

	void geld_einzahlen(int menge);

	void geld_auszahlen(int menge);

	void ueberweisung(Konto empfaengerkonto, int betrag);

	void anzeigen();

};

