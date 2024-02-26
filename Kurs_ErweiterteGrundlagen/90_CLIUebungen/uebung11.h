/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#pragma once

class CKonto {
private:
    double kontostand;
    double dispo;

public:
    CKonto(double initialerKontostand = 0.0, double dispo = 0.0);

    void SetKontostand(double neuerKontostand);

    double GetKontostand() const;

    // Einzahlen von Geld
    // Gibt immer void zur�ck, da Einzahlen immer erfolgreich ist
    void Einzahlen(double betrag);

    // Auszahlen von Geld
    // Gibt true zur�ck, wenn die Auszahlung erfolgreich war, andernfalls false
    bool Auszahlen(double betrag);

    // Informationen zum Kontostand und verf�gbarem Geldbetrag ausgeben
    void Information() const;
};
