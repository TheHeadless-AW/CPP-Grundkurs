/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "funktionen.h"


// Eine inline Funktion funktioniert wie ein Makro, lediglich
// nicht im Pr�prozessor, sondern w�hrend der Compielzeit und
// ist ebenfalls nur ein Vorschlag f�r den Compiler. Stellt
// der Compiler fest, dass es sich Performancem��ig nicht lohnt
// wird inline ignoriert.

// Ebenfalls arbeitet inline wie ein Makro, indem es �berall
// wo die Funktion als Aufruft auftaucht schlichtweg w�hrend
// der Compilezeit die Funktion an der entsprechenden Stelle
// durch den Funktionsk�rper 1zu1 ersetzt.
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

	// Gibt die Summe von a und b zur�ck
	return a + b;
}

void textausgabe(string text) {
	// Leitet (<<) die Variable text in den standard Outputstream der Konsole um (cout)
	// und leitet (<<) endl als Zeichen in die Variable text um.
	cout << text << endl;
}
