#include "01_DateiverarbeitungSimpel.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

// Datei erzeugen
void dateiErzeugen(const string& dateiName) {
    ofstream ausDatei(dateiName, ios::app);
    ausDatei.close();
}

// Datei erzeugen und direkt mit Inhalt fuellen
void dateiErzeugenMitInhalt(const string& dateiName, const vector<string>& daten) {
    ofstream ausDatei(dateiName);
    if (ausDatei.is_open()) {
        for (const string& zeile : daten) {
            ausDatei << zeile << endl;
        }
        ausDatei.close();
    }
    else {
        zeigeFehlermeldung("Fehler beim Öffnen der Datei zum Erzeugen mit Inhalt");
    }
}

// In Datei schreiben
void inDateiSchreiben(const string& dateiName, const vector<string>& daten) {
    ofstream ausDatei(dateiName, ios::app);

    if (ausDatei.is_open()) {
        for (const string& zeile : daten) {
            ausDatei << zeile << endl;
        }
        ausDatei.close();
        cout << "Daten erfolgreich in Datei geschrieben: " << dateiName << endl;
    }
    else {
        zeigeFehlermeldung("Fehler beim Öffnen der Datei zum Schreiben");
    }
}

// In Datei an eine bestimmte Stelle schreiben
void anStelleInDateiSchreiben(const string& dateiName, const string& text, int position) {
    fstream datei(dateiName, ios::in | ios::out);

    if (datei.is_open()) {
        datei.seekp(position, ios::beg); // Position setzen

        // Schreiben des Textes an der bestimmten Stelle
        datei << text;

        datei.close();
        cout << "Text erfolgreich an Stelle in Datei geschrieben: " << dateiName << endl;
    }
    else {
        zeigeFehlermeldung("Fehler beim Öffnen der Datei zum Schreiben an bestimmter Stelle");
    }
}

// Datei in der Konsole auslesen lassen
void dateiInKonsoleAuslesen(const string& dateiName) {
    ifstream inDatei(dateiName);

    if (inDatei.is_open()) {
        string zeile;
        while (getline(inDatei, zeile)) {
            cout << zeile << endl;
        }

        inDatei.close();
    }
    else {
        zeigeFehlermeldung("Fehler beim Öffnen der Datei zum Lesen");
    }
}

// Datei loeschen mit Konsolenabfrage
void dateiLoeschenMitAbfrage(const string& dateiName) {
    cout << "Moechten Sie die Datei '" << dateiName << "' wirklich loeschen? (ja/nein): ";
    string antwort;
    cin >> antwort;

    if (antwort == "ja") {
        if (remove(dateiName.c_str()) == 0) {
            cout << "Datei erfolgreich geloescht: " << dateiName << endl;
        }
        else {
            zeigeFehlermeldung("Fehler beim Loeschen der Datei");
        }
    }
    else {
        cout << "Loeschvorgang abgebrochen." << endl;
    }
}

void zeigeFehlermeldung(const string& fehlermeldung) {
    // Ausgabe der Fehlermeldung auf dem Fehlerausgabestrom (cerr)
    cerr << "Fehler: " << fehlermeldung << endl;
}
