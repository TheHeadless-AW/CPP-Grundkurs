/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "namespaces.h"
#include <iostream>
using namespace std;

// Man sieht, dass es ausreichend (und �bersichtlicher ist)
// lediglich den Namespace in der .h Datei zu deklarieren, sodass
// Man dann in der Signatur auf diesen zugreift. 

void Rechnung::addieren(int zahl1, int zahl2) {
	cout << zahl1 + zahl2 << endl;
}

void Rechnung::Subtraktion::subtrahieren(int zahl1, int zahl2) {
	cout << zahl1 - zahl2 << endl;
}

void namespaces_beispiel_1() {
	// M�glichkeit 1, wenn der namespace bereits im aktuellen 
	// Bereich befindet. Ansonsten nat�rlich klassisch die .h 
	// Datei erst extern dazu einbinden.
	// Rechnung:: entfernen um Fehler zu sehen.
	Rechnung::addieren(1, 2);

	// Nicht m�glich
	// subtrahieren(2, 1);
	// Subtraktion::subtrahieren(2, 1);

	// M�glichkeit 1
	Rechnung::Subtraktion::subtrahieren(2, 1);

	// M�glichkeit 2 wie bei std
	using namespace Rechnung;
	addieren(2, 2);

	// M�glichkeit 2
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
