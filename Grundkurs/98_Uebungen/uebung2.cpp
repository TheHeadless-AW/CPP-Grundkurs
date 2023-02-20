/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung2.h"
#include <iostream>
#include <string>
using namespace std;

void uebung_2_aufgabe_1() {
	// Chars
	cout << "Bytes von char : " << sizeof(char) << endl;
	cout << "Bytes von unsigned char : " << sizeof(unsigned char) << endl;
	cout << "Bytes von signed char : " << sizeof(signed char) << endl;

	cout << "Bytes von wchar_t : " << sizeof(wchar_t) << endl;

	// Ints
	cout << "Bytes von int : " << sizeof(int) << endl;
	cout << "Bytes von unsigned int : " << sizeof(unsigned int) << endl;
	cout << "Bytes von signed int : " << sizeof(signed int) << endl;

	cout << "Bytes von short int : " << sizeof(short int) << endl;
	cout << "Bytes von unsigned short int : " << sizeof(unsigned short int) << endl;
	cout << "Bytes von signed short int : " << sizeof(signed short int) << endl;

	cout << "Bytes von long int : " << sizeof(long int) << endl;
	cout << "Bytes von unsigned long int : " << sizeof(unsigned long int) << endl;
	cout << "Bytes von signed long int : " << sizeof(signed long int) << endl;

	cout << "Bytes von long int : " << sizeof(long int) << endl;
	cout << "Bytes von unsigned long long int : " << sizeof(unsigned long long int) << endl;
	cout << "Bytes von signed long long int : " << sizeof(signed long long int) << endl;

	// Kommazahlen (Float und Double)
	cout << "Bytes von float : " << sizeof(float) << endl;
	cout << "Bytes von double : " << sizeof(double) << endl;
	cout << "Bytes von long double : " << sizeof(long double) << endl;

	// Boolean
	cout << "Bytes von Boolean : " << sizeof(bool) << endl;
}

void uebung_2_aufgabe_2() {
	cout << "ICH\n"
		"     \"SAUSE\"\n"
		"          \\HIN\\\n"
		"     UND\n"
		"/HER/"
		<< endl;
}

void uebung_2_aufgabe_3() {
	// Kommazahl in integer Datentyp entfernt die Nachkommazahl
	int a(2.5);

	cout << a << endl;

	// Zeichen in Integer sorgt daf�r, dass der numerische Wert,
	// statt dem Zeichen hinterlegt wird
	int b = '?';

	cout << b << endl;

	// Datentyp Char sorgt daf�r, dass das dahinterliegende, wenn
	// vorhandene, Zeichen gespeichert wird, statt dem numerischen Wert
	char z(500);

	cout << z << endl;

	// Passt 
	int big = 40000;

	cout << big << endl;

	// Passt (Wobei ein Umlaut im Bezeichner nicht zweckm��ig ist)
	// und int hier ausreichend gewesen w�re
	double fl�che(1.2E+5);

	cout << fl�che << endl;

	// Eine Konstante ben�tigt einen Initialwert (Hier hinzugef�gt zwecks Error)
	const long breite = 5;

	cout << breite << endl;

	// Passt
	char c('\'');

	cout << c << endl;

	// Char h�tte ausgereicht, da hier lediglich eine Escapesequenz gespeichert wird
	unsigned char ch = '\201';

	cout << ch << endl;

	// das int ist versteckt und sorgt bei Hinzuf�gen des int f�r mehr Klarheit
	unsigned size(40000);

	cout << size << endl;

	// Passt (Nur 1 Nachkommastelle bei mir) double w�re ausreichend gewesen
	float va1 = 12345.12345;

	cout << va1 << endl;
}

void uebung_2_aufgabe_4() {
	double a = 123.456;
	double b = 76.543;

	cout << a + b << endl;
	cout << a - b << endl;
}

