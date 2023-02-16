#include "arrays.h"
#include <string>
#include <iostream>
using namespace std;

// Einfache Deklaration, Initialisierung und Zugriff auf ein Array
void grundlagen_arrays() {
	// Arrays z�hlen immer ab 0 als erste Stelle
	// Datentyp Bezeichner[Anzahl Elemente des Arrays]

	// Achtung: Eine Initialisierung im Nachhinein mittels array = {} ist so nicht m�glich
	//			Ebenfalls, wenn 4 angegeben ist k�nnen auch nur maximal 4 Elemente initialisiert werden
	//			Bei z.B. 5 wird direkt ein Fehler angezeigt
	string tiere[4] = { "Hund", "Katze", "Maus", "Vogel" };

	// Aufgrund der Limitierung auf X Elemente ist es sinnvoller eine variable Gr��e zu w�hlen dabei
	// wird diese einfach weggelassen
	string kleidung[] = { "T-Shirt", "Pullover", "Kapuze", "Hose", "Schuhe" };

	// Ausgabe eines einzelnen Array Elementes (Beachte: Es wird bei 0 angefangen zu z�hlen)
	cout << kleidung[0] << endl;

	// �ndern eines einzelnen Array Elementes
	kleidung[0] = "Pullover";

	// Man sieht, dass auch Duplikate zul�ssig sind
	cout << kleidung[0] << endl << kleidung[1] << endl;

	// Leeres Array initialisieren
	// Wichtig: Hier MUSS zwingend die Gr��e angegeben werden,
	//			da quasi die Stellen leer initialisiert werden.
	string autos[2];

	// Man sieht, dass Leerstellen enthalten sind (z.B. Debugger)
	cout << autos[0] << endl << autos[1] << endl;

	autos[0] = "BMW";
	autos[1] = "Audi";

	// Man sieht auch hier wieder, dass auf das 3. Element aufgrund
	// der Initialisierungsgr��e 2 nicht zugegriffen werden kann.
	//autos[2] = "Opel";
	cout << autos[0] << endl << autos[1] << endl;

	// Zeigt die in Byte ben�tigte Gr��e des Arrays an
	cout << sizeof(autos) << endl;

	// Zeigt die tats�chliche Gr��e / L�nge des Arrays
	// also die Anzahl an Elementen
	cout << size(autos) << endl;
}

void schleifen_arrays() {
	// Initialisieren eines Arrays mittels Schleife
	int zahlen[10];

	// Z�hlt von 0 bis 9 und f�gt den selben Wert
	// an die Stelle im Array ein
	for (int i = 0; i < 10; i++) {
		zahlen[i] = i;
	}

	// Ausgabe des Arrays 
	// �quivalent zu Ausgabe mittels while und Z�hler
	cout << "Ausgabe mit Z\x84hlerschleife:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << zahlen[i] << endl;
	}

	// Die For-Each Schleife weisst von Anfang bis Ende
	// des angegebenen Containers (Hier ein Array) dem
	// linken Parameter (int zahl) die Elemente des Arrays
	// selbst zu, sodass diese direkt verarbeitet werden
	// k�nnen. 
	cout << "Ausgabe mit For-Each Schleife:" << endl;
	for (int zahl : zahlen) {
		cout << zahl << endl;
	}
}

void mehrdimensionale_arrays() {
	// Mehrdimensionale Arrays m�ssen von der Gr��e her
	// festgelegt werden. Allgemein gilt, wenn derartige
	// Strukturen limits haben, diese jedoch nicht vollst�ndig
	// bekannt sind auf sogenannte Container Klassen
	// wie Listen, Vektoren etc. zur�ckzugreifen.

	// Typ: string
	// Bezeichner: schachbrett
	// Anzahl Zeilen: 8
	// Anzahl Spalten pro Zeile: 8
	// typ bezeichner[zeilen][spalten]
	// bzw. typ bezeichner[1.Dimension][2.Dimension][X.Dimension]
	string schachbrett[8][8];

	// Mehrdimensionale Arrays sind also Arrays mit weiteren Arrays
	// als Elemente, welche widerrum auch weitere Arrays enthalten
	// k�nnen.

	// Gibt 8 aus f�r die Anzahl der "Zeilen" des Arrays
	cout << "Anzahl Zeilen: " << size(schachbrett) << endl;

	// Gibt ebenfalls 8 jedoch f�r die Anzahl der Spalten des Arrays aus
	// JA hier wird auf die Gr��e der 1. Zeile geschaut, jedoch ist die
	// der anderen ebenfalls immer gleich gro� somit muss einfach eine
	// Zeile des Arrays ausgew�hlt werden.
	cout << "Anzahl Spalten: " << size(schachbrett[0]) << endl;

	// ForEach f�r mehrdimensionale Arrays ist in C++
	// Aktuell nicht auf "einfache" Grundlagen-Art-Und-Weise
	// m�glich im Vergleich zu eindimensionalen Arrays

	// Daher wird hier eine normale Z�hlerschleife genutzt
	for (int zeile = 0; zeile < size(schachbrett); zeile++) {
		for (int spalte = 0; spalte < size(schachbrett[0]); spalte++) {
			// Wir wollen hier ja 1 bis 8 und nicht 0 bis 7 drinstehen haben daher +1
			schachbrett[zeile][spalte] = "Zeile: " + to_string(zeile+1) + " - Spalte: " + to_string(spalte+1);
		}
	}

	// Ausgabe wie oben gezeigt. Interessanter ist es im Debugger.
	for (int zeile = 0; zeile < size(schachbrett); zeile++) {
		for (int spalte = 0; spalte < size(schachbrett[0]); spalte++) {
			cout << schachbrett[zeile][spalte] << endl;
		}
	}
}
