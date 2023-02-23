/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include <string>

class Datum {
private:

	int tag;

	int monat;

	int jahr;

public:
	Datum();

	Datum(int tag, int monat, int jahr);

	~Datum();

	void init();

	void init(int tag, int monat, int jahr);

	void print();

	bool isEqual(Datum&);

	const std::string& asString();

	// Getter und Setter

	void setDatum();

	bool setDatum(int Tag, int Monat, int Jahr);

	int getTag();

	int getMonat();

	int getJahr();
};