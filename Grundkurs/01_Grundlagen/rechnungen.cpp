#include "rechnungen.h"

// Bibliothek f�r mathematische Funktionen
#include <cmath>

#include <iostream>
using namespace std;


void allgemeine_rechnungen() {
	// Rechnungen mit + - * / werden hier nicht gezeigt,
	// da diese selbstverst�ndlich sein sollten

	// Berechnet zahl1 hoch zahl2
	cout << pow(2, 2) << endl;

	// Berechnet die Wurzel der Zahl
	cout << sqrt(4) << endl;

	// Rundet die Zahl auf eine ganze Zahl ab
	cout << floor(2.678) << endl;

	// Rundet die Zahl auf eine ganze Zahl auf
	cout << ceil(2.678) << endl;

	// Vergleich zwei Zahlen und gibt die gr��ere zur�ck
	cout << fmax(2, 10) << endl;

	// Vergleich zwei Zahlen und gibt die kleinere zur�ck
	cout << fmin(2, 10) << endl;
}

void zufallszahlen() {
	// Erzeugt "einfach" erzeugte Zufallszahlen. Dies sieht man,
	// das bei jeder Ausf�hrung die "Zuf�lle" gleich sind.
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl << endl;

	// Erzeugt bessere Zufallszahlen

	// Erzeugt anhand der Systemzeit eine Zufallszahl
	// NULL entspricht einem nicht vorhandenem Modifikator.
	// Alternativ k�nnen eigens erzeugte time_t Typen genutzt
	// werden um eine andere Ausgangszeit zu nutzen.
	srand(time(NULL));

	// srand() BEEINFLUSST rand() daher ist es wichtig bei
	// sp�terem Gebrauch mittels Threads etc. dies nicht
	// parallel und exzessiv zu nutzen.

	// Bei jeder Ausf�hrung sind hier andere Zufallszahlen
	// abh�ngig von der aktuellen Zeit enthalten.
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
}
