/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung14.h"
#include "Datum.h"
#include <iostream>
using namespace std;

void uebung_14_aufgabe_1() {
	Datum heute;
	// Heutiges Datum eingeben
	Datum auch_heute(23, 2, 23);

	heute.print();
	auch_heute.print();

	cout << "Sind die beiden Daten gleich? " << boolalpha << heute.isEqual(auch_heute) << endl;

	cout << heute.asString() << endl;
}

void uebung_14_aufgabe_2() {
}
