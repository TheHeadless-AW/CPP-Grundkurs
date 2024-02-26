/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product {
public:
    // Konstruktor mit Default-Werten
    Product(long code = 0, const std::string& name = "");

    // Zugriffsmethoden
    void setCode(long code);
    long getCode() const;
    void setName(const std::string& name);
    std::string getName() const;

    // Scanner und Printer Methoden
    void virtual scanner();
    void virtual printer() const;

private:
    long code;
    std::string name;
};

#endif // PRODUCT_H
