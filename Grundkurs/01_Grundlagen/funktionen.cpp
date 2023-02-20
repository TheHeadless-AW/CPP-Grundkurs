/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "funktionen.h"


// Eine inline Funktion funktioniert wie ein Makro, lediglich
// nicht im Präprozessor, sondern während der Compielzeit und
// ist ebenfalls nur ein Vorschlag für den Compiler. Stellt
// der Compiler fest, dass es sich Performancemäßig nicht lohnt
// wird inline ignoriert.

// Ebenfalls arbeitet inline wie ein Makro, indem es überall
// wo die Funktion als Aufruft auftaucht schlichtweg während
// der Compilezeit die Funktion an der entsprechenden Stelle
// durch den Funktionskörper 1zu1 ersetzt.
inline void print_integer(int zahl) {
	cout << "Eingegebene Zahl: " << zahl << endl;
}

int addieren() {
	// Deklariert zwei Variablen mit Datentyp int 
	int a, b;

	// Siehe unten textausgabe
	cout << "Geben sie einen Wert f\x81r a ein?\n";
	// Leitet eine EINGABE in die Variable a um (>>)
	cin >> a;

	print_integer(a);

	// Siehe unten textausgabe
	cout << "Geben sie einen Wert f\x81r b ein?\n";
	// s.o.
	cin >> b;

	print_integer(b);

	// Gibt die Summe von a und b zurück
	return a + b;
}

void textausgabe(string text) {
	// Leitet (<<) die Variable text in den standard Outputstream der Konsole um (cout)
	// und leitet (<<) endl als Zeichen in die Variable text um.
	cout << text << endl;
}
