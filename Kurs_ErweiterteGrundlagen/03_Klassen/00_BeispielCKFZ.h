#pragma once
#include <string>

class CKfz {
private:
    const std::string marke;
    std::string farbe;
    int leistung;
    int geschwindigkeit;
    int v_max;

public:
    CKfz(const std::string& marke, const std::string& farbe = "", int leistung = 0);

    const std::string& getMarke() const;
    const std::string& getFarbe() const;
    int getLeistung() const;
    int getGeschwindigkeit() const;
    int getVMax() const;

    void setFarbe(const std::string& neueFarbe);
    void setLeistung(int neueLeistung);
    void setGeschwindigkeit(int neueGeschwindigkeit);
    void setVMax(int neueVMax);

    void print() const;
};
