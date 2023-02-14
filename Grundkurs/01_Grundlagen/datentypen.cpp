#include "datentypen.h"
#include <iostream>
using namespace std;

void datentypen() {
	// **********************************************  //
	// ***********  Primitive Datentypen: ***********  //
	// **********************************************  //

	// Boolean 	
	bool wahrheitswert;

	// Character 	
	char zeichen;

	// Character mit mehr Möglichkeiten
	wchar_t	groesseres_zeichen;

	// Integer 	
	int ganzzahl;

	// Floating point 	
	float fließkommazahl;

	// Double floating point 	
	double gleitkommazahl;




	// *****************   Beispiele: ***************  //
	wahrheitswert = true;

	// Man sieht, dass hinter B der ASCII Wert 66 steht. Achtung: (kleines b hat einen anderen Wert)
	zeichen = 'B';
	cout << "Zeichen als Zahl: " << (int)zeichen << endl;

	// Man sieht, dass hinter der 65 als ASCII Wert (Hier Typkonvertierung zu einem Zeichen durch (char) ) 
	// der Buchstabe bzw. das Zeichen A (groß A) steht.
	ganzzahl = 65;
	cout << "Zahl als Zeichen: " << (char)ganzzahl << endl;

	// Kommazahl
	fließkommazahl = 4.4;
	cout << "Kommazahl: " << fließkommazahl << endl;
	// Achtung: Bei Konvertierung zu int mittel (int) wird die Kommazahl einfach abgeschnitten
	cout << "Kommazahl als Ganzzahl: " << (int)fließkommazahl << endl;

	// Auch eine Kommazahl (Quasi das gleiche wie "typ bezeichner = wert"
	double auch_eine_kommazahl(10);
	cout << "Auch eine Kommazahl: " << auch_eine_kommazahl << endl;

	// Eine Konstante, welche im Nachhinein nicht mehr geändert werden kann
	const double PI = 3.141;
	cout << "Konstante PI: " << PI << endl;

	// Zeigt direkt Fehler an
	// PI++;

	// Hört bei 5 Nachkommastellen auf und rundet
	fließkommazahl = 4.123454789;
	cout << "Kommazahl: " << fließkommazahl << endl;

	float andere_kommazahl = 4.123456789;

	// **********************************************  //
	// ***********  Datentypmodifizierer: ***********  //
	// **********************************************  //
	char						ein_zeichen;													// 1byte	//- 127 to 127 or 0 to 255
	unsigned char				nicht_vorzeichenbehaftetes_zeichen;								// 1byte 	//0 to 255
	signed char 				vorzeichenbehaftetes_zeichen;									// 1byte	//- 127 to 127
	int 						eine_ganzzahl;													// 4bytes	//- 2147483648 to 2147483647
	unsigned int 				nicht_vorzeichenbehaftete_ganzzahl;								// 4bytes 	//0 to 4294967295
	signed int					vorzeichenbehaftete_ganzzahl;									// 4bytes	//- 2147483648 to 2147483647
	short int 					ganzzahl_mit_weniger_speicherbedarf;							// 2bytes	//- 32768 to 32767
	unsigned short int			nicht_vorzeichenbehaftete_ganzzahl_mit_weniger_speicherbedarf;	// 2bytes 	//0 to 65, 535
	signed short int			vorzeichenbehaftete_ganzzahl_mit_weniger_speicherbedarf;		// 2bytes	//- 32768 to 32767
	long int 					ganzzahl_mit_viel_speicher;										// 8bytes	//- 9223372036854775808 to 9223372036854775807
	long                        auch_ganzzahl_mit_viel_speicher;								// Äquivalent zu long int
	signed long int				nicht_vorzeichenbehaftete_ganzzahl_mit_viel_speicher;			// 8bytes 	//same as long int
	unsigned long int			vorzeichenbehaftete_ganzzahl_mit_viel_speicher;					// 8bytes 	//0 to 18446744073709551615
	long long int 				vorzeichenbehaftete_ganzzahl_mit_enorm_viel_speicher;			// 8bytes	//- (2 ^ 63) to(2 ^ 63) - 1
	unsigned long long int 		nicht_vorzeichenbehaftete_ganzzahl_mit_enorm_viel_speicher;		// 8bytes 	//0 to 18, 446, 744, 073, 709, 551, 615
	float						kommazahl_mit_weniger_speicher;									// 4bytes
	double						kommazahl_mit_viel_speicher;									// 8bytes
	long double 				kommazahl_mit_sehr_sehr_viel_speicher;							// 12bytes
	wchar_t						zeichen_mit_viel_speicherauswahl;								// 2 or 4 bytes //	1 wide character

	// Zusatztypen wie short int können auch ohne int geschrieben werden (siehe long int und long)

	// *****************   Beispiele: ***************  //

	// Grenze des normalen int Datentyps. Setzt man hier einen Wert höher (+1)
	// geht er auf der anderen Seite der Grenze weiter also bei - 2147483648.
	eine_ganzzahl = 2147483647;
	cout << "Ganzzahl-Grenze: " << eine_ganzzahl << endl;

	// Inkrementiert eine Zahl und weisst ihr den neuen Wert 1 höher zu
	eine_ganzzahl++;

	cout << "Ganzzahl-Grenze+1: " << eine_ganzzahl << endl;

	// Achtung hier wird für long der normale Integerbereich genutzt
	long int zahl_groesser_int = 3333333333;
	cout << zahl_groesser_int << endl;

	// Erst long long nutzt mehr Speicher
	long long int auch_zahl_groesser_int = 3333333333;
	cout << auch_zahl_groesser_int << endl;

	// Hier Variable auswählen um Beispiel anzeigen zu lassen

	// Zeigt den Byte Bedarf des Datentyps an
	// Man sieht hier, dass auch bei "größeren" Datentypen
	// lediglich der vorerst benötigte Speicher ausgewählt wird.

	// ACHTUNG ACHTUNG: Je nach Rechnerarchitektur variiert das Ergebnis
	// Sizeof kann auch für Arrays genutzt werden
	// Chars
	cout << "Bytes von char : " << sizeof(char) << endl;
	cout << "Bytes von unsigned char : " << sizeof(unsigned char) << endl;
	cout << "Bytes von signed char : " << sizeof(signed char) << endl;

	cout << "Bytes von wchar_t : " << sizeof(wchar_t) << endl;

	// Ints
	cout << "Bytes von int : " << sizeof(int) << endl;
	cout << "Bytes von unsigned int : " << sizeof(unsigned int) << endl;
	cout << "Bytes von signed int : " << sizeof(signed int) << endl;

	cout << "Bytes von short int : " << sizeof(short int) << endl;
	cout << "Bytes von unsigned short int : " << sizeof(unsigned short int) << endl;
	cout << "Bytes von signed short int : " << sizeof(signed short int) << endl;

	cout << "Bytes von long int : " << sizeof(long int) << endl;
	cout << "Bytes von unsigned long int : " << sizeof(unsigned long int) << endl;
	cout << "Bytes von signed long int : " << sizeof(signed long int) << endl;

	cout << "Bytes von long int : " << sizeof(long int) << endl;
	cout << "Bytes von unsigned long long int : " << sizeof(unsigned long long int) << endl;
	cout << "Bytes von signed long long int : " << sizeof(signed long long int) << endl;

	// Kommazahlen (Float und Double)
	cout << "Bytes von float : " << sizeof(float) << endl;
	cout << "Bytes von double : " << sizeof(double) << endl;
	cout << "Bytes von long double : " << sizeof(long double) << endl;

	// Boolean
	cout << "Bytes von Boolean : " << sizeof(bool) << endl;

	// String
	cout << "Bytes von String : " << sizeof(string) << endl;

	// Die Nutzung anderer Zahlensysteme gem. Programmiernorm mittels 0x etc.
	// ist selbstverständlich auch in C++ möglich.

}
