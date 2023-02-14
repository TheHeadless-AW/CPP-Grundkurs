#pragma once
#include <iostream>
using namespace std;

//				ACHTUNG ACHTUNG ACHTUNG					 //
//														 //
//		<string> ist in <iostream> enthalten			 //
//	deswegen sollte man grunds�tzlich <string> mitnehmen //
//				um mit Strings zu arbeiten				 //
//														 //
//				ACHTUNG ACHTUNG ACHTUNG					 //
#include <string>

/* Die Headerfile ist quasi die Definitionsdatei
 * Hier werden also alle DEFINITIONEN "definiert",
 * welche durch andere Dateien durch z.B. include
 * eingebunden werden sollen.
 */

 // R�ckgabetyp = Integer, Funktionsname = addieren , Parameterliste () ist leer
int addieren();

// R�ckgabetyp ist leer (also nicht erwartet), Funktionsname ist textausgabe, 
// Parameterliste (string text) erwartet einen String und nutzt diesen in der lokalen Variable text
void textausgabe(string text);
