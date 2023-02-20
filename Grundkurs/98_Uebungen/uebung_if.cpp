/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung_if.h"
#include <iostream>
using namespace std;

void uebung_if() {
	int umsatz;

	cout << "Wie viel Umsatz wurde generiert?" << endl;
	cin >> umsatz;

	string ausgabe = "Der Bonus liegt bei ";

	if (umsatz >= 50000) {
		ausgabe = ausgabe + "10%";
	}
	else if (umsatz >= 20000) {
		ausgabe = ausgabe + "5%";
	}
	else if (umsatz >= 10000) {
		ausgabe = ausgabe + "2%";
	}
	else if (umsatz >= 0) {
		ausgabe = ausgabe + "0%";
	}
	else {
		ausgabe = "Falsche Eingabe";
	}

	cout << ausgabe << endl;

}
