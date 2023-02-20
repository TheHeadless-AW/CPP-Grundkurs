/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung4.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void uebung_4_aufgabe_1() {
	// a)
	cout << setw(15) << left << 0.123456 << endl;;

	// b)
	cout << setw(12) << right << fixed << setprecision(2) << 23.987 << endl;

	// c)
	cout << setw(10) << fixed << setprecision(4) << -123.456 << endl;

	// Wäre eine Feldbreite von 10 sinnvoll?
	// Das kommt ganz auf den Zweck darauf an. Zumindest wäre es anwendbar
	// ohne, dass eine Verkürzung der Zahl stattfindet.
}

void uebung_4_aufgabe_2() {
	string artikelnummer, stueckzahl, stueckpreis;

	cout << "Geben Sie die Artikelnummer ein: ";
	cin >> artikelnummer;
	cin.sync();

	cout << "Geben Sie die St\x81" << "ckzahl ein : ";
	cin >> stueckzahl;
	cin.sync();

	cout << "Geben Sie den St\x81" << "ckpreis ein: ";
	cin >> stueckpreis;
	cin.sync();

	// Hier wurde bei \x81 nochmal getrennt, da \x81c ebenfalls existiert, jedoch zu Fehlern führt
	cout << left << setw(10) << "Artikelnummer" << "\t" << "St\x81" << "ckzahl" << "\t" << right << "St\x81" << "ckpreis" << endl;
	cout << left << setw(10) << artikelnummer << "\t" << stueckzahl << "\t\t" << right << stueckpreis << " EURO" << endl;

	// Achtung: Hier wäre noch Optimierungsbedarf beim Abfangen der Nutzereingaben,
	//			sowie der Anordnung bei größeren Stückzahlen

}

void uebung_4_aufgabe_3() {
	int zeichencode;

	cout << "Geben sie den entsprechenden Zahlencode in dezimal Schreibweise ein: ";
	cin >> zeichencode;
	cout << endl;
	cin.sync();

	cout << "Zeichen\t" << "Zeichencode (dec)\t" << "Zeichencode (hex)\t" << "Zeichencode (oct)" << endl;
	cout << char(zeichencode) << "\t" << dec << zeichencode << "\t\t\t" << hex << uppercase << zeichencode << "\t\t\t" << oct << zeichencode << endl;

	// ACHTUNG: Sobald man eine Zahl größer als 127 nimmt wird automatisch der Wertebereich auf unsigned
	//			geändert, sodass man extended Ascii mit 0-255 nutzt. Bei Zahlen größer als 255 wird dann
	//			schlichtweg von vorne angefangen zu zählen z.B. wäre 256 wieder gleichwertig mit 0 bzw.
	//			die Zahl 336 = 255+81 wäre also von 0 angefangen zu zählen die 81. Stelle in der Tabelle
	//			bzw. die 80. Dezimalzahl und somit P (groß p)
}
