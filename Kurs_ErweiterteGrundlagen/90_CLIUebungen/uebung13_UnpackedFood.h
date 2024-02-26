/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#ifndef UNPACKEDFOOD_H
#define UNPACKEDFOOD_H

#include "uebung13_Product.h"

class UnpackedFood : public Product {
public:
    // Konstruktor mit Default-Werten
    UnpackedFood(long code = 0, const std::string& name = "", double weight = 0.0, double kiloPrice = 0.0);

    // Zugriffsmethoden
    void setWeight(double weight);
    double getWeight() const;
    void setKiloPrice(double kiloPrice);
    double getKiloPrice() const;

    // Redefinierte Scanner und Printer Methoden
    void scanner() override;
    void printer() const override;

private:
    double weight;
    double kiloPrice;
};

#endif // UNPACKEDFOOD_H
