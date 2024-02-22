#include <iostream>
#include <ctime>
#include "04_Datum.h"

using namespace std;

void zeitDruck(const tm& timeinfo, const string& label) {
    cout << label << ": ";
    cout << "Jahr = " << timeinfo.tm_year + 1900 << " ";
    cout << "Monat = " << timeinfo.tm_mon + 1 << " ";
    cout << "Tag = " << timeinfo.tm_mday << " ";
    cout << "Stunde = " << timeinfo.tm_hour << " ";
    cout << "Minute = " << timeinfo.tm_min << " ";
    cout << "Sekunde = " << timeinfo.tm_sec << endl;
    cout << "Wochentag = ";

    // Erstelle ein Array mit den Wochentagsnamen in der richtigen Reihenfolge (Sonntag = 0, Montag = 1, ...).
    const char* wochentage[] = { "Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag" };

    // Gib den Wochentag aus, indem auf das entsprechende Element im Array zugegriffen wird.
    cout << wochentage[timeinfo.tm_wday] << endl;
}

void datumsAnzeige() {
    // Erstelle eine tm-Struktur (timeinfo), um das Datum zu repräsentieren.
    tm timeinfo = {};

    // Setze die Jahr-, Monats- und Tageskomponenten der tm-Struktur.
    int Jahr = 2024;
    int Monat = 2;
    int Tag = 22;
    timeinfo.tm_year = Jahr - 1900;  // Jahr - 1900, um die Anzahl der Jahre seit 1900 zu erhalten.
    timeinfo.tm_mon = Monat - 1;     // Monat - 1, da tm_mon im Bereich von 0 bis 11 ist.
    timeinfo.tm_mday = Tag;          // Setze den Tag.

    // Zeige die Zeitinformationen vor mktime.
    zeitDruck(timeinfo, "Vor mktime");

    // Berechne die Sekunden seit der Epoch bis zum angegebenen Datum und Uhrzeit.
    time_t seconds_since_epoch = mktime(&timeinfo);

    // Funktioniert auch ohne Speichern der Rückgabe. Mktime bearbeitet &timeinfo beim Aufruf 
    // weswegen der Zeiger übergeben werden muss.
    // mktime(&timeinfo);

    // Zeige die Zeitinformationen nach mktime.
    zeitDruck(timeinfo, "Nach mktime");

    // Gib die Anzahl der Sekunden seit der Epoch aus.
    cout << "Sekunden seit der Epoch: " << seconds_since_epoch << endl;
}
