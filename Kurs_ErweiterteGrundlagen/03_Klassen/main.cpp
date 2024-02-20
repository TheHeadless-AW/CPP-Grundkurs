#include "00_BeispielCKFZ.h"

using namespace std;


void ckfzbeispiel() {
    CKfz auto1("Volkswagen", "Blau", 150);
    auto1.setVMax(200);
    auto1.setGeschwindigkeit(80);
    auto1.print();
     
    // Versuche, die Marke zu ändern (sollte nicht möglich sein)
    // auto1.setMarke("BMW");  // Diese Zeile sollte zu einem Kompilierungsfehler führen
}

int main() {

	// CKFZ Beispiel
	ckfzbeispiel();

}