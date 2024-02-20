/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <iostream>
#include "uebung5.h"
using namespace std;

void invers(const char* zeichenkette, int laenge) {
    // 1. Zeiger auf den Speicherbereich für die umgekehrte Zeichenkette
    //    Der zusätzliche Platz (+1) wird für das Null-Zeichen ('\0') am Ende der Zeichenkette reserviert.

    // BEACHTE: Zu Beginn steckt im uninitialisierten char* der sogenannte garbage / "müll"
    // char* umgekehrt = new char[laenge + 1];

    // Initialisiere dies mit () sodass es mit 0en gefüllt wird, was nicht notwendig ist, wenn
    // \0 auch wirklich angehängt wird im Gegenzug musst du \0 nicht anhängen wenn () genutzt wird.
    char* umgekehrt = new char[laenge + 1] ();

    // 2. Schleife zum Umkehren der Zeichenkette
    int j = laenge - 1;
    for (int i = 0; i < laenge; i++) {
        //    Fülle die umgekehrte Zeichenkette rückwärts mit den Zeichen der Originalkette.
        //    j-- wird verwendet, um die Zeichen in umgekehrter Reihenfolge zu setzen.
        umgekehrt[j--] = zeichenkette[i];
    }

    // 3. Nullterminierungszeichen hinzufügen
    //    Dies muss nicht hinzugefügt werden, wenn unter 1. 
    //    char* direkt mit () initialisiert wird
    
    // umgekehrt[laenge] = '\0';

    // 4. Umgekehrte Zeichenkette auf dem Bildschirm ausgeben
    cout << umgekehrt << endl;

    // 5. Speicherbereich freigeben
    delete[] umgekehrt;
}
