/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
// **********************************************  //
// *********** Symbolische Konstanten: **********  //
// **********************************************  //

// Namenskonvention:
// Konstanten, Makros via #define werden in 
// UPPER_CAMEL_CASE geschrieben

// Symbolische Konstanten bzw. Elemente unter define
// werden im kompletten Quelltext gesucht und durch
// den Wert rechts vom Namen der Konstante direkt
// ersetzt.
#define PI 3.1415926536
#define PRINT cout <<

// Auch Parameter sind möglich
// Somit muss der Aufruf ausgabe(variable) sein
// wobei die Variable im rechten Teil ersetzt wird

// Man sollte sich angewöhnen alle Variablen extra in
// Klammern zu setzen. (Siehe unten MULTIPLIZIEREN)
#define AUSGABE(text) cout << (text) << endl;

// Es ist wirklich ein Ersetzen somit ist bei
// Rechnungen auf die Klammern zu achten
#define ADDIEREN(zahl1, zahl2) (zahl1) + (zahl2)

// ACHTUNG: gefährlich (siehe unten)
// Hier wurden nun die Klammern um die Variablen
// einfach weggelassen.
#define MULTIPLIZIEREN(zahl1, zahl2) zahl1 * zahl2

// Schutz vor versehentlicher Nutzung
// Man kann es auch ausschreiben
// #if !defined _WIN32
// #if not defined _Win32
// #endif

// In älteren VS Versionen kann der Unterstrich
// weggelassen werden
#ifndef _WIN32

#define CLS "\033c"

#endif // Wird nur auf NICHT Windows-Betriebsystemen genutzt
	   // Dies würde für Linux das Terminal "clearen"

//if defined _WIN32
//endif
#ifdef _WIN32

#define CLS system("cls")

#endif // Wird ausschließlich auf Windows-Bestriebssystemen genutzt

// Grundsätzlicher Schutz der sich immer lohnt ist bei 
// der Verwendung von includes immer vorher zu prüfen, ob
// diese möglicherweise schon inkludiert wurden.
// Mehrfachauswahl ist möglich

// Ist <iostream> nicht definiert UND <string> auch nicht
// dann inkludiere diese

// Hier ist jegliche Kombination mit && || etc. möglich
// Jedoch ist von ifndef abzuraten, da dies dann schwer
// zu lesen ist
#if !defined(_IOSTREAM_) && !defined(_STRING_)

#include <iostream>
#include <string>
using namespace std;

// Die Namenskonvention sagt, dass man bei endif
// nochmals die Signatur neben if anzeigt um eine
// eindeutige Zuordbarkeit zu gewährleisten
#endif // !defined(_IOSTREAM_) && !defined(_STRING_)

// Eigene Dateien können ebenfalls mit folgendem 
// Format abgefragt werden.
#if !defined(_KONSTANTEN_UND_MAKROS_H_)

#include "konstanten_und_makros.h"

#endif // !defined(_KONSTANTEN_UND_MAKROS_H_)

// Auch normale If Anweisungen sind so möglich
// Es kann jedoch auf keine anderen Konstanten
// z.B.:
// #if (PI == PI)
// #endif
// Genutzt werden, da diese hier noch nicht bekannt sind.
// 
#if (5 > 3)
//Tudinge
#endif // (5 > 3)



void konstanten_beispiel1() {
	// Alle oben genutzte Variablen wie text, zahl1
	// zahl2 etc. sind dort lokal vorhanden und nicht 
	// global. Sind also nicht in Funktionen nutzbar.

	// PI wird einfach ersetzt
	cout << PI << endl;

	// cout << wird ersetzt und ist
	// somit genau das gleiche wie in 
	// Zeile 43
	PRINT PI << endl;

	// Entspricht ebenfalls vom echten 
	// Aussehen im Compiler Zeile 43
	AUSGABE(PI);

	// Addition gem. oben somit wird zahl1
	// + zahl2 in text für ausgabe eingesetzt
	AUSGABE(ADDIEREN(2, 3));

	// Hier muss man nämlich Acht geben
	// Hier steht also ausgeschrieben:
	// cout << 1+1 * 2+2 << endl;
	// Dabei wird hier jedoch Punkt vor Strich
	// angewandt also 1 + 2 + 2 = 5
	//                  (1*2)
	// Statt dem gewünschten Ergebnis: 
	// (1+1) * (2+2) = 8
	// Deswegen sollte man Variablen unter
	// #define grundsätzlich in Klammern setzen
	AUSGABE(MULTIPLIZIEREN(1 + 1, 2 + 2));

	// Richtig wäre also:
	// Dies ist nicht übersichtlich, weswegen es
	// sich schlichtweg anbietet oben die Variablen
	// selbst bereits in Klammern zu setzen
	AUSGABE(MULTIPLIZIEREN((1 + 1), (2 + 2)));

	// Ausklammern, damit vorherige Ergebnisse angezeigt
	// werden
	// CLS;

}
