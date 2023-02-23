/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung15.h"
#include "Artikel.h"

Artikel globaler_artikel(2,"Globaler Artikel",5.0);

// Gem. Aufgabe
void test() {
	Artikel test_artikel_1(3, "Test Artikel 1");
	static Artikel test_artikel_2(4, "Test Artikel 2", -400);

	test_artikel_1.print();
	test_artikel_2.print();
}

void uebung_15_aufgabe_1(){
	Artikel lokaler_artikel(1,"Lokaler Artikel");
	lokaler_artikel.print();
	globaler_artikel.print();

	test();
}
