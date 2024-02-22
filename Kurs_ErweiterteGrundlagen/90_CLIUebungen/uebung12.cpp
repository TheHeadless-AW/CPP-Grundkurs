#include "uebung12.h"

Datum::Datum(int t, int m, int j) : Tag(t), Monat(m), Jahr(j) {
    
}

void Datum::DruckDatum()
{
    cout << this->Tag << ".";
    cout << this->Monat << ".";
    cout << this->Jahr << endl;
}

void Datum::SetDatum(int t, int m, int j)
{
    this->Tag = t;
    this->Monat = m;
    this->Jahr = j;
}

const char* Datum::DruckWochentag()
{
    // Erstelle eine tm-Struktur (timeinfo), um das Datum zu repräsentieren.
    tm timeinfo = {};

    // Setze die Jahr-, Monats- und Tageskomponenten der tm-Struktur.
    // Beachte, dass tm_year die Anzahl der Jahre seit 1900 ist, und tm_mon ist im Bereich von 0 bis 11.
    timeinfo.tm_year = this->Jahr - 1900;  // Jahr - 1900, um die Anzahl der Jahre seit 1900 zu erhalten.
    timeinfo.tm_mon = this->Monat - 1;     // Monat - 1, da tm_mon im Bereich von 0 bis 11 ist.
    timeinfo.tm_mday = this->Tag;          // Setze den Tag.

    // Verwende die mktime-Funktion, um die Wochentagsinformationen in der tm-Struktur zu berechnen.
    mktime(&timeinfo);

    // Erstelle ein Array mit den Wochentagsnamen in der richtigen Reihenfolge (Sonntag = 0, Montag = 1, ...).
    // Sonntag als erster Tag hat "traditionelle" Gründe
    const char* wochentage[] = { "Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag" };

    // Gib den Wochentag aus, indem auf das entsprechende Element im Array zugegriffen wird.
    // cout << wochentage[timeinfo.tm_wday] << endl;

    return wochentage[timeinfo.tm_wday];
}

const char* Datum::DruckMonat()
{
    // Erstelle ein Array mit den Monatsnamen in der richtigen Reihenfolge (Januar = 0, Februar = 1, ...).
    const char* monate[] = { "Januar", "Februar", "März", "April", "Mai", "Juni", "Juli", "August", "September", "Oktober", "November", "Dezember" };

    // Gib den Monat aus, indem auf das entsprechende Element im Array zugegriffen wird.
    return monate[this->Monat - 1];
}


