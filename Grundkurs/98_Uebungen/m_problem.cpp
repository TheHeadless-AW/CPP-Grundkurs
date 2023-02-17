#include "m_problem.h"

#ifndef _IOSTREAM_
#include <iostream>
#endif 

#ifndef _STRING_
#include <string>
#endif 

#ifndef _STD_
using namespace std;
#endif

void m_problem() {
	int i, e, z, seed;
	i = 0;

	cout << "Zahl eingeben: ";
	// Achtung wird hier ein Buchstabe eingegeben
	// ist e = 0 
	cin >> e;

	// Hier sieht man, dass bei großen Werten das Problem auftaucht, dass
	// e != char(e) ist, da irgendwann die größe eines normalen chars überschritten
	// ist und dann aufgrund von signed/unsigned quasi wieder von vorne begonnen
	// wird zu zählen (statt eines Fehlers zu werfen) somit kann dann der numerische
	// Wert von e nicht mehr dem numerischen Wert von char(e) entsprechen.

	//Ergänzung: Prüfung der e Werte
	cout << boolalpha << "e = " << e << " | char(e) = " << char(e) << " | Numerischer Wert von char(e) = " << int(char(e)) << " | (e == char(e)) = " << (e == char(e)) << endl;

	// Die gesuchte Funktion ob e ein Buchstabe ist wäre ist
	// schlichtweg cin selbst, da cin ein Error-Flag erhält sollte
	// nicht der Datentyp übereinstimmen. Somit wird bei A der 
	// Errorflag gesetzt und bei 45 z.B. nicht. Bei Kommazahlen
	// wird gehandhabt als hätte man int a = 3534.0322 eingegeben
	// also die Nachkommastellen werden abgeschnitten.
	if (cin)
		// vorher: if( e == char(e) )
	{
		seed = time(NULL);
		srand(seed);
		while (i < 20)
		{
			i++;
			z = (rand() % 100 + 1);
			cout << "Zufallszahl= " << z << endl;
		}
	}
	else
		cout << "Eine Zahl!!!" << endl;
	cout << "-----------------" << endl;
}
