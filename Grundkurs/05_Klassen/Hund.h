/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include <string>

class Hund {
	// Standardmäßig sind Inhalte ohne Spezifizierung
	// innerhalb einer Klasse private. Dies bedeutet,
	// dass die Inhalte auch nur dort genutzt werden
	// können und gegen Manipulation von außen geschützt
	// sind.
public:
	// Der sogenannte Konstruktor, welcher beim Erzeugen
	// eines Objektes dieser Klasse aufgerufen wird

	// Sorgt dafür, dass beim Erzeugen eiens Objektes alle
	// Attribute von Hund (rasse und alter) ihre echten
	// Standardwerte erhalten
	Hund() = default;

	// Beachte, dass auch auf untenliegende Attribute im
	// Bereich private zugegriffen werden können.

	// Es bietet sich an die Referenzen zu übergeben, da 
	// bereits Adressen mit dem gleichem Wert belegt sind
	// und somit nicht zusätzlich Speicher genutzt werden muss

	// Beide nun darunterliegende Möglichkeiten ausprobieren indem
	// man eine davon auskommentiert

	// 1. Möglichkeit: jedoch gem. SonarLint für nicht als schön empfunden
	//				   Der Körper der Konstruktoren etc. sollte auch in der
	//				   .cpp Datei sein, was hier also nicht der Konvention entspricht.
	Hund(std::string const& rasse, int const& alter) {
		Hund::rasse = rasse;
		Hund::alter = alter;
	}

	// 2. Möglichkeit: Macht das gleiche wie die 1. Möglichkeit 
	Hund(std::string const& rasse, int const& alter)
		: rasse(rasse),   // Beachte es startet mit : und wird mit , getrennt
		  alter(alter) {} // und wird mit {} beendet. Innerhalb der {} können
						  // weitere Aufrufe unabhängig der Initialisierung stattfinden. 
						  // Dies sollte jedoch in der .cpp Datei stattfinden.

	// Sogenannte Getter und Setter sind dafür zuständig
	// um interne Attribute zu nutzen, obwohl diese private
	// deklariert sind.

	// Getter geben einem schlichtweg lesend den Wert der Variable
	// BEACHTE: Gibt man stattdessen ein pointer oder die Referenz 
	//			zurück, so kann diese/r auch manipuliert werden.
	std::string get_rasse();

	// Setter verändern Attribute innerhalb der Klasse

private:
	std::string rasse;

	int alter;
};

