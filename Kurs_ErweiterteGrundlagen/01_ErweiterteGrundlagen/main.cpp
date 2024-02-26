/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <string>
#include <iostream>
#include "01_CLIUnterbrechung.h"
#include "02_EigeneTypen.h"
#include "03_VariableParameterlisten.h"
#include "04_Datum.h"
#include "main.h"
#include "05_Operatorenueberladung.h"
using namespace std;

void operatorenueberladung() {
	ComplexNumber a(2.0, 3.0);
	ComplexNumber b(1.0, 4.0);

	ComplexNumber sum = a + b;
	ComplexNumber difference = a - b;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "Summe: " << sum << endl;
	cout << "Differenz: " << difference << endl;
}

int main() {
	// Aufruf der entsprechenden Uebungsfunktionen. Gewünschte Funktion ausklammern.

	// 01_CLIUnterbrechung
	// unterbrecheCLI();

	// 02_EigeneTypen
	// eigeneTypen();

	// 03_VariableParameterlisten
	// cout << "Durchschnitt 1: " << berechneDurchschnitt(3, 5.0, 8.0, 12.0) << endl;
	// cout << "Durchschnitt 2: " << berechneDurchschnitt(5, 2.0, 4.0, 6.0, 8.0, 10.0) << endl;
	// verschiedeneTypenParameterliste(5, 1, 5.0, 2, 8, 3, "Hallo", 4, new int[5] {1, 2, 3, 4, 5});
	// verschiedeneTypenParameterliste(5, 1, 10.0, 2, 0, 3, "Welt", 4, new int[5] {6, 7, 8, 9, 10});
	// eigenesPrintF("Ganzzahl: %d, Gleitkommazahl: %f, String: %s und ein einzelnes % Zeichen\n", 42, 3.14, "Hello World Test!");

	// 04_Datum
	// datumsAnzeige();

	// 05_Operatorenueberladung
	operatorenueberladung();
}

