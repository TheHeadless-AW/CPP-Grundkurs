/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "Mensch.h"
#include <iostream>
// Innerhalb einer .cpp nicht schlimm
using namespace std;

// Wird wie bei namespaces genutzt
void Mensch::sprechen(){
	// Innerhalb der sogenannten Methoden 
	// einer Klasse (= Name einer Funktion in einer Klasse)
	// kann man auf die Attribute selbst zugreifen.

	// Gibt abhängig vom erzeugten Objekt einer Klasse die entsprechenden
	// Attribute aus.
	cout << "Ich hei\xE1" << "e " << Mensch::name << " und bin " << Mensch::alter << " Jahre alt." << endl;
}
