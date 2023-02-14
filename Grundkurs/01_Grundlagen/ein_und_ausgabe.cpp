#include "ein_und_ausgabe.h"
#include <iostream>
#include <string>
using namespace std;

// setprecision ist hier enthalten
#include <iomanip> // Manipulatoren mit Wert

void ausgabe_und_formatierung() {
	cout.setf(ios::showpos);

	// Zeigt das + Zeichen zusätzlich an, wenn es eine positive Zahl ist
	cout << showpos << -30 << endl;
	cout << showpos << 30 << endl;

	// noshowpos deaktiviert die Funktion des Ausgabekanals das
	// + Zeichen anzuzeigen
	cout << noshowpos << endl;

	// Formatiert die Zahl als Hexadezimalzahl aus (oct, hex etc. auch möglich)
	cout << hex << 30 << endl;
	cout << dec << 30 << endl;
	cout << oct << 30 << endl;

	// ACHTUNG: Es kann zwischen den Typen wechseln, jedoch muss auch hier anschließend
	// immer nohex, nodec etc. angewandt werden um zur Standardausgabe zu gelangen

	// Setzt die Buchstaben von Zahlensystemen (z.B. Hexadezimal) auf Großbuchstaben
	cout << uppercase << endl;
	cout << hex << 30 << endl;

	// wieder ändern zu Dezimalzahlen
	cout << dec << endl;
	cout << nouppercase << endl;

	// Sorgt für die Anzeige von 6 Zeichen für Kommazahlen einschließlich
	// der vorhandenen Nachkommastellen
	cout << showpoint << 123.123456789 << endl;

	// Zeigt die angezeigte Anzahl an Ziffern anhand der Präzision
	// um hier alle anzeigen zu lassen wäre bei 123.123456 also 9
	// Stellen notwendig. 
	// Bei einer höheren Präzision wird mit 0 aufgefüllt.
	cout << setprecision(15) << 123.123456 << endl;

	// Ändert setprecision() zur Anzahl Nachkommastellen. Hier sind
	// also für die volle Anzeige nur noch 6 notwendig.
	cout << setprecision(7) << fixed << 123.123456 << endl;

	// Ändert die Schreibweise zur wissenschaftlichen Schreibweise
	//cout << scientific << 10000000000000000000.012456 << endl;

	// Deaktiviert die wissenschaftliche Schreibweise und
	// nutzt die zuvor festgelegte Präzision (Hier 7 Nachkommastellen)
	cout << fixed << endl;
	cout << 10000000000000000000.012456 << endl; // Zahl zu groß als das die Nachkommastellen berücksichtigt werden
	cout << 100.123456789 << endl;

	// Wird mit einer "Breite" von 50 Zeichen rechtsbündig 
	// ausgeben. Nicht vorhandene Zeichen werden mit 
	// Leerzeichen befüllt.
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl;

	// Hier sieht man, dass standardmäßig right angenommen wird z.B. für " Text nach Zahl"
	cout << left << setw(50) << 1234567890 << " Text nach Zahl" << endl;
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl;

	// Ebenfalls ist es möglich die Whitespaces zu ersetzten
	// BEACHTE: Die Reihenfolge wird eingehalten. Erst nach dem ersten Mal
	// " Text nach Zahl" wird setfill ausgelöst und auch beibehalten. 
	// Dies ist mit setfill(' ') wieder zurücksetzbar, da wieder Whitespaces
	// genutzt werden.
	cout << right << setw(50) << 1234567890 << " Text nach Zahl"  << endl << setfill('.');
	cout << left << setw(50) << 1234567890 << " Text nach Zahl" << endl << setfill(' ');
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl;

}
