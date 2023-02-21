/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "Klassen.h"

// Wir m�ssen wie gewohnt die Datei der Klasse
// inkludieren,
#include "Mensch.h"
#include <iostream>
using namespace std;

void grundlagen_klassen(){
	Mensch olaf;

	// Man beachte, dass beide wieder die klasssichen Initialwerte
	// beim Zugriff erhalten, au�er diese sind als default zugewiesen.
	cout << "Alter: " << olaf.alter << endl;
	cout << "Name: " << olaf.name << endl;

	// Diese k�nnen wie gewohnt angepasst und ver�ndert werden
	olaf.alter = 20;
	olaf.name = "Olaf";

	cout << "Alter: " << olaf.alter << endl;
	cout << "Name: " << olaf.name << endl;

	// Besser ist es �ber Methoden auf Attribute zuzugreifen
	olaf.sprechen();

	// Weitere Objekte k�nnen �quivalent erzeugt werden und verhalten
	// sich mittels der Methoden entsprechend
	Mensch bernd;
	bernd.alter = 30;
	bernd.name = "Bernd";

	bernd.sprechen();
	
}
