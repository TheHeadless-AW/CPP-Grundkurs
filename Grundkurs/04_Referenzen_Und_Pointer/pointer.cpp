/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/

#include "pointer.h"

#include <iostream>
#include <string>
using namespace std;

// Styleguide: https://google.github.io/styleguide/cppguide.html

void pointer_grundlagen() {
	string hugo = "Ich bin Hugo";

	// Es gibt 3 M�glichkeiten einen sogenannten Pointer / Zeiger
	// zu deklarieren:
	// string* name
	// string * name
	// string *name 
	// Es wird jedoch der 3. Fall pr�feriert und in Konventionen genutzt

	// Man kann ausprobieren, dass die Zuweisung mittels " " nicht m�glich ist
	// ebenfalls ist = hugo nicht m�glich, da explizit eine Adresse also z.B.
	// &hugo gefragt ist.

	// Man beachte, dass der Datentyp des Pointers dem Datentyp der 
	// Ursprungsvariable entsprechen sollte.

	// SonarLint Empfehlung: Pointer sollten als Konstanten definiert werden,
	//						 denn dieser wird nicht ver�ndert, lediglich der
	//						 Inhalt der dahinterliegenden "Variable"
	string const* ptr_hugo = &hugo;

	// Ausgabe des Strings
	cout << hugo << endl;

	// Beides Ausgaben der Adressen selbst
	cout << ptr_hugo << endl;

	cout << &hugo << endl;

	// Ausgabe �ber den Pointer selbst
	cout << *ptr_hugo << endl;

	// Ansonsten sollte man der Einfachheit halber den Pointer wie einen extra
	// Datentypen ansehen, welcher jedoch die gleichen M�glichkeiten wie der Rest hat.
}

void pointer_und_arrays() {
	int zahlen_array[] = { 2,4,6,8,10 };

	// Man beachte, dass im Vergleich zu normalen Pointern hier nicht
	// &zahlen_array genutzt wird, sondern nur zahlen_array
	int const* ptr_zahlen_array = zahlen_array;

	// Hier ist nun die echte Adresse, wie gewohnt gespeichert:
	ptr_zahlen_array = zahlen_array;

	// Gibt die ERSTE Stelle des Arrays und deren Adresse aus
	cout << "Adresse: " << ptr_zahlen_array << " | Wert: " << *ptr_zahlen_array << endl;

	// Pointer k�nnen "inkrementiert" werden. Dadurch zeigen sie auf 
	// die von sich aus gesehen n�chste Speicheradresse abh�ngig vom 
	// Datentyp. In diesem Fall 4 Bytes f�r Integer.
	// Bei Arrays ist dies auch gleichzeitig das n�chste Element im Array.
	*ptr_zahlen_array++;

	// Gibt die ZWEITE Stelle des Arrays und deren Adresse aus
	cout << "Adresse: " << ptr_zahlen_array << " | Wert: " << *ptr_zahlen_array << endl;

	// Um direkt auf das n�chste Element zuzugreifen
	*ptr_zahlen_array++;

	// Man sieht, dass man hier ohne Gefahr zu laufen einen Error zu erhalten auch auf
	// Speicheradressen zugreifen und deren Werte erhalten kann, welche garnicht in
	// Verbindung zum Array stehen, da schlichtweg auf die n�chste Adresse zugegriffen
	// wird.
	for (int zaehler = 0; zaehler < 100; zaehler++) {
		cout << "Z\x84hler: " << zaehler << " | Adresse: " << ptr_zahlen_array << " | Wert: " << *ptr_zahlen_array << endl;

		*ptr_zahlen_array++;
	}

	cout << "---------------------------------------------------------" << endl;

	// Dies geht auch in umgekehrte Richtung. Vergleicht man in die andere Richtung
	// Die aufgefundenen Werte des Arrays hinsichtlich der Adressen stellt man fest,
	// dass diese auch �bereinstimmen. 
	for (int zaehler = 110; zaehler > 0; zaehler--) {
		cout << "Z\x84hler: " << zaehler << " | Adresse: " << ptr_zahlen_array << " | Wert: " << *ptr_zahlen_array << endl;

		*ptr_zahlen_array--;
	}
}

int addieren(int zahl1, int zahl2) {
	return zahl1 + zahl2;
}

int subtrahieren(int zahl1, int zahl2) {
	return zahl1 - zahl2;
}

void pointer_funktionen() {
	// Dies speichert den Zeiger der Funktionen in einer Variable
	int (*ptr_addieren_1) (int, int) = &addieren;

	int (*ptr_subtrahieren_1) (int, int) = &subtrahieren;

	cout << ptr_addieren_1(2, 2) << endl;
	cout << ptr_subtrahieren_1(2, 2) << endl;
	// Das praktische ist, dass diese nun gespeichert,
	// �bergeben etc. werden k�nnen wie Variablen

	// Um daf�r einen Typ dieser Pointer festzulegen
	// bietet es sich an einen alias zu f�r einen Typen
	// zu definieren

	// "benutze" Bezeichner = R�ckgabewert Bezeichner (Parameter1, Parameter2...)
	//                                     * = Pointer
	// Erst ab C++ 11 m�glich vorher nur �ber typedef

	// Wenn man genau hinschaut entspricht int (*)(int, int) der Signatur von 
	// Zeile 108 mit z.B. int (*ptr_addieren)(int, int)
	using Ptr_Rechnung = int (*)(int, int);

	// Dadurch gibt es den Typen Ptr_Rechnung
	Ptr_Rechnung ptr_addieren_2 = &addieren;

	Ptr_Rechnung ptr_subtrahieren_2 = &subtrahieren;

	// Diese sind alle nutzbar, wie die Funktion selbst
	cout << ptr_addieren_2(2, 2) << endl;
	cout << ptr_subtrahieren_2(2, 2) << endl;

	Ptr_Rechnung ptr_arr_rechnungen[] = { &addieren, &subtrahieren };

	cout << ptr_arr_rechnungen[0](4, 2) << endl; // addieren
	cout << ptr_arr_rechnungen[1](4, 2) << endl; // subtrahieren

	// Ja dies w�re auch wie gewohnt �ber eine Schleife nutzbar
	// Beispiel anhand einer foreach Schleife:
	for (Ptr_Rechnung ptr_rechnung : ptr_arr_rechnungen) {
		// Durchl�uft das Array von 0 zu 1 und f�hrt die Rechnung
		// mit den beiden Parametern 4 und 2 aus
		cout << ptr_rechnung(4, 2) << endl;
	}
}
