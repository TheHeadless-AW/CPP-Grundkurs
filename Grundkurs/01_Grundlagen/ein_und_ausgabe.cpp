#include "ein_und_ausgabe.h"
#include <iostream>
#include <string>
using namespace std;

// setprecision ist hier enthalten
#include <iomanip> // Manipulatoren mit Wert

void ausgabe_und_formatierung() {
	// Praktische Quellen: https://faculty.cs.niu.edu/~hutchins/csci241/output.htm

	cout.setf(ios::showpos);

	// Zeigt das + Zeichen zusätzlich an, wenn es eine positive Zahl ist
	cout << showpos << -30 << endl;
	cout << showpos << 30 << endl;

	// noshowpos deaktiviert die Funktion des Ausgabekanals das
	// + Zeichen anzuzeigen
	cout << noshowpos << endl;

	// Formatiert die Zahl als Hexadezimalzahl aus (oct, hex etc. auch möglich)
	cout << hex << 30 << endl;
	cout << dec << 30 << endl;
	cout << oct << 30 << endl;

	// ACHTUNG: Es kann zwischen den Typen gewechselt werden

	// Setzt die Buchstaben von Zahlensystemen (z.B. Hexadezimal) auf Großbuchstaben
	cout << uppercase << endl;
	cout << hex << 30 << endl;

	// wieder ändern zu Dezimalzahlen
	cout << dec << endl;
	cout << nouppercase << endl;

	// Sorgt für die Anzeige von 6 Zeichen für Kommazahlen einschließlich
	// der vorhandenen Nachkommastellen
	cout << showpoint << 123.123456789 << endl;

	// Zeigt die angezeigte Anzahl an Ziffern anhand der Präzision
	// um hier alle anzeigen zu lassen wäre bei 123.123456 also 9
	// Stellen notwendig. 
	// Bei einer höheren Präzision wird mit 0 aufgefüllt.
	cout << setprecision(15) << 123.123456 << endl;

	// Ändert setprecision() zur Anzahl Nachkommastellen. Hier sind
	// also für die volle Anzeige nur noch 6 notwendig.
	cout << setprecision(7) << fixed << 123.123456 << endl;

	// Ändert die Schreibweise zur wissenschaftlichen Schreibweise
	//cout << scientific << 10000000000000000000.012456 << endl;

	// Deaktiviert die wissenschaftliche Schreibweise und
	// nutzt die zuvor festgelegte Präzision (Hier 7 Nachkommastellen)
	cout << fixed << endl;
	cout << 10000000000000000000.012456 << endl; // Zahl zu groß als das die Nachkommastellen berücksichtigt werden
	cout << 100.123456789 << endl;

	// Wird mit einer "Breite" von 50 Zeichen rechtsbündig 
	// ausgeben. Nicht vorhandene Zeichen werden mit 
	// Leerzeichen befüllt.
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl;

	// Hier sieht man, dass standardmäßig right angenommen wird z.B. für " Text nach Zahl"
	cout << left << setw(50) << 1234567890 << " Text nach Zahl" << endl;
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl;

	// Ebenfalls ist es möglich die Whitespaces zu ersetzten
	// BEACHTE: Die Reihenfolge wird eingehalten. Erst nach dem ersten Mal
	// " Text nach Zahl" wird setfill ausgelöst und auch beibehalten. 
	// Dies ist mit setfill(' ') wieder zurücksetzbar, da wieder Whitespaces
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

	// Nutzen sie als Beispieleingabe mit Anführungszeichen: "Hallo Welt!"

	// Hier wird also der Userinput in die Variable Name
	// umgeleitet
	cout << "Eingabe: ";
	getline(cin, name);

	cout << name << endl;;

	// ************************************ //
	// ************* WICHTIG ************** //
	// ************************************ //

	// Verwirft den kompletten aktuell vorhandenen Inhalt
	// dies ermöglicht die erneute Wiedergabe von cin.
	// Vorstellung: cin >> name legt Flüssigkeit in ein Rohr.
	//				Diese bleibt bei Nutzung von getline erhalten
	//				und wird durch sync geleert. 
	// Es bietet sich also an, dass wenn man etwas Neues einlesen
	// möchte immer vorher sync auf dem Stream ausführt.
	// Weitere Verwendung folgt in späteren Kapiteln.
	cin.sync();

	// Dies ist eine Möglichkeit eine komplette Zeile
	// einlesen zu können.
	string ganze_zeile_mit_leerzeichen;

	// Nutzen sie als Beispieleingabe mit Anführungszeichen: "Hallo Welt!"

	// Erwartet als Parameter an erster Stelle einen istream (z.B. cin)
	// und als zweiten Parameter eine Variable in der der Input reinfließt
	// getline gibt selbst auch einen istream zurück, welcher weiter verarbeitet
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