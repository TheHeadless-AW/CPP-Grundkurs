#include "kontrollstrukturen.h"
#include <string>
#include <iostream>
using namespace std;

void verzweigungen() {
	// ACHTUNG: Hier auf Case-Sensitivity achten
	string auswahl;

	// Wichtige Verkn�pfungen von boolschen Variablen sind folgende
	// logische Operatoren:

	//  && = Logisches UND
	//  || = Logisches ODER
	//  !  = Logisches NICHT

	// Allgemeine logische Operatoren sind:
	// <   = Kleiner als (<= Kleiner gleich)
	// >   = Gr��er als (>= Gr��er gleich)
	// ==  = Gleich (Links ist gleich rechts)
	// !=  = Ungleich (Links ist NICHT gleich rechts)

	// Nimmt die Eingabe des Nutzers entgegen und speichert
	// diese in der Variable auswahl
	cout << "Bist du ein Mann oder eine Frau?" << endl;
	cin >> auswahl;
	cout << "If Bedingung: ";
	// Wenn die (BEDINGUNG) wahr ist
	if (auswahl == "Mann") {
		// dann tu folgendes
		cout << "Du bist also ein Mann" << endl;
	}
	// ANSONSTEN, WENN diese andere (BEDINGUNG) wahr ist
	else if (auswahl == "Frau") {
		// dann tu folgendes
		cout << "Du bist also eine Frau" << endl;
	}
	// Wenn keine der vorhandenen Bedingungen wahr ist
	else {
		// dann tu folgendes
		cout << "Du bist also weder Mann noch Frau" << endl;
	}

	// TERN�RER OPERATOR
	// Speichervariable   =    if(Bedingung)    ?     wenn WAHR, dann     : wenn FALSCH, dann   ? wenn zweite Bedingung WAHR, dann : wenn zweite Bedingung auch FALSCH, dann
	//																		(Hier: else if())
	string mann_oder_frau = (auswahl == "Mann") ? "Du bist also ein Mann" : (auswahl == "Frau") ? "Du bist also eine Frau" : "Du bist also weder Mann noch Frau";

	cout << "Tern\x84rer Operator: " << mann_oder_frau << endl;

	cout << endl;
}

void schleifen() {
	// ****** Z�hlerschleife ****** //
	// Z�hlt ab i = 0 solange i kleiner als 5 ist
	// (also nicht einschlie�lich 5)
	cout << endl << "Z\x84hlerschleife" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i << endl;
	}

	// ****** Kopfgesteuerte Schleife ****** //
	// Z�hlt solange die Bedingung in der Klammer wahr ist.
	// Wird diese innerhalb der geschweiften Klammern False
	// gesetzt, so wird die Schleife unterbrochen.
	int zaehler = 0;
	cout << endl << "Kopfgesteuerte Schleife" << endl;
	while (zaehler < 5) {
		// Hier wird die aktuelle Zahl immer ausgegeben
		// und dann um 1 hochgezaehlt (zaehler++) 
		cout << zaehler << endl;
		zaehler++;

		// Irgendwann ist die Bedingung zaehler < 5 falsch
		// dann h�rt die Schleife automatisch auf
	}

	// ****** Fu�gesteuerte Schleife ****** //
	// Der Unterschied zur Kopfgesteuerten Schleife ist,
	// dass die Schleife DEFINITIV mindestens 1 Mal durchgef�hrt
	// wird und erst dann gepr�ft wird ob die Bedingung noch wahr ist
	zaehler = 0;
	cout << endl << "Fu\xE1gesteuerte Schleife" << endl;
	do {
		cout << zaehler << endl;
		zaehler++;
	} while (zaehler < 5);

	cout << endl;

	// ****** Die schlechte Schleife ****** //
	// Hier wird von goto Gebrauch gemacht, was man sich
	// schlichtweg nicht angew�hnen sollte und aus der Zeit
	// stammt in der sogenannte Code-Spr�nge noch 
	// gesellschaftlich anerkannt waren. Heutzutage
	// r�t man von so einem Konstrukt aufgrund der Lesbarkeit
	// ganz stark ab.

	// Nutzt die Bedingung und solange diese wahr ist wird diese
	// auch durchgef�hrt. Bei goto springt es automatisch in die
	// Zeile in der der entsprechende Bezeichner steht.
	zaehler = 0;

schleifen_anfang:
	if (zaehler <= 10) {
		cout << zaehler << endl;
		zaehler++;
		goto schleifen_anfang;
	}


}

void switch_case() {
	// ACHTUNG: Hier auf Case-Sensitivity achten
	int tag;

	// Nimmt die Eingabe des Nutzers entgegen und speichert
	// diese in der Variable auswahl
	cout << "Der wie vielte Tag der Woche ist heute?" << endl;
	cin >> tag;
	cout << "Switch-Case: ";

	// ACHTUNG: Hier k�nnen nur short, byte, int, char oder enums 
	//			genutzt werden. (Enums werden bei Arrays behandelt)

	// Switch nimmt eine Variable und vergleicht diese auf
	// spezielle F�lle. In diesem Fall ob der Typ int den Wert
	// 1,2,3,4,5,6 annimmt (Mo-Sa) und sollte keiner der 6 F�lle
	// eintreten kann es nur noch der Sonntag sein. 

	// Default steht wie das Wort schon sagt f�r das Standardverhalten
	// break ist wichtig, dass nach dem eintreten des Falles NICHT
	// weitergepr�ft wird. Ansonsten treten die Folgef�lle ebenfalls ein.
	// Siehe case 0.
	switch (tag) {
	case 0:
		cout << "Es ist nicht ";
	case 1:
		cout << "Montag" << endl;
		break;
	case 2:
		cout << "Dienstag" << endl;
		break;
	case 3:
		cout << "Mittwoch" << endl;
		break;
	case 4:
		cout << "Donnerstag" << endl;
		break;
	case 5:
		cout << "Freitag" << endl;
		break;
	case 6:
		cout << "Samstag" << endl;
		break;
	default:
		cout << "Sonntag" << endl;
		// Da hier das Ende ist ist kein break von N�ten
	}

	cout << endl;
}
