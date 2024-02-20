/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <iostream>
#include "uebung5.h"
using namespace std;

void invers(const char* zeichenkette, int laenge) {
    // 1. Zeiger auf den Speicherbereich f�r die umgekehrte Zeichenkette
    //    Der zus�tzliche Platz (+1) wird f�r das Null-Zeichen ('\0') am Ende der Zeichenkette reserviert.

    // BEACHTE: Zu Beginn steckt im uninitialisierten char* der sogenannte garbage / "m�ll"
    // char* umgekehrt = new char[laenge + 1];

    // Initialisiere dies mit () sodass es mit 0en gef�llt wird, was nicht notwendig ist, wenn
    // \0 auch wirklich angeh�ngt wird im Gegenzug musst du \0 nicht anh�ngen wenn () genutzt wird.
    char* umgekehrt = new char[laenge + 1] ();

    // 2. Schleife zum Umkehren der Zeichenkette
    int j = laenge - 1;
    for (int i = 0; i < laenge; i++) {
        //    F�lle die umgekehrte Zeichenkette r�ckw�rts mit den Zeichen der Originalkette.
        //    j-- wird verwendet, um die Zeichen in umgekehrter Reihenfolge zu setzen.
        umgekehrt[j--] = zeichenkette[i];
    }

    // 3. Nullterminierungszeichen hinzuf�gen
    //    Dies muss nicht hinzugef�gt werden, wenn unter 1. 
    //    char* direkt mit () initialisiert wird
    
    // umgekehrt[laenge] = '\0';

    // 4. Umgekehrte Zeichenkette auf dem Bildschirm ausgeben
    cout << umgekehrt << endl;

    // 5. Speicherbereich freigeben
    delete[] umgekehrt;
}
