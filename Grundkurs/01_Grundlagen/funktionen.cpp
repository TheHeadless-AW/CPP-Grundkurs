#include "funktionen.h"

int addieren() {
	// Deklariert zwei Variablen mit Datentyp int 
	int a, b;

	// Siehe unten textausgabe
	cout << "Geben sie einen Wert f\x81r a ein?\n";
	// Leitet eine EINGABE in die Variable a um (>>)
	cin >> a;

	// Siehe unten textausgabe
	cout << "Geben sie einen Wert f\x81r b ein?\n";
	// s.o.
	cin >> b;

	// Gibt die Summe von a und b zurück
	return a + b;
}

void textausgabe(string text) {
	// Leitet (<<) die Variable text in den standard Outputstream der Konsole um (cout)
	// und leitet (<<) endl als Zeichen in die Variable text um.
	cout << text << endl;
}
