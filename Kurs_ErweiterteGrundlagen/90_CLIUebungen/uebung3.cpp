/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <iostream>
#include <iomanip>
using namespace std;

void manipulatoren_rechnung() {
	const int anzahlArtikel = 10;

	double summe = 0.0;
	double preise[anzahlArtikel];

	// Einstellung für die Ausgabe mit 2 Dezimalstellen
	cout << fixed << setprecision(2);

	cout << "Eingabe der Artikelpreise:\n";

	for (int i = 0; i < anzahlArtikel; ++i) {
		// Eingabe des Artikelpreises
		cout << "Artikelpreis in EUR: ";
		cin >> preise[i];

		// Addiere den Artikelpreis zur Gesamtsumme
		summe += preise[i];
	}

	// Ausgabe der Rechnung
	cout << "\nR E C H N U N G\n";
	cout << "=================\n";

	for (int i = 0; i < anzahlArtikel; ++i) {
		// Ausgabe des Artikelpreises
		cout << setw(8) << fixed << right << preise[i] << " EUR\n";
	}

	// Ausgabe der Summenzeile
	cout << "-----------------\n";
	cout << setw(8) << right << summe << " EUR\n";
	cout << "=================\n";
}