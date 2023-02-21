/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include <string>

class Mensch {
	// public wird benötigt um auf die sogenannten Attribute einer
	// Klasse überhaupt von außen zugreifen zu können. Ohne public
	// sind diese lediglich (nicht ganz) im lokalen Bereich sichtbar
	// Mehr dazu unter 06_Sichtbarkeiten 
public:
	// Um Fehlinitialisierungen zu vermeiden bietet es sich an die
	// Attribute prä-zu-initialisieren, sodass man nicht ausversehen
	// auf alter = -293781298 o.ä. zugreift. Ein alter = 0 schadet nicht.

	int alter = 0;
	// Spätestens ab hier sollten wir uns angewöhnen aufgrund von
	// Überschneidungen und doppelten "includes" bei mehreren Dateien
	// in HEADER Dateien, welche global genutzt werden können kein
	// using namespace... zu nutzen.
	std::string name = "";

	void sprechen();
};

