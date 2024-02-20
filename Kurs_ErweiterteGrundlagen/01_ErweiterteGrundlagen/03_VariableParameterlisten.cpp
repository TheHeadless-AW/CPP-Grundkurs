#include <iostream>
#include <cstdarg>
#include "03_VariableParameterlisten.h"

using namespace std;

// Funktion mit variabler Parameterliste
// @param anzahl: Anzahl der übergebenen Parameter
// @param ...: Variable Anzahl von Parametern
// @return Durchschnitt der übergebenen Zahlen
double berechneDurchschnitt(int anzahl, ...) {
	// Variable für die Summe der Zahlen
	double summe = 0;

	// va_list: Datentyp für die Variable-Parameterliste
	va_list args;

	// va_start(args, anzahl): Initialisiert die Variable-Parameterliste. Der erste Parameter ist der letzte
	// bekannte Parameter (hier 'anzahl'). 'args' wird auf den Beginn der Argumente hinter 'anzahl' gesetzt.
	va_start(args, anzahl);

	// va_arg(args, Type): Zugriff auf das nächste Argument in der Variable-Parameterliste ('args'). 
	// Hier wird 'double' als Datentyp erwartet, da die Funktion einen Durchschnitt von Gleitkommazahlen berechnet.
	for (int i = 0; i < anzahl; ++i) {
		// Beachte va_args zeigt zuerst auf das erste aber danach auf das nächste Argument der Parameterliste.
		// Somit wird bei jedem Aufruf das nächste Element genutzt ohne direkt via Index darauf zuzugreifen.
		// ACHTUNG: Hier "double" gibt an von welchem Typ das zurückgegebene Element ist
		double aktuellesArgument = va_arg(args, double);
		summe += aktuellesArgument;
	}

	// va_end(args): Beendet die Nutzung der Variable-Parameterliste. 
	// Dies sollte immer aufgerufen werden, um sicherzustellen, dass die Liste korrekt freigegeben wird.
	va_end(args);

	// Berechnung und Rückgabe des Durchschnitts
	return summe / anzahl;
}

// Funktion mit variabler Parameterliste für verschiedene Typen
// @param anzahl: Anzahl der übergebenen Parameter
// @param ...: Variable Anzahl von Parametern unterschiedlicher Typen
void verschiedeneTypenParameterliste(int anzahl, ...) {
	// va_list: Datentyp für die Variable-Parameterliste
	va_list args;

	// va_start(args, anzahl): Initialisiert die Variable-Parameterliste. Der erste Parameter ist der letzte
	// bekannte Parameter (hier 'anzahl'). 'args' wird auf den Beginn der Argumente hinter 'anzahl' gesetzt.
	va_start(args, anzahl);

	// va_arg(args, Type): Zugriff auf das nächste Argument in der Variable-Parameterliste ('args'). 
	// Der Datentyp des Arguments muss korrekt angegeben werden.

	/*
	Ablauf der Schleife:

	Initialisierung: i wird auf 0 gesetzt.
	Bedingung: Solange i kleiner als anzahl ist, wird die Schleife durchlaufen.
	Inkrementierung: Nach jedem Schleifenlauf wird i inkrementiert.

	Innerhalb der Schleife:

	parameterTyp wird mit va_arg(args, int) initialisiert, was bedeutet, dass der aktuelle Wert im args-Zeiger als int interpretiert wird und args dann auf das nächste Element verschoben wird.
	Basierend auf dem Wert von parameterTyp werden unterschiedliche Zweige ausgeführt.
	Bei einem parameterTyp von 1 wird ein double-Wert mit va_arg(args, double) geholt und ausgegeben. Das Verschieben des Zeigers erfolgt hier ebenfalls.
	Bei einem parameterTyp von 2 wird ein int-Wert geholt und ausgegeben.
	Bei einem parameterTyp von 3 wird ein C-String (const char*) geholt und ausgegeben.
	Bei einem parameterTyp von 4 wird ein Array von int geholt, ausgegeben und der zugewiesene Speicher freigegeben.

	Das Ganze wird so oft wiederholt, wie anzahl angibt. Beachten Sie, dass der args-Zeiger durch jeden Aufruf von va_arg auf das nächste Argument verschoben wird.
	*/

	for (int i = 0; i < anzahl; i++) {
		// BEACHTE: jeder Aufruf von parameterTyp sorgt für einen Aufruf von va_args 
		//          und somit für das Verschieben des Zeigers auf das nächste Element

		int parameterTyp = va_arg(args, int);

		// Beispiel mit einem Double
		if (parameterTyp == 1) {
			double aktuellesDouble = va_arg(args, double);
			cout << "Double-Parameter: " << aktuellesDouble << endl;
		}

		// Beispiel mit einem Integer
		else if (parameterTyp == 2) {
			int aktuellesInt = va_arg(args, int);
			cout << "Integer-Parameter: " << aktuellesInt << endl;
		}

		// Beispiel mit einem C-String (char*)
		else if (parameterTyp == 3) {
			const char* aktuellerString = va_arg(args, const char*);
			cout << "String-Parameter: " << aktuellerString << endl;
		}

		// Beispiel mit einem Array (hier: int-Array)
		else if (parameterTyp == 4) {
			int* aktuellesArray = va_arg(args, int*);
			cout << "Array-Parameter: ";
			for (int j = 0; j < 5; j++) {
				cout << aktuellesArray[j] << " ";
			}
			cout << endl;

			// Speicher freigeben
			delete[] aktuellesArray;
		}
	}

	// va_end(args): Beendet die Nutzung der Variable-Parameterliste. 
	// Dies sollte immer aufgerufen werden, um sicherzustellen, dass die Liste korrekt freigegeben wird.
	va_end(args);
}

void eigenesPrintF(const char* format, ...) {
	// Initialisiere die Variable-Parameterliste
	va_list args;
	va_start(args, format);

	// Iteriere über jedes Zeichen im Formatstring
	while (*format != '\0') {
		if (*format == '%') {
			// Gehe zum Zeichen NACH dem %
			*format++;

			// Überprüfe auf verschiedene Formatierungszeichen
			switch (*format) {
			case 'd':
				// %d für Ganzzahlen
				cout << va_arg(args, int);
				break;
			case 'f':
				// %f für Gleitkommazahlen
				cout << va_arg(args, double);
				break;
			case 's':
				// %s für Strings
				cout << va_arg(args, const char*);
				break;
			default:
				// Falls nur ein % angezeigt werden soll
				cout << '%' << *format;
				break;
			}
		}
		else {
			// Einfach kopieren, wenn es kein Formatierungszeichen ist
			cout << *format;
		}

		// Zum nächsten Zeichen in der Formatzeichenkette gehen
		format++;
	}

	// Beende die Variable-Parameterliste
	va_end(args);
}