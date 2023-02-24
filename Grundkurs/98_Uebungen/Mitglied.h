/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include "Datum.h"
#include <string>

class Mitglied
{
private:
	int nr;
	std::string name;
	const Datum geb;
	static Mitglied* ptrVorstand;
public:
	Mitglied(int nr, const std::string& name, int tag, int monat, int jahr) : nr(nr), name(name), geb(tag, monat, jahr) {}
	Mitglied(int nr, const std::string& name, const Datum& geb) : nr(nr), name(name), geb(geb) {}

	void setNr(int nr) { this->nr = nr; }
	void setName(std::string name) { this->name = name; }

	int getNr()				const { return nr; }
	const std::string& getName()	const { return name; }
	const Datum& getDatum()	const { return geb; }
	static void setVorstand(Mitglied* ptr) { ptrVorstand = ptr; }
	static Mitglied* getVorstand() { return ptrVorstand; }
	void print() const;
};



