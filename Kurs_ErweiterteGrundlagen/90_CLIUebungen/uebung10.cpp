/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <iostream>

using namespace std;

// Funktion, die eine Referenz auf die erste durch 7 teilbare Zahl im Array zurückgibt
int& findeDurch7TeilbareZahl(int array[], int groesse) {
	int returnzahl = 0;
	int index = 0;

	while (index < groesse) {
		if (array[index] % 7 == 0 && array[index] != 0) {
			returnzahl = array[index];

			// Unnötige Schleifendurchläufe vermeiden wenn Zahl gefunden wurde
			break;
		}
		index++;
	}
	return returnzahl;
}

void aufgabe10() {
	int zahlen[100];

	// Schritt 1: Array mit Zahlen von 1 bis 100 füllen
	for (int i = 0; i < 100; i++) {
		zahlen[i] = i + 1;
	}

	// Schritt 2 bis 5: Durch 7 teilbare Zahlen suchen, ausgeben und auf null setzen
	int durch7TeilbareZahl = 1;
	while (durch7TeilbareZahl != 0) {
		durch7TeilbareZahl = findeDurch7TeilbareZahl(zahlen, 100);
		if (durch7TeilbareZahl != 0) {
			cout << "Durch 7 teilbare Zahl gefunden: " << durch7TeilbareZahl << endl;
		}
		// Auf null setzen
		for (int i = 0; i < 100; ++i) {
			if (zahlen[i] == durch7TeilbareZahl) {
				zahlen[i] = 0;
			}
		}

	}

	for (int i = 0; i < 100; i++) {
		cout << zahlen[i] << ",";
		if (zahlen[i] == 0) {
			cout << endl;
		}
	}
}
