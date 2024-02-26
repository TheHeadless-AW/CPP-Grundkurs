/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once
#include <iostream>
#include <string>

// Klasse CPerson
class CPerson {
private:
    std::string name;
    std::string vorname;
    std::string geburtsdatum;

public:
    // Standardkonstruktor
    CPerson() {}

    // Konstruktor
    CPerson(const std::string& name, const std::string& vorname, const std::string& geburtsdatum);

    // Methoden
    void lesen();
    void schreiben() const;
};

// Klasse CKonto
class CKonto {
protected:
    double konto;

public:
    // Standardkonstruktor
    CKonto() {}

    // Konstruktor
    CKonto(double konto);

    // Methoden
    void einzahlen(double betrag);
    void abheben(double betrag);
};

// Klasse CGiroKonto
class CGiroKonto : virtual public CKonto {
private:
    double dispo;
    double dispoProzent;

public:
    // Standardkonstruktor
    CGiroKonto() : CKonto(), dispo(0.0), dispoProzent(0.0) {}

    // Konstruktor
    CGiroKonto(double konto, double dispo, double dispoProzent);

    // Methoden
    void setDispo(double dispo);
    double getDispo() const;
    void setDispoProzent(double dispoProzent);
    double getDispoProzent() const;
};

// Klasse CSparKonto
class CSparKonto : virtual public CKonto {
private:
    int dauer;
    double zinssatz;

public:
    // Standardkonstruktor
    CSparKonto() : CKonto(), dauer(0), zinssatz(0.0) {}

    // Konstruktor
    CSparKonto(double konto, int dauer, double zinssatz);

    // Methoden
    void setDauer(int dauer);
    int getDauer() const;
    void setZinssatz(double zinssatz);
    double getZinssatz() const;
};

// Klasse CSparer
class CSparer : public CPerson, public CSparKonto {
public:
    // Konstruktor
    CSparer(const std::string& name, const std::string& vorname, const std::string& geburtsdatum,
        double konto, int dauer, double zinssatz);
};

// Klasse CGirokunde
class CGirokunde : public CPerson, public CGiroKonto {
public:
    // Standardkonstruktor
    CGirokunde() : CPerson(), CGiroKonto() {}

    // Konstruktor
    CGirokunde(const std::string& name, const std::string& vorname, const std::string& geburtsdatum,
        double konto, double dispo, double dispoProzent);
};

// Klasse CKombi
class CKombi : public CPerson, public CGiroKonto, public CSparKonto {
public:
    // Konstruktor
    CKombi(const std::string& name, const std::string& vorname, const std::string& geburtsdatum,
        double konto, double dispo, double dispoProzent, int dauer, double zinssatz);
};
