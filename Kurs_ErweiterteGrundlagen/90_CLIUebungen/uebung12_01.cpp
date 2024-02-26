/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung12_01.h"
using namespace std;

void DatumAusgabe::AusgabeA()
{
    cout << this->DruckWochentag()[0] << this->DruckWochentag()[1] << ", der " << this->Tag << ". " << this->DruckMonat() << " " << this->Jahr << endl;
}

void DatumAusgabe::AusgabeB()
{
    cout << this->Tag << ". " << this->DruckMonat() << " " << this->Jahr << endl;
}

void DatumAusgabe::AusgabeC()
{
    cout << this->Tag << "." << this->Monat << "." << this->Jahr << endl;
}

void DatumAusgabe::AusgabeD()
{
    cout << this->Tag << "." << this->Monat << "." << (this->Jahr % 100) << endl;
}

void DatumAusgabe::DruckDatum()
{
    this->AusgabeA();
}
