/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include <string>
#include <iostream>

class Hund {
	// Standardm��ig sind Inhalte ohne Spezifizierung
	// innerhalb einer Klasse private. Dies bedeutet,
	// dass die Inhalte auch nur dort genutzt werden
	// k�nnen und gegen Manipulation von au�en gesch�tzt
	// sind.
public:
	// Der sogenannte Konstruktor, welcher beim Erzeugen
	// eines Objektes dieser Klasse aufgerufen wird

	//Hund() : rasse("Nicht angegeben"), alter(0) {
	//	std::cout << "Achtung Hund mit nicht vorhandener Rasse erzeugt!" << std::endl;
	//};

	// Es ist auch m�glich weitere Konstruktoren im Konstruktor selbst zu nutzen
	// Man beachhte, dass dies zu Fehlern f�hren kann. Als Beispiel entferne man hier
	// einmal rasse= . Dann wird keine Rasse eingegeben. Hier ist der Fehler darin, dass
	// ohne rasse= kein Objekt der Klasse string initialisiert wird, sondern schlichtweg
	// ein char_array �bergeben wird. Deswegen bietet sich der obige Konstruktor oder
	// die eindeutige Definition mittels rasse= an. alter= ist optional.
	Hund() {
		Hund(rasse="Nicht angegeben", alter=0);
		std::cout << "Achtung Hund mit nicht vorhandener Rasse erzeugt!" << std::endl;
	}

	// Initialisiert die vorhandenen Felder mti beliebigen Default-Werten
	//Hund() = default;

	// Macht im Grunde dasselbe wie Hund() = default; (IM GRUNDE)
	//Hund() {};



	// Beachte, dass auch auf untenliegende Attribute im
	// Bereich private zugegriffen werden k�nnen.

	// Es bietet sich an die Referenzen zu �bergeben, da 
	// bereits Adressen mit dem gleichem Wert belegt sind
	// und somit nicht zus�tzlich Speicher genutzt werden muss
	// ebenfalls diese als const zu markieren, dass sowohl
	// normale Werte als auch Konstanten �bergeben werden k�nnen
	// und diese nicht manipuliert werden k�nnen.
	
	// Sollen diese weiter manipuliert werden muss nat�rlich auf
	// const verzichtet werdne. Es signalisiert jedoch anderen
	// Programmierern, welche deinen Code lesen direkt, dass daran
	// nichts ge�ndert wird.

	// Beide nun darunterliegende M�glichkeiten ausprobieren indem
	// man eine davon auskommentiert

	// 1. M�glichkeit: jedoch gem. SonarLint f�r nicht als sch�n empfunden
	//				   Der K�rper der Konstruktoren etc. sollte auch in der
	//				   .cpp Datei sein, was hier also nicht der Konvention entspricht.
	//Hund(std::string const& rasse, int const& alter) {
	//	Hund::rasse = rasse;
	//	Hund::alter = alter;
	//}

	// 2. M�glichkeit exakt wie die dar�ber
	//Hund(std::string const& rasse, int const& alter) {
	//	this->rasse = rasse;
	//	this->alter = alter;
	//}
	
	
	// 2. M�glichkeit: Macht das gleiche wie die 1. M�glichkeit 
	Hund(std::string const& rasse, int const& alter)
		: rasse(rasse),   // Beachte es startet mit : und wird mit , getrennt
		  alter(alter) {} // und wird mit {} beendet. Innerhalb der {} k�nnen
						  // weitere Aufrufe unabh�ngig der Initialisierung stattfinden. 
						  // Dies sollte jedoch in der .cpp Datei stattfinden.

	// Der sogenante Dekonstruktor wird aufgerufen z.B. vor dem Beenden des Programmes, wenn
	// die Objekte nicht mehr ben�tigt werden und deshalb aus dem Speicher dereferenziert und
	// damit freigegeben werden.
	~Hund() {
		std::cout << "Ein Objekt Hund der Rasse " << Hund::rasse << " wurde zerst\x94rt." << std::endl;
	}



	// Sogenannte Getter und Setter sind daf�r zust�ndig
	// um interne Attribute zu nutzen, obwohl diese private
	// deklariert sind.

	// Getter geben einem schlichtweg lesend den Wert der Variable
	// BEACHTE: Gibt man stattdessen ein pointer oder die Referenz 
	//			zur�ck, so kann diese/r auch manipuliert werden.
	std::string get_rasse();

	int get_alter();

	// Setter ver�ndern Attribute innerhalb der Klasse
	void set_alter(int alter);

private:
	std::string rasse;

	int alter;
};

