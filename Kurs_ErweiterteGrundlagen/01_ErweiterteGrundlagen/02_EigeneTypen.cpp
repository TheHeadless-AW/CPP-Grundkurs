#include <iostream>
#include "02_EigeneTypen.h"

using namespace std;

void eigeneTypen() {
	// Beispiel 1: Einfache Verwendung von typedef für einen benutzerdefinierten Datentyp
	typedef int MeineZahl;
	MeineZahl zahl = 42;
	cout << "Beispiel 1 (typedef): " << zahl << endl;

	// Beispiel 1 mit using
	using MeinZahlUsing = int;
	MeinZahlUsing zahlUsing = 42;
	cout << "Beispiel 1 (using): " << zahlUsing << endl;

	// Beispiel 2: Nutzung von typedef für einen komplexeren Datentyp (Struktur)
	typedef struct {
		int stunden;
		int minuten;
		int sekunden;
	} Zeit;

	Zeit uhrzeit = { 12, 30, 45 };
	cout << "Beispiel 2 (typedef): " << uhrzeit.stunden << ":" << uhrzeit.minuten << ":" << uhrzeit.sekunden << endl;

	// Beispiel 2 mit using
	using ZeitUsing = struct {
		int stunden;
		int minuten;
		int sekunden;
	};

	ZeitUsing uhrzeitUsing = { 12, 30, 45 };
	cout << "Beispiel 2 (using): " << uhrzeitUsing.stunden << ":" << uhrzeitUsing.minuten << ":" << uhrzeitUsing.sekunden << endl;

	// Beispiel 3: Verwendung von typedef für einen Funktionspointer
	typedef void (*MeineFunktion)();
	cout << "Beispiel 3 (typedef): ";
	MeineFunktion func = []() { cout << "Hallo aus der Funktion!" << endl; };
	func();

	// Beispiel 3 mit using
	using MeineFunktionUsing = void (*)();
	cout << "Beispiel 3 (using): ";
	MeineFunktionUsing funcUsing = []() { cout << "Hallo aus der Funktion!" << endl; };
	funcUsing();

	// Beispiel 4: Kombination von typedef und Vorwärtsdeklaration für eine Klasse
	class MeinObjekt {
	public:
		void arbeitenMitObjekt() {
			cout << "Das erstellte Objekt arbeitet!" << endl;
		}
	};

	typedef MeinObjekt* ObjektZeiger;
	cout << "Beispiel 4 (typedef): ";
	ObjektZeiger obj = new MeinObjekt();
	obj->arbeitenMitObjekt();
	delete obj;

	// Beispiel 4 mit using
	using ObjektZeigerUsing = MeinObjekt*;
	cout << "Beispiel 4 (using): ";
	ObjektZeigerUsing objUsing = new MeinObjekt();
	objUsing->arbeitenMitObjekt();
	delete objUsing;
}

// Wesentliche Unterschiede zwischen typedef und using:
// - "typedef" kann auch für komplexe Typen wie Funktionen und Templates verwendet werden.
// - "using" ist flexibler und intuitiver für Templates und Funktionspointer.
// - "using" ermöglicht direkten Gebrauch des erstellten Alias ohne "struct" oder "class" bei komplexen Typen.
// - Die Wahl zwischen "typedef" und "using" hängt von der Lesbarkeit und dem Anwendungsfall ab.
// - "using" wird oft als modernere Alternative betrachtet.
