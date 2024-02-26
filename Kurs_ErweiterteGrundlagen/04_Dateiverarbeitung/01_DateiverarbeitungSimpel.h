#ifndef DATEIVERARBEITUNGSIMPEL_H
#define DATEIVERARBEITUNGSIMPEL_H

#include <vector>
#include <string>

using namespace std;

// Datei erzeugen
void dateiErzeugen(const string& dateiName);

// Datei erzeugen und direkt mit Inhalt füllen
void dateiErzeugenMitInhalt(const string& dateiName, const vector<string>& daten);

// In Datei schreiben
void inDateiSchreiben(const string& dateiName, const vector<string>& daten);

// In Datei an eine bestimmte Stelle schreiben
void anStelleInDateiSchreiben(const string& dateiName, const string& text, int position);

// Datei in der Konsole auslesen lassen
void dateiInKonsoleAuslesen(const string& dateiName);

// Datei löschen mit Konsolenabfrage
void dateiLoeschenMitAbfrage(const string& dateiName);

// Hilfsfunktion zum Anzeigen von Fehlermeldungen
void zeigeFehlermeldung(const string& fehlermeldung);

#endif // DATEIVERARBEITUNGSIMPEL_H
