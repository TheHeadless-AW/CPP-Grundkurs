/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include <string>

class Mensch {
	// public wird ben�tigt um auf die sogenannten Attribute einer
	// Klasse �berhaupt von au�en zugreifen zu k�nnen. Ohne public
	// sind diese lediglich (nicht ganz) im lokalen Bereich sichtbar
	// Mehr dazu unter 06_Sichtbarkeiten 
public:
	// Um Fehlinitialisierungen zu vermeiden bietet es sich an die
	// Attribute pr�-zu-initialisieren, sodass man nicht ausversehen
	// auf alter = -293781298 o.�. zugreift. Ein alter = 0 schadet nicht.

	int alter = 0;
	// Sp�testens ab hier sollten wir uns angew�hnen aufgrund von
	// �berschneidungen und doppelten "includes" bei mehreren Dateien
	// in HEADER Dateien, welche global genutzt werden k�nnen kein
	// using namespace... zu nutzen.
	std::string name = "";

	void sprechen();
};

