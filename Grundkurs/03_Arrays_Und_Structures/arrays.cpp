#include "arrays.h"
#include <string>
#include <iostream>
using namespace std;

// Einfache Deklaration, Initialisierung und Zugriff auf ein Array
void beispiel_1_arrays() {
	// Arrays zählen immer ab 0 als erste Stelle
	// Datentyp Bezeichner[Anzahl Elemente des Arrays]

	// Achtung: Eine Initialisierung im Nachhinein mittels array = {} ist so nicht möglich
	//			Ebenfalls, wenn 4 angegeben ist können auch nur maximal 4 Elemente initialisiert werden
	//			Bei z.B. 5 wird direkt ein Fehler angezeigt
	string tiere[4] = { "Hund", "Katze", "Maus", "Vogel" };

	// Aufgrund der Limitierung auf X Elemente ist es sinnvoller eine variable Größe zu wählen dabei
	// wird diese einfach weggelassen
	string kleidung[] = { "T-Shirt", "Pullover", "Kapuze", "Hose", "Schuhe" };

	// Ausgabe eines einzelnen Array Elementes (Beachte: Es wird bei 0 angefangen zu zählen)
	cout << kleidung[0] << endl;

	// Ändern eines einzelnen Array Elementes
	kleidung[0] = "Pullover";

	// Man sieht, dass auch Duplikate zulässig sind
	cout << kleidung[0] << endl << kleidung[1] << endl;

	// Leeres Array initialisieren
	// Wichtig: Hier MUSS zwingend die Größe angegeben werden,
	//			da quasi die Stellen leer initialisiert werden.
	string autos[2];

	// Man sieht, dass Leerstellen enthalten sind (z.B. Debugger)
	cout << autos[0] << endl << autos[1] << endl;

	autos[0] = "BMW";
	autos[1] = "Audi";

	// Man sieht auch hier wieder, dass auf das 3. Element aufgrund
	// der Initialisierungsgröße 2 nicht zugegriffen werden kann.
	//autos[2] = "Opel";
	cout << autos[0] << endl << autos[1] << endl;

	// Zeigt die in Byte benötigte Größe des Arrays an
	cout << sizeof(autos) << endl;

	// Zeigt die tatsächliche Größe / Länge des Arrays
	// also die Anzahl an Elementen
	cout << size(autos);

}
