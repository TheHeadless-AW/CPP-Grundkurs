#include "uebung13_PackedFood.h"
#include <iostream>

using namespace std;

// Konstruktor mit Default-Werten
PackedFood::PackedFood(long code, const string& name, double unitPrice)
    : Product(code, name), unitPrice(unitPrice) {}

// Zugriffsmethoden
void PackedFood::setUnitPrice(double unitPrice) { this->unitPrice = unitPrice; }
double PackedFood::getUnitPrice() const { return unitPrice; }

// Redefinierte Scanner Methode
void PackedFood::scanner() {
    Product::scanner();

    cout << "Unit Price: ";
    cin.ignore();
    cin >> unitPrice;
}

// Redefinierte Printer Methode
void PackedFood::printer() const {
    Product::printer();
    cout << "Unit Price: " << unitPrice << endl;
}
