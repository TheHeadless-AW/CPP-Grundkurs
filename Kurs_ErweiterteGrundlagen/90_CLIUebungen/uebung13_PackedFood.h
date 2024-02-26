/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#ifndef PACKEDFOOD_H
#define PACKEDFOOD_H

#include "uebung13_Product.h"

class PackedFood : public Product {
public:
    // Konstruktor mit Default-Werten
    PackedFood(long code = 0, const std::string& name = "", double unitPrice = 0.0);

    // Zugriffsmethoden
    void setUnitPrice(double unitPrice);
    double getUnitPrice() const;

    // Redefinierte Scanner und Printer Methoden
    void scanner() override;
    void printer() const override;

private:
    double unitPrice;
};

#endif // PACKEDFOOD_H
