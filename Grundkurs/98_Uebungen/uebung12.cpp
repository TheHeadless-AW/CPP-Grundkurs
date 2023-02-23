/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung12.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Aufgabe 1
void kreis(const double& ref_radius, double& ref_flaeche, double& ref_umfang) {
	ref_flaeche = 3.14 * ref_radius * ref_radius;
	ref_umfang = 2 * 3.14 * ref_radius;
}

void uebung_12_aufgabe_1() {

	cout << setw(8) << "Radius " << "\t| Fl\x84" << "che " << "\t| Umfang " << endl;
	for (double radius = 0; radius <= 10.0; radius = radius + 0.5) {
		double flaeche, umfang;
		double& ref_flaeche = flaeche;
		double& ref_umfang = umfang;
		double& ref_radius = radius;

		kreis(ref_radius, ref_flaeche, ref_umfang);

		cout << setw(8) << radius << setw(8) << "\t| " << flaeche << setw(8) << "\t| " << umfang << endl;
	}
}

// Aufgabe 2
const string& strReverse(const string& text) {
	static string erg = text;
	reverse(erg.begin(), erg.end());

	return erg;
}

void uebung_12_aufgabe_2() {
	cout << strReverse("TEST");
}

// Aufgabe 3
void secToHMS(int& secs, int& hours, int& mins) {
	int gesamtsekunden = secs;

	hours = gesamtsekunden / 3600;
	mins = (gesamtsekunden % 3600) / 60;
	secs = gesamtsekunden % 60;
}

void displayHMS(int* secs, int* hours, int* mins) {
	int gesamtsekunden = ((*hours) * 3600) + ((*mins) * 60) + (*secs);
	cout << gesamtsekunden << " Sekunden entsprechen " << *hours << " Stunden, " << *mins << " Minuten und " << *secs << " Sekunden." << endl;
}
void uebung_12_aufgabe_3() {
	int sekunden, minuten, stunden;
	int& ref_sekunden = sekunden;
	int& ref_minuten = minuten;
	int& ref_stunden = stunden;

	cout << "Geben Sie eine Anzahl an Sekunden (Ganzzahl) ein: ";
	cin >> sekunden;

	//int gesamtsekunden = sekunden;

	secToHMS(ref_sekunden, ref_stunden, ref_minuten);

	//cout << gesamtsekunden << " Sekunden entsprechen " << stunden << " Stunden, " << minuten << " Minuten und " << sekunden << " Sekunden." << endl;

	int* ptr_sekunden = &sekunden;
	int* ptr_minuten = &minuten;
	int* ptr_stunden = &stunden;

	displayHMS(ptr_sekunden, ptr_stunden, ptr_minuten);

}
