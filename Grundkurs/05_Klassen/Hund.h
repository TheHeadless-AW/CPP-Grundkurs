/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include <string>
#include <iostream>

class Hund {
	// Standardmäßig sind Inhalte ohne Spezifizierung
	// innerhalb einer Klasse private. Dies bedeutet,
	// dass die Inhalte auch nur dort genutzt werden
	// können und gegen Manipulation von außen geschützt
	// sind.
public:
	// Der sogenannte Konstruktor, welcher beim Erzeugen
	// eines Objektes dieser Klasse aufgerufen wird

	//Hund() : rasse("Nicht angegeben"), alter(0) {
	//	std::cout << "Achtung Hund mit nicht vorhandener Rasse erzeugt!" << std::endl;
	//};

	// Es ist auch möglich weitere Konstruktoren im Konstruktor selbst zu nutzen
	// Man beachhte, dass dies zu Fehlern führen kann. Als Beispiel entferne man hier
	// einmal rasse= . Dann wird keine Rasse eingegeben. Hier ist der Fehler darin, dass
	// ohne rasse= kein Objekt der Klasse string initialisiert wird, sondern schlichtweg
	// ein char_array übergeben wird. Deswegen bietet sich der obige Konstruktor oder
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
	// Bereich private zugegriffen werden können.

	// Es bietet sich an die Referenzen zu übergeben, da 
	// bereits Adressen mit dem gleichem Wert belegt sind
	// und somit nicht zusätzlich Speicher genutzt werden muss
	// ebenfalls diese als const zu markieren, dass sowohl
	// normale Werte als auch Konstanten übergeben werden können
	// und diese nicht manipuliert werden können.
	
	// Sollen diese weiter manipuliert werden muss natürlich auf
	// const verzichtet werdne. Es signalisiert jedoch anderen
	// Programmierern, welche deinen Code lesen direkt, dass daran
	// nichts geändert wird.

	// Beide nun darunterliegende Möglichkeiten ausprobieren indem
	// man eine davon auskommentiert

	// 1. Möglichkeit: jedoch gem. SonarLint für nicht als schön empfunden
	//				   Der Körper der Konstruktoren etc. sollte auch in der
	//				   .cpp Datei sein, was hier also nicht der Konvention entspricht.
	//Hund(std::string const& rasse, int const& alter) {
	//	Hund::rasse = rasse;
	//	Hund::alter = alter;
	//}

	// 2. Möglichkeit exakt wie die darüber
	//Hund(std::string const& rasse, int const& alter) {
	//	this->rasse = rasse;
	//	this->alter = alter;
	//}
	
	
	// 2. Möglichkeit: Macht das gleiche wie die 1. Möglichkeit 
	Hund(std::string const& rasse, int const& alter)
		: rasse(rasse),   // Beachte es startet mit : und wird mit , getrennt
		  alter(alter) {} // und wird mit {} beendet. Innerhalb der {} können
						  // weitere Aufrufe unabhängig der Initialisierung stattfinden. 
						  // Dies sollte jedoch in der .cpp Datei stattfinden.

	// Der sogenante Dekonstruktor wird aufgerufen z.B. vor dem Beenden des Programmes, wenn
	// die Objekte nicht mehr benötigt werden und deshalb aus dem Speicher dereferenziert und
	// damit freigegeben werden.
	~Hund() {
		std::cout << "Ein Objekt Hund der Rasse " << Hund::rasse << " wurde zerst\x94rt." << std::endl;
	}



	// Sogenannte Getter und Setter sind dafür zuständig
	// um interne Attribute zu nutzen, obwohl diese private
	// deklariert sind.

	// Getter geben einem schlichtweg lesend den Wert der Variable
	// BEACHTE: Gibt man stattdessen ein pointer oder die Referenz 
	//			zurück, so kann diese/r auch manipuliert werden.
	std::string get_rasse();

	int get_alter();

	// Setter verändern Attribute innerhalb der Klasse
	void set_alter(int alter);

private:
	std::string rasse;

	int alter;
};

