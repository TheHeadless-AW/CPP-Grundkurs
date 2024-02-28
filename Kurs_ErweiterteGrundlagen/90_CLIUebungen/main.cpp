/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <iostream>
#include "uebung1.h"
#include "uebung2.h"
#include "uebung3.h"
#include "uebung4.h"
#include "uebung5.h"
#include "uebung6.h"
#include "uebung7.h"
#include "uebung8.h"
#include "uebung9.h"
#include "main.h"
#include "uebung10.h"
//  #include "uebung11.h" // Auskommentieren wenn Übung 11 ausprobiert werden soll
#include "uebung12.h"
#include "uebung12_01.h"
#include "uebung13_Product.h"
#include "uebung13_PackedFood.h"
#include "uebung13_UnpackedFood.h"
#include "uebung14.h"
#include "uebung15.h"
#include <vector>
#include <list>
#include <deque>
#include "uebung16.h"
using namespace std;

void uebung5() {
	string zeichenkette;

	// Einlesen der Zeichenkette
	cout << "Geben Sie eine Zeichenkette ein: ";
	cin >> zeichenkette;

	// Laenge der Zeichenkette berechnen
	int laenge = zeichenkette.length();

	// Umgekehrte Zeichenkette ausgeben
	invers(zeichenkette.c_str(), laenge);
}

void uebung6() {
	// Die Ausgaben passen noch nicht mit der entsprechenden Wahrheitstabelle
	// ueberein. Sind jedoch fuer den Kursinhalt irrelevant.

	kategorisiereDreieck(true, true, false, false, false); // Gleichseitig

	kategorisiereDreieck(false, true, true, true, false); // Gleichschenklig
	kategorisiereDreieck(false, true, true, false, false);
	kategorisiereDreieck(false, true, false, true, false);
	//kategorisiereDreieck(false, true, false, false, false);

	kategorisiereDreieck(false, false, true, true, true); // Unregelmaessig
	kategorisiereDreieck(false, false, false, true, true);
	kategorisiereDreieck(false, false, true, false, true);
	//kategorisiereDreieck(false, false, false, false, true);

	kategorisiereDreieck(false, true, true, false, true); // Rechtwinklig
	kategorisiereDreieck(false, false, true, false, true);
	kategorisiereDreieck(false, true, true, false, false);
	//kategorisiereDreieck(false, false, true, false, false);
}

void uebung8() {
	cout << "Der Notendurchschnitt ist: " << durchschnitt(1, 5, 3, 3, 4, 12, 5, 2, 0) << endl;
	cout << "Der Notendurchschnitt ist: " << durchschnitt(1, 5, 0) << endl;
	cout << "Der Notendurchschnitt ist: " << durchschnitt(1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 6, 1, 0) << endl;
}

void uebung10() {
	aufgabe10();
}

// Auskommentieren wenn Übung 11 ausprobiert werden soll
void uebung11() {
	// Erzeugen Sie ein CKonto-Objekt mit einem anfaenglichen Kontostand von 1000 Euro und einem Dispo von 500 Euro.
	/* CKonto konto(1000.0, 500.0);
	konto.Information();

	konto.Einzahlen(200.0);
	konto.Information();

	// Auszahlen von 2000 Euro (sollte fehlschlagen)
	konto.Auszahlen(2000.0);
	konto.Information();

	konto.Auszahlen(800.0);
	konto.Information();

	// Hier wird nun das Dispo genutzt
	konto.Auszahlen(600.0);
	konto.Information(); */
}

void uebung12() {
	Datum benutzerDatum(22, 2, 2024);

	cout << "Benutzerdefiniertes Datum: ";
	benutzerDatum.DruckDatum();

	cout << "Wochentag: " << benutzerDatum.DruckWochentag() << endl;

	DatumAusgabe datumAusgabe(22, 2, 2024);
	datumAusgabe.AusgabeA();
	datumAusgabe.AusgabeB();
	datumAusgabe.AusgabeC();
	datumAusgabe.AusgabeD();

	cout << "Druckdatum der Klasse Datumausgabe: ";
	datumAusgabe.DruckDatum();
}

void uebung13() {
	// Objekte mit vollstaendiger Initialisierung
	Product produkt1(123456, "Produkt1");
	PackedFood verpackteLebensmittel1(789012, "VerpackteLebensmittel1", 2.5);
	UnpackedFood loseLebensmittel1(345678, "LoseLebensmittel1", 1.5, 4.99);

	// Getter und Printer fuer produkt1
	cout << "Produkt1 - Urspruengliche Werte:\n";
	produkt1.printer();
	cout << "Produkt1 Barcode: " << produkt1.getCode() << endl;
	cout << "Produkt1 Name: " << produkt1.getName() << endl;
	cout << "--------------------------------\n";

	// Setter fuer produkt1
	produkt1.setCode(654321);
	produkt1.setName("NeuesProdukt1");

	// Getter und Printer fuer produkt1 nach aenderung
	cout << "Produkt1 - Aktualisierte Werte:\n";
	produkt1.printer();
	cout << "Produkt1 Barcode: " << produkt1.getCode() << endl;
	cout << "Produkt1 Name: " << produkt1.getName() << endl;
	cout << "--------------------------------\n";

	// Getter und Printer fuer verpackteLebensmittel1
	cout << "VerpackteLebensmittel1 - Urspruengliche Werte:\n";
	verpackteLebensmittel1.printer();
	cout << "VerpackteLebensmittel1 Barcode: " << verpackteLebensmittel1.getCode() << endl;
	cout << "VerpackteLebensmittel1 Name: " << verpackteLebensmittel1.getName() << endl;
	cout << "VerpackteLebensmittel1 Stueckpreis: " << verpackteLebensmittel1.getUnitPrice() << endl;
	cout << "--------------------------------\n";

	// Setter fuer verpackteLebensmittel1
	verpackteLebensmittel1.setCode(111111);
	verpackteLebensmittel1.setName("NeueVerpackteLebensmittel1");
	verpackteLebensmittel1.setUnitPrice(3.99);

	// Getter und Printer fuer verpackteLebensmittel1 nach aenderung
	cout << "VerpackteLebensmittel1 - Aktualisierte Werte:\n";
	verpackteLebensmittel1.printer();
	cout << "VerpackteLebensmittel1 Barcode: " << verpackteLebensmittel1.getCode() << endl;
	cout << "VerpackteLebensmittel1 Name: " << verpackteLebensmittel1.getName() << endl;
	cout << "VerpackteLebensmittel1 Stueckpreis: " << verpackteLebensmittel1.getUnitPrice() << endl;
	cout << "--------------------------------\n";

	// Getter und Printer fuer loseLebensmittel1
	cout << "LoseLebensmittel1 - Urspruengliche Werte:\n";
	loseLebensmittel1.printer();
	cout << "LoseLebensmittel1 Barcode: " << loseLebensmittel1.getCode() << endl;
	cout << "LoseLebensmittel1 Name: " << loseLebensmittel1.getName() << endl;
	cout << "LoseLebensmittel1 Gewicht: " << loseLebensmittel1.getWeight() << endl;
	cout << "LoseLebensmittel1 Kilopreis: " << loseLebensmittel1.getKiloPrice() << endl;
	cout << "--------------------------------\n";

	// Setter fuer loseLebensmittel1
	loseLebensmittel1.setCode(222222);
	loseLebensmittel1.setName("NeueLoseLebensmittel1");
	loseLebensmittel1.setWeight(2.0);
	loseLebensmittel1.setKiloPrice(5.49);

	// Getter und Printer fuer loseLebensmittel1 nach aenderung
	cout << "LoseLebensmittel1 - Aktualisierte Werte:\n";
	loseLebensmittel1.printer();
	cout << "LoseLebensmittel1 Barcode: " << loseLebensmittel1.getCode() << endl;
	cout << "LoseLebensmittel1 Name: " << loseLebensmittel1.getName() << endl;
	cout << "LoseLebensmittel1 Gewicht: " << loseLebensmittel1.getWeight() << endl;
	cout << "LoseLebensmittel1 Kilopreis: " << loseLebensmittel1.getKiloPrice() << endl;
	cout << "--------------------------------\n";

	// Objekte mit Default-Konstruktor
	Product produkt2;
	PackedFood verpackteLebensmittel2;
	UnpackedFood loseLebensmittel2;

	// Testen von get- und set-Methoden sowie scanner() und printer() fuer die Objekte mit Default-Konstruktor
	cout << "Eingabe - Produkt 2 Scanner:\n";
	produkt2.scanner();
	cout << "--------------------------------\n";

	cout << "Eingabe - VerpackteLebensmittel 2 Scanner:\n";
	verpackteLebensmittel2.scanner();
	cout << "--------------------------------\n";

	cout << "Eingabe - LoseLebensmittel2 Scanner:\n";
	loseLebensmittel2.scanner();
	cout << "--------------------------------\n";

	cout << "Produkt2 - Werte nach Scanner:\n";
	produkt2.printer();
	cout << "--------------------------------\n";

	cout << "VerpackteLebensmittel2 - Werte nach Scanner:\n";
	verpackteLebensmittel2.printer();
	cout << "--------------------------------\n";

	cout << "LoseLebensmittel2 - Werte nach Scanner:\n";
	loseLebensmittel2.printer();
	cout << "--------------------------------\n";
}

void uebung14() {
	// Beispiel für CPerson
	CPerson person1;
	person1.lesen();
	person1.schreiben();

	// Beispiel für CKonto
	CKonto konto1(1000.0);
	konto1.einzahlen(500.0);
	konto1.abheben(200.0);

	// Beispiel für CGiroKonto
	CGiroKonto girokonto1(2000.0, 500.0, 10.0);
	girokonto1.einzahlen(1000.0);
	girokonto1.abheben(800.0);
	cout << "Dispo: " << girokonto1.getDispo() << ", Dispo Prozent: " << girokonto1.getDispoProzent() << endl;

	// Beispiel für CSparKonto
	CSparKonto sparkonto1(3000.0, 12, 5.0);
	sparkonto1.einzahlen(2000.0);
	sparkonto1.abheben(1000.0);
	cout << "Dauer: " << sparkonto1.getDauer() << ", Zinssatz: " << sparkonto1.getZinssatz() << endl;

	// Beispiel für CSparer
	CSparer saver1("Max", "Mustermann", "01.01.1990", 5000.0, 24, 3.0);
	saver1.schreiben();

	// Beispiel für CGirokunde
	CGirokunde girokunde1("Anna", "Musterfrau", "05.05.1985", 3000.0, 200.0, 8.0);
	girokunde1.schreiben();

	// Beispiel für CKombi
	CKombi kombi1("John", "Doe", "10.10.1970", 7000.0, 300.0, 12.0, 36, 4.5);
	kombi1.schreiben();
}

void uebung15() {
	vector<int> v = { 1, 2, 3, 4, 5 };
	ElementAusgabe(v, '*'); // Gibt die Elemente mit '*' als Trennzeichen aus

	list<string> strList = { "Hallo", "Welt", "C++" };
	ElementAusgabe(strList); // Gibt die Elemente untereinander aus, da kein Trennzeichen übergeben wurde

	deque<double> d = { 3.14, 2.718, 1.618 };
	ElementAusgabe(d, ','); // Gibt die Elemente mit ',' als Trennzeichen aus
}

void uebung16() {
	Personalverwaltung personalverwaltung;

	// Anzahl der Namen eingeben
	int anzahl;
	cout << "Anzahl der Namen eingeben: ";
	cin >> anzahl;

	// Namen und Nummern eingeben
	personalverwaltung.NamenUndNummernEingeben(anzahl);

	// Namen und Nummern zu den Maps hinzufügen
	personalverwaltung.ZuMapHinzufuegen();

	// Alphabetisch sortierte Listen ausgeben
	personalverwaltung.AlphabetischSortierteListenAusgeben();
}

int main()
{
	// Aufruf der entsprechenden Uebungsfunktionen. Gewuenschte Funktion ausklammern.

	// Uebung 1
	// namensausgabe();

	// Uebung 2
	// entertoexit();

	// Uebung 3
	// manipulatoren_rechnung();

	// Uebung 4
	// artikelformatierung();

	// Uebung 5
	// uebung5();

	// Uebung 6
	// uebung6();

	// Uebung 7
	// ausgabeText();

	// Uebung 8
	// uebung8();

	// Uebung 9 (Seltsame Aufgabenstellung)
	// ausgabeLandUndHauptstadt();

	// Uebung 10
	// uebung10();

	// Uebung 11
	// uebung11();

	// Uebung 12
	// uebung12();

	// Uebung 13
	// uebung13();

	// Uebung 14
	// uebung14();

	// Uebung 15
	uebung15();

	// Uebung 16
	// uebung16();

}

