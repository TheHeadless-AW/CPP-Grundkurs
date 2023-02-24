/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
class Fahrzeug {
private:
	int anzahl_reifen;

	int anzahl_fahrzeuge;

public:
	// Du brauchst zwingend einen default Konstruktor, wenn du vererben
	// möchtest.
	Fahrzeug();

	Fahrzeug(int anzahl_reifen);

	// explicit sorgt dafür, dass man nicht automatisch auf diesen Konstruktor
	// zugreifen kann, sondern nur mittels 
	//explicit Fahrzeug(int anzahl_reifen) : anzahl_reifen(anzahl_reifen) {};

	void geraeusch_machen();

	void fahren();

	int get_anzahl_fahrzeuge() { return this->anzahl_fahrzeuge; };

	int get_anzahl_reifen() { return this->anzahl_reifen; };
};

