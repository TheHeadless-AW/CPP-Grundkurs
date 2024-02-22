#include "uebung13_Product.h"
#include <iostream>

using namespace std;

// Konstruktor mit Default-Werten
Product::Product(long code, const string& name) : code(code), name(name) {}

// Zugriffsmethoden
void Product::setCode(long code) { this->code = code; }
long Product::getCode() const { return code; }
void Product::setName(const string& name) { this->name = name; }
string Product::getName() const { return name; }

// Scanner Methode
void Product::scanner() {
    cout << "Barcode: ";
    cin.ignore();
    cin >> code;
    cout << "Name: ";
    cin.ignore();
    getline(cin, name);
}

// Printer Methode
void Product::printer() const {
    cout << "Barcode: " << code << "\nName: " << name << endl;
}
