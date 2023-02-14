#include "ein_und_ausgabe.h"
#include <iostream>
#include <string>
using namespace std;

// setprecision ist hier enthalten
#include <iomanip> // Manipulatoren mit Wert

void ausgabe_und_formatierung() {
	cout.setf(ios::showpos);

	// Zeigt das + Zeichen zus�tzlich an, wenn es eine positive Zahl ist
	cout << showpos << -30 << endl;
	cout << showpos << 30 << endl;

	// noshowpos deaktiviert die Funktion des Ausgabekanals das
	// + Zeichen anzuzeigen
	cout << noshowpos << endl;

	// Formatiert die Zahl als Hexadezimalzahl aus (oct, hex etc. auch m�glich)
	cout << hex << 30 << endl;
	cout << dec << 30 << endl;
	cout << oct << 30 << endl;

	// ACHTUNG: Es kann zwischen den Typen wechseln, jedoch muss auch hier anschlie�end
	// immer nohex, nodec etc. angewandt werden um zur Standardausgabe zu gelangen

	// Setzt die Buchstaben von Zahlensystemen (z.B. Hexadezimal) auf Gro�buchstaben
	cout << uppercase << endl;
	cout << hex << 30 << endl;

	// wieder �ndern zu Dezimalzahlen
	cout << dec << endl;
	cout << nouppercase << endl;

	// Sorgt f�r die Anzeige von 6 Zeichen f�r Kommazahlen einschlie�lich
	// der vorhandenen Nachkommastellen
	cout << showpoint << 123.123456789 << endl;

	// Zeigt die angezeigte Anzahl an Ziffern anhand der Pr�zision
	// um hier alle anzeigen zu lassen w�re bei 123.123456 also 9
	// Stellen notwendig. 
	// Bei einer h�heren Pr�zision wird mit 0 aufgef�llt.
	cout << setprecision(15) << 123.123456 << endl;

	// �ndert setprecision() zur Anzahl Nachkommastellen. Hier sind
	// also f�r die volle Anzeige nur noch 6 notwendig.
	cout << setprecision(7) << fixed << 123.123456 << endl;

	// �ndert die Schreibweise zur wissenschaftlichen Schreibweise
	//cout << scientific << 10000000000000000000.012456 << endl;

	// Deaktiviert die wissenschaftliche Schreibweise und
	// nutzt die zuvor festgelegte Pr�zision (Hier 7 Nachkommastellen)
	cout << fixed << endl;
	cout << 10000000000000000000.012456 << endl; // Zahl zu gro� als das die Nachkommastellen ber�cksichtigt werden
	cout << 100.123456789 << endl;

	// Wird mit einer "Breite" von 50 Zeichen rechtsb�ndig 
	// ausgeben. Nicht vorhandene Zeichen werden mit 
	// Leerzeichen bef�llt.
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl;

	// Hier sieht man, dass standardm��ig right angenommen wird z.B. f�r " Text nach Zahl"
	cout << left << setw(50) << 1234567890 << " Text nach Zahl" << endl;
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl;

	// Ebenfalls ist es m�glich die Whitespaces zu ersetzten
	// BEACHTE: Die Reihenfolge wird eingehalten. Erst nach dem ersten Mal
	// " Text nach Zahl" wird setfill ausgel�st und auch beibehalten. 
	// Dies ist mit setfill(' ') wieder zur�cksetzbar, da wieder Whitespaces
	// genutzt werden.
	cout << right << setw(50) << 1234567890 << " Text nach Zahl"  << endl << setfill('.');
	cout << left << setw(50) << 1234567890 << " Text nach Zahl" << endl << setfill(' ');
	cout << right << setw(50) << 1234567890 << " Text nach Zahl" << endl;

}
