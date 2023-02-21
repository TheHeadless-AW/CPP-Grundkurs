
/*
* @author Ersteller PDF uebung11.pdf
*/
#include "uebung11.h"
#include <iostream>
#include <iomanip>

using namespace std;
int var = 0;
namespace Special { int var = 100; }

void uebung_11_aufgabe_1() {
	int var = 10;
	// Gibt 10 aus OHNE Zeilenumbruch
	// Aktuell: 10
	cout << var;
	{
		int var = 20;
		// Gibt 20 aus MIT Zeilenumbruch
		// Aktuell: 1020
		//          
		cout << var << endl;
		{
			// Erhöhe 20 auf 21 (Bezug auf int var = 20 Zeile 19)
			++var;
			// Gibt 21 aus OHNE Zeilenumbruch (Bezug auf int var = 20 Zeile 19)
			cout << var;
			// Gibt 1 aus OHNE Zeilenumbruch (Bezug auf obiges int var = 0 aus Zeile 10)
			cout << ++ ::var;
			// Gibt 100*2 = 200 aus MIT Zeilenumbruch (Zeile 11)
			// Aktuell: 1020
			//			211200
			cout << Special::var * 2 << endl;
		}
		// Gibt 21 (int var = 20 und dann ++ in Zeile 26) - 1 (int var = 0 ++ in Zeile 30) 
		// also 20 aus OHNE Zeilenumbruch
		// Aktuell: 1020
		//			211200
		//			20
		cout << var - ::var;
	}
	// Gibt unverändert die 10 aus int var = 10 in Zeile 14 aus MIT Zeilenumbruch
	cout << var << endl;

	// Gesamtausgabe:
	// 1020
	// 211200
	// 2010
}
