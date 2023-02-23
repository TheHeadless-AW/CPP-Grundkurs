/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "Klassen.h"

// Wir müssen wie gewohnt die Datei der Klasse
// inkludieren,
#include "Mensch.h"
#include <iostream>
#include "Hund.h"
using namespace std;

void grundlagen_klassen() {
	Mensch olaf;

	// Man beachte, dass beide wieder die klasssichen Initialwerte
	// beim Zugriff erhalten, außer diese sind als default zugewiesen.
	cout << "Alter: " << olaf.alter << endl;
	cout << "Name: " << olaf.name << endl;

	// Diese können wie gewohnt angepasst und verändert werden
	olaf.alter = 20;
	olaf.name = "Olaf";

	cout << "Alter: " << olaf.alter << endl;
	cout << "Name: " << olaf.name << endl;

	// Besser ist es über Methoden auf Attribute zuzugreifen
	olaf.sprechen();

	// Weitere Objekte können äquivalent erzeugt werden und verhalten
	// sich mittels der Methoden entsprechend
	Mensch bernd;
	bernd.alter = 30;
	bernd.name = "Bernd";

	bernd.sprechen();

	// Zugriff auf zugehörige Pointer:
	Mensch* ptr_bernd = &bernd;
	cout << "Alter: " << ptr_bernd->alter << endl;
	ptr_bernd->sprechen();

}

void konstruktoren_klassen() {
	// Konstruktoren machen den Sinn hinter Objekten erst erkenntlich
	Hund dackel("Dackel", 2);
	cout << "Rasse: " << dackel.get_rasse() << " | Alter: " << dackel.get_alter() << endl;

	// Rasse können wir nicht ändern, da es keine Möglichkeit gibt
	// darauf zuzugreifen. Jedoch auf das Alter.
	// Hier wird also das Alter auf das bereits vorhandene +1 geändert. 
	dackel.set_alter(dackel.get_alter() + 1);

	cout << "Rasse: " << dackel.get_rasse() << " | Alter: " << dackel.get_alter() << endl;

	// Wird keine () angegeben, so wird schlichtweg der sogenannte default Konstruktor
	// ausgeführt. Siehe Hund.h --> Aufruf von Hund() ohne Parametern in Klammern.
	// ACHTUNG: Wird terrier() genutzt so geht C++ von einem Funktionsaufruf aus
	Hund terrier;
	
	cout << "Rasse: " << terrier.get_rasse() << " | Alter: " << terrier.get_alter() << endl;

	// Rasse kann nicht gesetzt werden
	terrier.set_alter(1);

	cout << "Rasse: " << terrier.get_rasse() << " | Alter: " << terrier.get_alter() << endl;

}

void operatoren_ueberladung(){
	Hund cookie("Terrier", 2);
	Hund hugo("Dackel", 3);
	Hund ella("Terrier", 4);

	// Wir haben == überladen, sodass true zurückgeliefert
	// wird, wenn die Rasse gleich ist

	cout << "cookie hat die gleiche Rasse wie ella? " << boolalpha << (cookie == ella) << endl;
	cout << "cookie hat die gleiche Rasse wie hugo? " << boolalpha << (cookie == hugo) << endl;
}
