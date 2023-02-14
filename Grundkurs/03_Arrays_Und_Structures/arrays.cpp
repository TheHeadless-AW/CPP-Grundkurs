#include "arrays.h"
#include <string>
#include <iostream>
using namespace std;

// Einfache Deklaration, Initialisierung und Zugriff auf ein Array
void beispiel_1_arrays(){
	// Arrays z�hlen immer ab 0 als erste Stelle
	// Datentyp Bezeichner[Anzahl Elemente des Arrays]

	// Achtung: Eine Initialisierung im Nachhinein mittels array = {} ist so nicht m�glich
	//			Ebenfalls, wenn 4 angegeben ist k�nnen auch nur maximal 4 Elemente initialisiert werden
	//			Bei z.B. 5 wird direkt ein Fehler angezeigt
	string tiere[4] = { "Hund", "Katze", "Maus", "Vogel"};

	// Aufgrund der Limitierung auf X Elemente ist es sinnvoller eine variable Gr��e zu w�hlen dabei
	// wird diese einfach weggelassen
	string kleidung[] = { "T-Shirt", "Pullover", "Kapuze", "Hose", "Schuhe" };

	
}
