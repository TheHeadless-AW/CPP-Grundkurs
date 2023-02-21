/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "namespaces.h"
#include <iostream>
using namespace std;

// Man sieht, dass es ausreichend (und übersichtlicher ist)
// lediglich den Namespace in der .h Datei zu deklarieren, sodass
// Man dann in der Signatur auf diesen zugreift. 

void Rechnung::addieren(int zahl1, int zahl2) {
	cout << zahl1 + zahl2 << endl;
}

void Rechnung::Subtraktion::subtrahieren(int zahl1, int zahl2) {
	cout << zahl1 - zahl2 << endl;
}

void namespaces_beispiel_1() {
	// Möglichkeit 1, wenn der namespace bereits im aktuellen 
	// Bereich befindet. Ansonsten natürlich klassisch die .h 
	// Datei erst extern dazu einbinden.
	// Rechnung:: entfernen um Fehler zu sehen.
	Rechnung::addieren(1, 2);

	// Nicht möglich
	// subtrahieren(2, 1);
	// Subtraktion::subtrahieren(2, 1);

	// Möglichkeit 1
	Rechnung::Subtraktion::subtrahieren(2, 1);

	// Möglichkeit 2 wie bei std
	using namespace Rechnung;
	addieren(2, 2);

	// Möglichkeit 2
	Subtraktion::subtrahieren(2, 1);

	// Da hier using namespace Rechnung bereits vorhanden ist
	using namespace Subtraktion;

	// Ist using namespace Rechnung nicht vorhanden:
	using namespace Rechnung::Subtraktion;
	// oder nacheinander
	using namespace Rechnung;
	using namespace Subtraktion;
	subtrahieren(4, 2);


}
