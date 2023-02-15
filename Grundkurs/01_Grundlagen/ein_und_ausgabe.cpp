#include "ein_und_ausgabe.h"
#include <iostream>
#include <string>
using namespace std;

// setprecision ist hier enthalten
#include <iomanip> // Manipulatoren mit Wert

void ausgabe_und_formatierung() {
	// Praktische Quellen: https://faculty.cs.niu.edu/~hutchins/csci241/output.htm

	cout.setf(ios::showpos);

	// Zeigt das + Zeichen zus�tzlich an, wenn es eine positive Zahl ist
	cout << showpos << -30 << endl;
	cout << showpos << 30 << endl;

	// noshowpos deaktiviert die Funktion des Ausgabekanals das
	// + Zeichen anzuzeigen
	cout << noshowpos << endl;

	// Formatiert die Zahl als Hexadezimalzahl aus (oct, hex etc. auch m�glich)
	cout << hex << 30 << endl;
	cout << dec << 30 << endl;
	cout << oct << 30 << endl;

	// ACHTUNG: Es kann zwischen den Typen gewechselt werden

	// Setzt die Buchstaben von Zahlensystemen (z.B. Hexadezimal) auf Gro�buchstaben
	cout << uppercase << endl;
	cout << hex << 30 << endl;

	// wieder �ndern zu Dezimalzahlen
	cout << dec << endl;
	cout << nouppercase << endl;

	// Sorgt f�r die Anzeige von 6 Zeichen f�r Kommazahlen einschlie�lich
	// der vorhandenen Nachkommastellen
	cout << showpoint << 123.123456789 << endl;

	// Zeigt die angezeigte Anzahl an Ziffern anhand der Pr�zision
	// um hier alle anzeigen zu lassen w�re bei 123.123456 also 9
	// Stellen notwendig. 
	// Bei einer h�heren Pr�zision wird mit 0 aufgef�llt.
	cout << setprecision(15) << 123.123456 << endl;

	// �ndert setprecision() zur Anzahl Nachkommastellen. Hier sind
	// also f�r die volle Anzeige nur noch 6 notwendig.
	cout << setprecision(7) << fixed << 123.123456 << endl;

	// �ndert die Schreibweise zur wissenschaftlichen Schreibweise
	//cout << scientific << 10000000000000000000.012456 << endl;

	// Deaktiviert die wissenschaftliche Schreibweise und
	// nutzt die zuvor festgelegte Pr�zision (Hier 7 Nachkommastellen)
	cout << fixed << endl;
	cout << 10000000000000000000.012456 << endl; // Zahl zu gro� als das die Nachkommastellen ber�cksichtigt werden
	cout << 100.123456789 << endl;

	// Wird mit einer "Breite" von 50 Zeichen rechtsb�ndig 
	// ausgeben. Nicht vorhandene Zeichen werden mit 
	// Leerzeichen bef�llt.
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl;

	// Hier sieht man, dass standardm��ig right angenommen wird z.B. f�r " Text nach Zahl"
	cout << left << setw(50) << 1234567890 << " Text nach Zahl" << endl;
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl;

	// Ebenfalls ist es m�glich die Whitespaces zu ersetzten
	// BEACHTE: Die Reihenfolge wird eingehalten. Erst nach dem ersten Mal
	// " Text nach Zahl" wird setfill ausgel�st und auch beibehalten. 
	// Dies ist mit setfill(' ') wieder zur�cksetzbar, da wieder Whitespaces
	// genutzt werden.
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl << setfill('.');
	cout << left << setw(50) << 1234567890 << " Text nach Zahl" << endl << setfill(' ');
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl;

}

void eingabe() {
	// Nimmt eine einfache Nutzereingabe entgegen.
	// ACHTUNG: Sobald ein Whitespace / Leerzeichen
	//			auftaucht wird abgebrochen.

	string name;

	// Nutzen sie als Beispieleingabe mit Anf�hrungszeichen: "Hallo Welt!"

	// Hier wird also der Userinput in die Variable Name
	// umgeleitet
	cout << "Eingabe: ";
	getline(cin, name);

	cout << name << endl;;

	// ************************************ //
	// ************* WICHTIG ************** //
	// ************************************ //

	// Verwirft den kompletten aktuell vorhandenen Inhalt
	// dies erm�glicht die erneute Wiedergabe von cin.
	// Vorstellung: cin >> name legt Fl�ssigkeit in ein Rohr.
	//				Diese bleibt bei Nutzung von getline erhalten
	//				und wird durch sync geleert. 
	// Es bietet sich also an, dass wenn man etwas Neues einlesen
	// m�chte immer vorher sync auf dem Stream ausf�hrt.
	// Weitere Verwendung folgt in sp�teren Kapiteln.
	cin.sync();

	// Dies ist eine M�glichkeit eine komplette Zeile
	// einlesen zu k�nnen.
	string ganze_zeile_mit_leerzeichen;

	// Nutzen sie als Beispieleingabe mit Anf�hrungszeichen: "Hallo Welt!"

	// Erwartet als Parameter an erster Stelle einen istream (z.B. cin)
	// und als zweiten Parameter eine Variable in der der Input reinflie�t
	// getline gibt selbst auch einen istream zur�ck, welcher weiter verarbeitet
	// werden kann.
	cout << "Eingabe: ";
	getline(cin, ganze_zeile_mit_leerzeichen);

	cout << ganze_zeile_mit_leerzeichen << endl;

	// Liest eine Zeile bis zum im 3. Parameter angegeben Zeichen ein
	// bricht hier also bei * ab.
	// Testeingabe: "Hallo * Welt!"
	cin.sync();

	cout << "Eingabe: ";
	getline(cin, ganze_zeile_mit_leerzeichen, '*');

	cout << ganze_zeile_mit_leerzeichen << endl;
}