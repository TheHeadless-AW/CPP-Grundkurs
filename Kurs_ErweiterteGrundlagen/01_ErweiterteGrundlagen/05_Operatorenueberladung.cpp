/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "05_Operatorenueberladung.h"

using namespace std;

// Standardkonstruktor
ComplexNumber::ComplexNumber() : realPart(0.0), imaginaryPart(0.0) {}

// Konstruktor mit Parametern
ComplexNumber::ComplexNumber(double real, double imaginary) : realPart(real), imaginaryPart(imaginary) {}

// Getter-Funktionen
double ComplexNumber::getReal() const {
    return realPart;
}

double ComplexNumber::getImaginary() const {
    return imaginaryPart;
}

// Überladung des Addition-Operators
ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
    return ComplexNumber(realPart + other.realPart, imaginaryPart + other.imaginaryPart);
}

// Überladung des Subtraktions-Operators
ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const {
    return ComplexNumber(realPart - other.realPart, imaginaryPart - other.imaginaryPart);
}

// Überladung des Ausgabeoperators
ostream& operator<<(ostream& out, const ComplexNumber& complexNumber) {
    out << complexNumber.realPart << " + " << complexNumber.imaginaryPart << "i";
    return out;
}
