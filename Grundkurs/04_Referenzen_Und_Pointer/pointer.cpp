/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/

#include "pointer.h"

#include <iostream>
#include <string>
using namespace std;

// Styleguide: https://google.github.io/styleguide/cppguide.html

void pointer_1() {
	string hugo = "Ich bin Hugo"; 
	string nicht_hugo = hugo;
	
	// Es gibt 3 M�glichkeiten einen sogenannten Pointer / Zeiger
	// zu deklarieren:
	// string* name
	// string * name
	// string *name 
	// Es wird jedoch der 3. Fall pr�feriert und in Konventionen genutzt

	// Man kann ausprobieren, dass die Zuweisung mittels " " nicht m�glich ist
	// ebenfalls ist = hugo nicht m�glich, da explizit eine Adresse also z.B.
	// &hugo gefragt ist.
	string *ptr_hugo = &hugo;

	// Ausgabe des Strings
	cout << hugo << endl;

	// Beides Ausgaben der Adressen selbst
	cout << ptr_hugo << endl;
	
	cout << &hugo << endl;

	// Ausgabe �ber den Pointer selbst
	cout << *ptr_hugo << endl;


	///////////////////////////////

	cout << nicht_hugo << endl;
	cout << &nicht_hugo << endl;


}
