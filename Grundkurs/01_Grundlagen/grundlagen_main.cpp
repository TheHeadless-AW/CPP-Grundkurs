/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
// F�gt die .h Datei von Rechnung hinzu und macht somit
// die dort enthaltenen Funktionen und Konstanten bekannt.
// Die Datei als .h ist zwingend erforderlich. 
// include xxx.cpp wird zu gro�en Fehlern f�hren.
#include "funktionen.h"

// Nutzt eine bereits vorhandene Bibliothek
#include <iostream>
// Nutzt die Bibliothek std sodass cout nutzbar ist und nicht std::cout
using namespace std;

/***** Weitere �bersichten ******/
#include "datentypen.h"
#include "rechnungen.h"
#include "ein_und_ausgabe.h"
#include "konstanten_und_makros.h"

int main() {
	// **********************************************  //
	// *************  Startbeispiele: ***************  //
	// **********************************************  //

	// Stringkonkatenation verschiedener Datentypen ist m�glich
	// Hier wird ein String << int (R�ckgabetyp von addieren() << endl (Zeichen) kombiniert.
	// und anschlie�end in die Konsole umgeleitet.
	
	 cout << "Ergebnis: " << addieren() << endl;

	// textausgabe("Hallo Welt!");

	// **********************************************  //
	// **********  Weitere Beispiele: ***************  //
	// **********************************************  //
	
	// Alle Escape Sequenzen: https://en.cppreference.com/w/cpp/language/escape
	
	
	//datentypen();

	//allgemeine_rechnungen();

	//zufallszahlen();

	//ausgabe_und_formatierung();

	//eingabe();

	//konstanten_beispiel1();

	return 0;
 }


