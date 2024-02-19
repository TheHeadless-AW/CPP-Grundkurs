/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Artikel {
    string artikelnummer;
    string artikelname;
    double einkaufspreis;
    double verkaufspreis;
};

void artikelformatierung() {
    int anzahlArtikel;

    // Eingabe der Anzahl der Artikel
    cout << "Geben Sie die Anzahl der Artikel ein: ";
    cin >> anzahlArtikel;

    // * bedeutet, dass Artikel* ein Pointer vom Typ Artikel ist
    // dies ist deswegen notwendig, da nur so das Array dynamisch
    // allokiert werden kann.
    Artikel* artikelListe = new Artikel[anzahlArtikel];

    // Eingabe der Artikelinformationen
    for (int i = 0; i < anzahlArtikel; ++i) {
        cout << "\nArtikel " << i + 1 << ":\n";

        cout << "Artikelnummer (6-stellig): ";
        cin >> artikelListe[i].artikelnummer;

        cout << "Artikelname: ";
        cin.ignore(); // Um das newline-Zeichen nach der vorherigen Eingabe zu ignorieren
        getline(cin, artikelListe[i].artikelname);

        cout << "Einkaufspreis: ";
        cin >> artikelListe[i].einkaufspreis;

        cout << "Verkaufspreis: ";
        cin >> artikelListe[i].verkaufspreis;
    }

    // Ausgabe der formatierten Informationen
    cout << "\nArtikelliste\n";
    cout << "===========================================\n";

    for (int i = 0; i < anzahlArtikel; ++i) {
        cout << left << setw(6) << artikelListe[i].artikelnummer << "\t"
            << left << setw(20) << artikelListe[i].artikelname << "\t"
            << "EUR " << right << setw(6) << fixed << setprecision(2) << artikelListe[i].einkaufspreis << "\t"
            << "EUR " << right << setw(6) << fixed << setprecision(2) << artikelListe[i].verkaufspreis << "\n";
    }

    // Freigabe des dynamischen Arrays
    delete[] artikelListe;
}
