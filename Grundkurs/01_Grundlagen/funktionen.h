
// Moderne Compiler sorgen mit #pragma once, dass diese
// Datei nur ein einziges Mal eingebunden wird. Es ist
// jedoch nicht garantiert. Somit bietet es sich an immer
// Die Guards mit #ifdef etc. zu nutzen.
// Siehe: konstanten_und_makros.h
#pragma once

//			           Konvention:						 //
//														 //
//		includes etc. sollten für gewöhnlich			 //
//	 in den .cpp Dateien geschehen quasi für einen       //
//				KLEINSTMÖGLICHEN Bereich  				 //

#include <iostream>
using namespace std;

//				ACHTUNG ACHTUNG ACHTUNG					 //
//														 //
//		<string> ist in <iostream> enthalten			 //
//	 dennoch sollte man grundsätzlich <string> mitnehmen //
//				um mit Strings zu arbeiten				 //
//														 //
//				ACHTUNG ACHTUNG ACHTUNG					 //
#include <string>

/* Die Headerfile ist quasi die Definitionsdatei
 * Hier werden also alle DEFINITIONEN "definiert",
 * welche durch andere Dateien durch z.B. include
 * eingebunden werden sollen.
 */

 // Rückgabetyp = Integer, Funktionsname = addieren , Parameterliste () ist leer
int addieren();

// Rückgabetyp ist leer (also nicht erwartet), Funktionsname ist textausgabe, 
// Parameterliste (string text) erwartet einen String und nutzt diesen in der lokalen Variable text
void textausgabe(string text);
