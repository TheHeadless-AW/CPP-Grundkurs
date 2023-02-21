/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include <string>

class Hund {
	// Standardm��ig sind Inhalte ohne Spezifizierung
	// innerhalb einer Klasse private. Dies bedeutet,
	// dass die Inhalte auch nur dort genutzt werden
	// k�nnen und gegen Manipulation von au�en gesch�tzt
	// sind.
public:
	// Der sogenannte Konstruktor, welcher beim Erzeugen
	// eines Objektes dieser Klasse aufgerufen wird

	// Sorgt daf�r, dass beim Erzeugen eiens Objektes alle
	// Attribute von Hund (rasse und alter) ihre echten
	// Standardwerte erhalten
	Hund() = default;

	// Beachte, dass auch auf untenliegende Attribute im
	// Bereich private zugegriffen werden k�nnen.

	// Es bietet sich an die Referenzen zu �bergeben, da 
	// bereits Adressen mit dem gleichem Wert belegt sind
	// und somit nicht zus�tzlich Speicher genutzt werden muss

	// Beide nun darunterliegende M�glichkeiten ausprobieren indem
	// man eine davon auskommentiert

	// 1. M�glichkeit: jedoch gem. SonarLint f�r nicht als sch�n empfunden
	//				   Der K�rper der Konstruktoren etc. sollte auch in der
	//				   .cpp Datei sein, was hier also nicht der Konvention entspricht.
	Hund(std::string const& rasse, int const& alter) {
		Hund::rasse = rasse;
		Hund::alter = alter;
	}

	// 2. M�glichkeit: Macht das gleiche wie die 1. M�glichkeit 
	Hund(std::string const& rasse, int const& alter)
		: rasse(rasse),   // Beachte es startet mit : und wird mit , getrennt
		  alter(alter) {} // und wird mit {} beendet. Innerhalb der {} k�nnen
						  // weitere Aufrufe unabh�ngig der Initialisierung stattfinden. 
						  // Dies sollte jedoch in der .cpp Datei stattfinden.

	// Sogenannte Getter und Setter sind daf�r zust�ndig
	// um interne Attribute zu nutzen, obwohl diese private
	// deklariert sind.

	// Getter geben einem schlichtweg lesend den Wert der Variable
	// BEACHTE: Gibt man stattdessen ein pointer oder die Referenz 
	//			zur�ck, so kann diese/r auch manipuliert werden.
	std::string get_rasse();

	// Setter ver�ndern Attribute innerhalb der Klasse

private:
	std::string rasse;

	int alter;
};

