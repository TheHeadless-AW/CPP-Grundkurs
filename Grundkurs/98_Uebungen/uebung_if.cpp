#include "uebung_if.h"
#include <iostream>
using namespace std;

void uebung_if() {
	int umsatz;

	cout << "Wie viel Umsatz wurde generiert?" << endl;
	cin >> umsatz;

	cout << "Der Bonus liegt bei ";
	if (umsatz >= 50000) {
		cout << "10%" << endl;
	}
	else if (umsatz >= 20000) {
		cout << "5%" << endl;
	}
	else if (umsatz >= 10000) {
		cout << "2%" << endl;
	}
	else if (umsatz >= 0) {
		cout << "0%" << endl;
	}
	else {
		// Geht genügend Zeichen in der Zeile zurück und überschreibt
		// "Der Bonus liegt bei \n", weswegen die zusätzlichen Leerzeichen
		// von Nöten sind.
		cout << "\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r";
		cout << "Falsche Eingabe                 " << endl;
	}


}
