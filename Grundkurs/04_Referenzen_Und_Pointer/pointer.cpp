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
	string* ptr_hugo = &hugo;

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
	int* ptr_zahlen_array = zahlen_array;

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