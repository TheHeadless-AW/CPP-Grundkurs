/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung1.h"
#include <iostream>
using namespace std;

void uebung_1_aufgabe_1() {
	cout << "M\x94gen" << endl;
	cout << "t\x84ten wir schon wollen," << endl;
	cout << "aber k\x94nnen" << endl;
	cout << "haben wir uns nicht getraut!" << endl;
}

void uebung_1_aufgabe_2() {
	// Fehler 1/2: /* */ und nicht */ ebenfalls // auf der falschen Seite
//      */ Hier sollte man die Brille nicht vergessen //

	// Fehler 3: iostream
//      #include <stream>

	// Fehler 4/5: Rückgabetyp int und Parameterklammern
//      in main
//      {

	// Fehler 6: ohne using namespace std; wird cout nicht bekannt sein
//		 cout << "Wenn dieser Text",

	// Fehler 7: << statt >>
//		 cout >> " auf Ihrem Bildschirm erscheint, ";

	// Fehler 8: Theoretisch keiner aber ich vermute endl soll für ein End of Line stehen
	// Fehler 9: Fehlendes ; am Ende der Zeile
//		 cout << " endl; "

	// Fehler 10: ' ' werden vmtl. für Chars und nicht für Strings genutzt und ggf. fehlendes ;
//       cout << 'können Sie sich auf die Schulter '

	// Fehler 11: Fehlendes ; am Ende der Zeile (stattdessen . genutzt)
	//			  möglicherweise dann kein fehlendes ; in der Vorzeile
//       << "klopfen!" << endl.

//       return 0;
//      }
}

void pause()
{
	cout << "PAUSE";
}
void uebung_1_aufgabe_3()
{
	cout << endl << "Lieber Teilnehmer, "
		<< endl << "gönnen Sie"
		<< " sich jetzt eine ";
	pause();
	cout << "!" << endl;
	//return 0;

	// Ausgabe: Lieber Teilnehmer,
	//          g÷nnen Sie sich jetzt eine PAUSE!
}
