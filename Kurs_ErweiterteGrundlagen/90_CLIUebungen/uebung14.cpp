/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung14.h"

using namespace std;

// CPerson Methoden
CPerson::CPerson(const string& name, const string& vorname, const string& geburtsdatum)
    : name(name), vorname(vorname), geburtsdatum(geburtsdatum) {}

void CPerson::lesen() {
    cout << "Name: ";
    cin >> name;
    cout << "Vorname: ";
    cin >> vorname;
    cout << "Geburtsdatum: ";
    cin >> geburtsdatum;
}

void CPerson::schreiben() const {
    cout << "Name: " << name << "\nVorname: " << vorname << "\nGeburtsdatum: " << geburtsdatum << endl;
}

// CKonto Methoden
CKonto::CKonto(double konto) : konto(konto) {}

void CKonto::einzahlen(double betrag) {
    konto += betrag;
    cout << "Einzahlung erfolgreich. Neuer Kontostand: " << konto << endl;
}

void CKonto::abheben(double betrag) {
    if (konto >= betrag) {
        konto -= betrag;
        cout << "Abhebung erfolgreich. Neuer Kontostand: " << konto << endl;
    }
    else {
        cout << "Nicht genug Guthaben auf dem Konto." << endl;
    }
}

// CGiroKonto Methoden
CGiroKonto::CGiroKonto(double konto, double dispo, double dispoProzent)
    : CKonto(konto), dispo(dispo), dispoProzent(dispoProzent) {}

void CGiroKonto::setDispo(double dispo) {
    this->dispo = dispo;
}

double CGiroKonto::getDispo() const {
    return dispo;
}

void CGiroKonto::setDispoProzent(double dispoProzent) {
    this->dispoProzent = dispoProzent;
}

double CGiroKonto::getDispoProzent() const {
    return dispoProzent;
}

// CSparKonto Methoden
CSparKonto::CSparKonto(double konto, int dauer, double zinssatz)
    : CKonto(konto), dauer(dauer), zinssatz(zinssatz) {}

void CSparKonto::setDauer(int dauer) {
    this->dauer = dauer;
}

int CSparKonto::getDauer() const {
    return dauer;
}

void CSparKonto::setZinssatz(double zinssatz) {
    this->zinssatz = zinssatz;
}

double CSparKonto::getZinssatz() const {
    return zinssatz;
}

// CSparer Konstruktor
CSparer::CSparer(const string& name, const string& vorname, const string& geburtsdatum,
    double konto, int dauer, double zinssatz)
    : CPerson(name, vorname, geburtsdatum), CSparKonto(konto, dauer, zinssatz) {}

// CGirokunde Methoden
CGirokunde::CGirokunde(const string& name, const string& vorname, const string& geburtsdatum,
    double konto, double dispo, double dispoProzent)
    : CPerson(name, vorname, geburtsdatum), CGiroKonto(konto, dispo, dispoProzent) {}

// CKombi Konstruktor
CKombi::CKombi(const string& name, const string& vorname, const string& geburtsdatum,
    double konto, double dispo, double dispoProzent, int dauer, double zinssatz)
    : CPerson(name, vorname, geburtsdatum), CGiroKonto(konto, dispo, dispoProzent), CSparKonto(konto, dauer, zinssatz) {}
