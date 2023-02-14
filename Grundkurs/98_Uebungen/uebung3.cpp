#include "uebung3.h"
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void uebung_3_aufgabe_1() {
	int zahl1 = 4;
	double zahl2 = 12.25;
	double zahl3 = 0.0121;

	cout << "ZAHL\t\tWURZEL" << endl;

	cout << zahl1 << "\t\t" << sqrt(zahl1) << endl;
	cout << zahl2 << "\t\t" << sqrt(zahl2) << endl;
	cout << zahl3 << "\t\t" << sqrt(zahl3) << endl;
}

void uebung_3_aufgabe_2() {
	// In der Übung siehe uebung3.pdf unter Ressourcen sind bereits
	// in der 1. und 2. Zeile Fehler beim Versuch mehrfachen include
	// Aufrufs, was zur Folge hat, dass cout nicht gefunden wird.
	// srand mittels #void srand(seed); ist ebenfalls an der Stelle ein 
	// Fehler

	// Hier hat das = Zeichen gefehlt
	string meldung = "\nAus Fehlern wird man klug!";

	// Passt
	cout << meldung << endl;

	// length(meldung) ist falsch -> meldung.length()
	// Hier sollte man beachten, dass \n mitgezählt wird
	int len = meldung.length();

	// Passt
	cout << "Die L\x84nge des Strings : " << len << endl;

	// Passt
	int a, b;

	//srand ist eine void Funktion und liefert keinen Wert zurück (vorher a = srand(12.5) )
	//srand(12.5) in eigene Zeile verschoben, sodass rand() geseedet wird
	srand(12.5);

	// Anschließend a eine Zufallszahl zugewiesen
	a = rand();

	// Hier wird b ausgegeben obwohl in b nichts initialisiert ist
	// somit auf a statt b geändert. b wird dadurch sinnlos.
	cout << "\nZufallszahl: " << a << endl;

	// Da dies in einer int main gem. Übung war ist dies richtig.
	// Wird hier jedoch der Einfachheit halber auskommentiert.
	//return 0;

}

void uebung_3_aufgabe_3() {
	string text = "Schon wieder was dazugelernt!";

	cout << "Stringl\x84nge (" << text << ") : " << text.length() << endl;

	string eingabe1, eingabe2;

	cout << "Texteingabe1: ";
	cin >> eingabe1;
	cout << "Texteingabe2: ";
	cin >> eingabe2;
	cout << endl;

	string zusammengefuegter_string = eingabe1 + " * " + eingabe2;

	cout << zusammengefuegter_string << endl;
}
