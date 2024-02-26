/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#ifndef OPERATOR_OVERLOADING_H
#define OPERATOR_OVERLOADING_H

#include <iostream>

class ComplexNumber {
public:
    ComplexNumber(); // Standardkonstruktor
    ComplexNumber(double real, double imaginary); // Konstruktor mit Parametern

    // Getter-Funktionen
    double getReal() const;
    double getImaginary() const;

    // �berladung des Addition-Operators
    ComplexNumber operator+(const ComplexNumber& other) const;

    // �berladung des Subtraktions-Operators
    ComplexNumber operator-(const ComplexNumber& other) const;

    // �berladung des Ausgabeoperators
    friend std::ostream& operator<<(std::ostream& out, const ComplexNumber& complexNumber);

private:
    double realPart;
    double imaginaryPart;
};

#endif // OPERATOR_OVERLOADING_H
