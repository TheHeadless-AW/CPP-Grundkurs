/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#ifndef UEBUNG12_K_H
#define UEBUNG12_K_H

#include "uebung12.h"
#include <iostream>

class DatumAusgabe : public Datum
{
private:
    const char* WTag;
public:
    // Konstruktor übernimmt die Basis-Klasse Datum
    DatumAusgabe(int t, int m, int j) : Datum(t, m, j) {
        this->WTag = DruckWochentag();
    }

    // Methoden für spezielle Bildschirmausgabe
    void AusgabeA();
    void AusgabeB();
    void AusgabeC();
    void AusgabeD();
    void DruckDatum() override;
};

#endif // UEBUNG12_K_H
