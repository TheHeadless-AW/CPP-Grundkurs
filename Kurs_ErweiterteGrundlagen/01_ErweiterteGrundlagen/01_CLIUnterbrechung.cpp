/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <iostream>
#include <limits>
#include "01_CLIUnterbrechung.h"

using namespace std;

void unterbrecheCLI() {
	cout << "Pause CLI - Verschiedene Moeglichkeiten\n";

	// Moeglichkeit 1: Verwendung von cin.ignore()
	cout << "\nMoeglichkeit 1: cin.ignore()\n";
	cout << "Druecken Sie Enter, um fortzufahren...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Moeglichkeit 2: Verwendung von getchar()
	cout << "\nMoeglichkeit 2: getchar()\n";
	cout << "Druecken Sie Enter, um fortzufahren...";
	getchar();

	// Moeglichkeit 3: Verwendung von system("pause") (Windows-spezifisch)
	cout << "\nMoeglichkeit 3: system(\"pause\")\n";
	cout << "Druecken Sie Enter, um fortzufahren...";
	system("pause");

	// Moeglichkeit 4: Verwendung von cin.get()
	cout << "\nMoeglichkeit 4: cin.get()\n";
	cout << "Druecken Sie Enter, um fortzufahren...";
	cin.get();

	// Moeglichkeit 5: Verwendung von getchar() (C++11 und hoeher)
	cout << "\nMoeglichkeit 5: getchar()\n";
	cout << "Druecken Sie Enter, um fortzufahren...";
	getchar();
}
