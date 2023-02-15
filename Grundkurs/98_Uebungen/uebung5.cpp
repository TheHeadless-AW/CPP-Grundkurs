#include "uebung5.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void uebung_5_aufgabe_1() {
	// a) 0
	cout << 3 / 10 << endl;

	// b) 3
	cout << 11 % 4 << endl;

	// c) 7.5
	cout << 15 / 2.0 << endl;

	// d) 7
	cout << 3 + 4 % 5 << endl;

	// e) 1
	cout << 3 * 7 % 4 << endl;

	// f) 9
	cout << 7 % 4 * 3 << endl << endl;
}

void uebung_5_aufgabe_2() {

	int i = -2;

	// Bei i = 0
	// Rechnet wie folgt: (-4 * 0) - (6 mod 4)
	//						 0     -     2        = -2
	// Bei i = -2
	//					  (-4 * -2) - (6 mod 4) 
	//						  8     -    2        = 6
	double zahl = -4 * i++ - 6 % 4;

	// i wird NACH der Rechnung in der Zuweisung der 
	// Variable zahl um 1 erhöht (i++)
	cout << i << endl;

	cout << zahl << endl;

}

void uebung_5_aufgabe_3() {
	int x = 7;

	// Allgemein werden die Ausdrücke den entsprechenden
	// boolschen Wert als Integer zurückgeben (1 oder 0)

	// a)   (7 < 10 && 7 >= -1) --> Wenn 7 kleiner als 10 ist UND 7 größer oder gleich -1 ist
	//							= True = 1
	cout << (x < 10 && x >= -1) << endl;

	// b)   (!7 && 7 >= 3) --> Wenn NICHT 7 UND 7 größer oder gleich 3 ist
	//					   = False = 0
	cout << (!x && x >= 3) << endl;

	// c)   (7++ == 8 || 8 == 7) --> Linke Seite: 7 ist gleich 8 ? | Dann erhöhe 7 um 1 (x = 8) 
	//							 --> Rechte Seite: 8 ist gleich 7 ? (Da x vorher erhöht wurde ist x jetzt 8
	//							 = False = 0
	cout << (x++ == 8 || x == 7) << endl;

	// Somit wird 1 0 0 ausgegeben
}

void uebung_5_aufgabe_4() {
	// Ergänzung: || führt die rechte Seite nicht mehr aus, wenn links bereits true ist.

	bool erg = false;
	int y = 5;
	int a, b, c;

	// Weisst erg einen neuen Wahrheitswert zu:
	//    Ist 7 ODER (y = 0)
	//    
	// Nimmt für Zahlen außer 0 den Wert 1 an
	// Die Aussage (y = 0) ebenfalls
	// Somit steht hier 1 || 0 was 1 entspricht also True
	erg = 7 || (y = 0);

	cout << "Wert von (erg = 7 || (y = 0)) : " << erg << endl;

	// y wird nicht geändert auch bei y = 0 nicht, somit ist y = 5
	cout << "Wert von y : " << y << endl;

	a = b = c = 0;
	
	// erg = 1 || hier wird direkt abgebrochen da links True steht.
	erg = ++a || ++b && ++c;

	// 1, 1, 0, 0
	cout << "\nerg = " << erg << ", a = " << a << ", b = " << b << ", c = " << c << endl;
	
	a = b = c = 0;

	// erg = 1 UND 1 ODER 1 somit True = 1
	erg = ++a && ++b || ++c;

	// 1 , 1 , 1 , 0
	cout << "\nerg = " << erg << ", a = " << a << ", b = " << b << ", c = " << c << endl;

	//return 0;

}
