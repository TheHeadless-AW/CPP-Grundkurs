// Fügt die .h Datei von Rechnung hinzu und macht somit
// die dort enthaltenen Funktionen und Konstanten bekannt.
// Die Datei als .h ist zwingend erforderlich. 
// include xxx.cpp wird zu großen Fehlern führen.
#include "funktionen.h"

// Nutzt eine bereits vorhandene Bibliothek
#include <iostream>
// Nutzt die Bibliothek std sodass cout nutzbar ist und nicht std::cout
using namespace std;

/***** Weitere Übersichten ******/
#include "datentypen.h";
#include "rechnungen.h"

int main() {
	// **********************************************  //
	// *************  Startbeispiele: ***************  //
	// **********************************************  //

	// Stringkonkatenation verschiedener Datentypen ist möglich
	// Hier wird ein String << int (Rückgabetyp von addieren() << endl (Zeichen) kombiniert.
	// und anschließend in die Konsole umgeleitet.
	
	// cout << "Ergebnis: " << addieren() << endl;

	// textausgabe("Hallo Welt!");

	// **********************************************  //
	// **********  Weitere Beispiele: ***************  //
	// **********************************************  //
	//datentypen();

	allgemeine_rechnungen();

	zufallszahlen();



	// Alle Escape Sequenzen: https://en.cppreference.com/w/cpp/language/escape




	return 0;
}


