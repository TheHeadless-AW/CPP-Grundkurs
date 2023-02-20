/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung8.h"
#include <cmath>
#include <iostream>
using namespace std;

// Ternärer Operator gem. Aufgabe wurde aufgrund der
// Sinnhaftigkeit nicht genutzt

#define ABS(zahl) abs(zahl)
#define MAX(zahl1, zahl2) std::max(zahl1, zahl2)
#define MIN(zahl, zahl2) std::min(zahl1, zahl2)

void uebung_8_aufgabe_1()
{
	double kommazahl = -12;
	cout << "Absoluter Wert von " << kommazahl << " ist " << ABS(kommazahl) << endl;

	int zahl1 = 5;
	int zahl2 = 10;

	cout << MAX(zahl1, zahl2) << endl;

	cout << MIN(zahl1, zahl2) << endl;
}
