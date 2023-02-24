/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include "Fahrzeug.h"

// Ein Mercedes IST also auch ein Fahrzeug
class Mercedes : public Fahrzeug {
public:
	// Der Rumpf kann wie gewohnt genutzt werden,
	// wird hier jedoch leer gelassen, somit keine
	// Implementierung in .cpp
	Mercedes() : Fahrzeug(4) {};

	void geraeusch_machen();
};

