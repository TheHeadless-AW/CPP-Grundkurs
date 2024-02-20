/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <string>
#include <iostream>
#include "uebung9.h"

using namespace std;

struct Deutschland {
	string land = "Deutschland";
	string hauptstadt = "Berlin";
};

void ausgabeLandUndHauptstadt(){
	Deutschland deutschland;
	string& deutschlandLandReferenz = deutschland.land;
	string& deutschlandHauptstadtReferenz = deutschland.hauptstadt;

	cout << "Land: " << deutschlandLandReferenz << ", Hauptstadt: " << deutschlandHauptstadtReferenz << endl;
}

