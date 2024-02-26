/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#ifndef OPERATOR_OVERLOADING_H
#define OPERATOR_OVERLOADING_H

#include <iostream>

using namespace std;

class ComplexNumber {
public:
    ComplexNumber(); // Standardkonstruktor
    ComplexNumber(double real, double imaginary); // Konstruktor mit Parametern

    // Getter-Funktionen
    double getReal() const;
    double getImaginary() const;

    // Überladung des Addition-Operators
    ComplexNumber operator+(const ComplexNumber& other) const;

    // Überladung des Subtraktions-Operators
    ComplexNumber operator-(const ComplexNumber& other) const;

    // Überladung des Ausgabeoperators
    // friend wird hier verwendet, um die operator<<-Funktion zu deklarieren,
    // und damit Zugriff auf die privaten Elemente der ComplexNumber-Klasse zu gewähren.
    friend ostream& operator<<(ostream& out, const ComplexNumber& complexNumber);

private:
    double realPart;
    double imaginaryPart;
};

#endif // OPERATOR_OVERLOADING_H
