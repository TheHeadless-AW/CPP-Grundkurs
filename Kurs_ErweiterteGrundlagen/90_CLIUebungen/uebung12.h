#ifndef UEBUNG12_H
#define UEBUNG12_H

#include <iostream>
#include <ctime>

using namespace std;

class Datum
{
protected:
    int Tag, Monat, Jahr;

public:
    Datum(int t, int m, int j);  // Konstruktor
    void SetDatum(int t, int m, int j);
    virtual void DruckDatum();
    const char* DruckWochentag();
    const char* DruckMonat();
};

#endif // UEBUNG12_H
