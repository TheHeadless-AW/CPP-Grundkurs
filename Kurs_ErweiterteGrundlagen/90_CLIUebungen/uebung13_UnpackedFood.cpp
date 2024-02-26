/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung13_UnpackedFood.h"
#include <iostream>

using namespace std;

// Konstruktor mit Default-Werten
UnpackedFood::UnpackedFood(long code, const string& name, double weight, double kiloPrice)
    : Product(code, name), weight(weight), kiloPrice(kiloPrice) {}

// Zugriffsmethoden
void UnpackedFood::setWeight(double weight) { this->weight = weight; }
double UnpackedFood::getWeight() const { return weight; }
void UnpackedFood::setKiloPrice(double kiloPrice) { this->kiloPrice = kiloPrice; }
double UnpackedFood::getKiloPrice() const { return kiloPrice; }

// Redefinierte Scanner Methode
void UnpackedFood::scanner() {
    Product::scanner();

    cout << "Weight: ";
    cin.ignore();
    cin >> weight;

    cout << "Kilo Price: ";
    cin.ignore();
    cin >> kiloPrice;
}

// Redefinierte Printer Methode
void UnpackedFood::printer() const {
    Product::printer();
    cout << "Weight: " << weight << "\nKilo Price: " << kiloPrice << endl;
}
