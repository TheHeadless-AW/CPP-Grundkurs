/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include "Fahrzeug.h"
// Ein Fahrrad IST also auch ein Fahrzeug
class Fahrrad : public Fahrzeug {
public:
	// Der Rumpf kann wie gewohnt genutzt werden,
	// wird hier jedoch leer gelassen, somit keine
	// Implementierung in .cpp
	Fahrrad() : Fahrzeug(2) {};

	void geraeusch_machen();
};

