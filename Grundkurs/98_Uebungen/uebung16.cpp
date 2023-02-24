/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung16.h"
#include "Mitglied.h"
#include <iostream>
using namespace std;

void uebung_16_aufgabe_1(){
	// Wird dadurch sichtbar, dass Uebung 15 weiterhin
	// funktioniert.
}

void uebung_16_aufgabe_2(){
	Mitglied franz(1, "Franz", 1, 5, 1990);
	Mitglied sepp(2, "Sepp", 10, 4, 1980);
	Mitglied karl(3, "Karl", Datum(15, 9, 1985));

	franz.print();
	sepp.print();
	karl.print();

	Mitglied::setVorstand(&sepp);
	cout << "\nVorstand: " << endl;
	Mitglied::getVorstand()->print();
}
