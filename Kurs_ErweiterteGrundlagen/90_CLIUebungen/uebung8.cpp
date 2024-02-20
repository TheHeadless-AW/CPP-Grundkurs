#include <iostream>
#include <cstdarg>
#include "uebung8.h"

using namespace std;

double durchschnitt(int note, ...) {
    va_list notenUndHaeufigkeiten;
    va_start(notenUndHaeufigkeiten, note);

    int summe = 0;
    int anzahlNoten = 0;

    while (note != 0) {
        int haeufigkeit = va_arg(notenUndHaeufigkeiten, int);
        summe += note * haeufigkeit;
        anzahlNoten += haeufigkeit;

        note = va_arg(notenUndHaeufigkeiten, int);
    }

    va_end(notenUndHaeufigkeiten);

    return static_cast<double>(summe) / anzahlNoten;
}