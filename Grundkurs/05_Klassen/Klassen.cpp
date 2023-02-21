/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "Klassen.h"

// Wir müssen wie gewohnt die Datei der Klasse
// inkludieren,
#include "Mensch.h"
#include <iostream>
using namespace std;

void grundlagen_klassen(){
	Mensch olaf;

	// Man beachte, dass beide wieder die klasssichen Initialwerte
	// beim Zugriff erhalten, außer diese sind als default zugewiesen.
	cout << "Alter: " << olaf.alter << endl;
	cout << "Name: " << olaf.name << endl;

	// Diese können wie gewohnt angepasst und verändert werden
	olaf.alter = 20;
	olaf.name = "Olaf";

	cout << "Alter: " << olaf.alter << endl;
	cout << "Name: " << olaf.name << endl;

	// Besser ist es über Methoden auf Attribute zuzugreifen
	olaf.sprechen();

	// Weitere Objekte können äquivalent erzeugt werden und verhalten
	// sich mittels der Methoden entsprechend
	Mensch bernd;
	bernd.alter = 30;
	bernd.name = "Bernd";

	bernd.sprechen();
	
}
