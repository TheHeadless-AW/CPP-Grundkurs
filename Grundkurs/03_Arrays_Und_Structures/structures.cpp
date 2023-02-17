#include "structures.h"
#include <iostream>
#include <string>
using namespace std;

void unbenannte_structures() {
	// ************************************ //
	// ******** Deklaration einer ********* //
	// ******* unbenannten Struktur ******* //
	// ************************************ // 

	// Hier könnten auch statt datenhalter1 auch
	// Arrays z.B. datenhalter1[] deklariert werden
	struct {
		int zahl = 0;
		string text = "";
	} datenhalter1, datenhalter2;

	// ^ Nun kann ich die Variablen datenhalter 1 und datenhalter 2
	//   mit dem dort gezeigten Inhalt nutzen

	// Eine Vorinitialisierung mit Standardwerten ist möglich aber 
	// nicht nötig. Macht man es nicht wird ein Warning (siehe unten)
	// ausgegeben

	// ************************************ //
	// ************ Zugriff *************** //
	// ************************************ // 

	// Man sieht hier sehr deutlich, dass ein beliebiger Wert in die
	// nicht-initialisierte Variable gesetzt wird. Da string eine Klasse
	// ist wird hier standardmäßig "" genommen.
	cout << "zahl in der Variable datenhalter1: " << datenhalter1.zahl << endl;

	cout << "text in der Variable datenhalter1: " << datenhalter1.text << endl;

	// Dasselbe Resultat wäre für datenhalter2 vorhanden daher spare ich mir dies

	// ************************************ //
	// ******** Zuweisen / Ändern ********* //
	// ************************************ // 

	datenhalter1.zahl = 50;
	datenhalter2.zahl = datenhalter1.zahl + 50;

	cout << "datenhalter1.zahl = " << datenhalter1.zahl << " | datenhalter2.zahl = " << datenhalter2.zahl << endl;

	datenhalter1.text = "Hallo ";
	datenhalter2.text = "Welt!";

	cout << "Text konkateniert: " << datenhalter1.text + datenhalter2.text << endl;

	// Abgleich der Variablen Adressen im Arbeitsspeicher:
	// Man sieht, dass hier wirklich unterschiedliche Variablen vorhanden sind,
	// welche lediglich den Aufbau der Struktur nutzen. Sehr gut auch über
	// den Debugger ersichtlich
	cout << "Adresse datenhalter1.zahl = " << &datenhalter1.zahl << endl;
	cout << "Adresse datenhalter2.zahl = " << &datenhalter2.zahl << endl;

	cout << "Adresse datenhalter1.text = " << &datenhalter1.text << endl;
	cout << "Adresse datenhalter2.text = " << &datenhalter2.text << endl;

	cout << "Adresse datenhalter1 = " << &datenhalter1 << endl;
	cout << "Adresse datenhalter2 = " << &datenhalter2 << endl;


	// Sinn von Structures: 
	// Später wird noch auf Klassen eingegangen, welche einen
	// ähnlichen Aufbau haben. Structures sind jedoch für den
	// praktischen und einfachen Zweck geschaffen Daten zu
	// bündeln und einfach auf diese zugreifen zu können. Bei
	// geschickter Anwendung kann so auch die Lesbarkeit des
	// Codes deutlich erhöht werden.

}

void benannte_structures() {
	// ************************************ //
	// ******** Deklaration einer ********* //
	// ******* benannten Struktur ********* //
	// ************************************ // 

	// Es ist weiterhin, wie bei unbenannten, auch hier
	// möglich direkt Variablen zu definieren.
	struct Mensch {
		int alter;
		string name;
	} olaf;

	olaf.alter = 20;
	olaf.name = "Olaf";

	cout << "Alter von olaf = " << olaf.alter << " | Name von olaf = " << olaf.name << endl;

	// Es ist nicht eineindeutig, dennoch sieht man den Typ
	// der Variable Mensch und somit können wir also auch neue
	// Variablen vom Typ Mensch deklarieren
	cout << typeid(olaf).raw_name() << endl;

	// Eigene Variable vom Typ Mensch, welche wie oben
	// gezeigt komplett genutzt werden kann um mehrere
	// Variablen vom entsprechenden Typ zu ermöglichen.
	Mensch bernd; 

	bernd.alter = 25;
	bernd.name = "Bernd";

	cout << "Alter von Bernd = " << bernd.alter << " | Name von Bernd = " << bernd.name << endl;


}
