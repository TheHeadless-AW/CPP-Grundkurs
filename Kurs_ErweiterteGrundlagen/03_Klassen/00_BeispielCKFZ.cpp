#include "00_BeispielCKFZ.h"
#include <iostream>
#include <iomanip>

CKfz::CKfz(const std::string& marke, const std::string& farbe, int leistung)
    : marke(marke), farbe(farbe), leistung(leistung), geschwindigkeit(0), v_max(0) {}

const std::string& CKfz::getMarke() const { return marke; }
const std::string& CKfz::getFarbe() const { return farbe; }
int CKfz::getLeistung() const { return leistung; }
int CKfz::getGeschwindigkeit() const { return geschwindigkeit; }
int CKfz::getVMax() const { return v_max; }

void CKfz::setFarbe(const std::string& neueFarbe) { farbe = neueFarbe; }
void CKfz::setLeistung(int neueLeistung) { leistung = neueLeistung; }

void CKfz::setGeschwindigkeit(int neueGeschwindigkeit) {
    if (neueGeschwindigkeit < 0) {
        geschwindigkeit = 0;
    }
    else if (neueGeschwindigkeit > v_max) {
        geschwindigkeit = v_max;
    }
    else {
        geschwindigkeit = neueGeschwindigkeit;
    }
}

void CKfz::setVMax(int neueVMax) { v_max = neueVMax; }

void CKfz::print() const {
    std::cout << "------------------" << std::endl;
    std::cout << std::left << std::setw(20) << "Marke" << std::setw(20) << "Farbe" << std::setw(20) << "Leistung"
        << std::setw(20) << "Geschwindigkeit" << std::setw(20) << "VMax" << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << std::setw(20) << marke << std::setw(20) << farbe << std::setw(20) << leistung << std::setw(20)
        << geschwindigkeit << std::setw(20) << v_max << std::endl;
    std::cout << "------------------" << std::endl;
}
