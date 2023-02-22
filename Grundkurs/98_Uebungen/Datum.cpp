#include "Datum.h"
#include <string>
#include <ctime>
#include <iostream>
using namespace std;

void Datum::init(int tag, int monat, int jahr){
	this->tag = tag;
	this->monat = monat;
	this->jahr = jahr;
}

void Datum::init(){
	time_t t = time(NULL);
	tm zeit;

	localtime_s(&zeit, &t);

	this->tag = zeit.tm_mday;
	this->monat = zeit.tm_mon+1;
	this->jahr = zeit.tm_year;
}

void Datum::print(){
	string str_monat, ausgabe;

	switch (this->monat) {
	case 1: str_monat = "Januar"; break;
	case 2: str_monat = "Februar"; break;
	case 3: str_monat = "M\x84rz"; break;
	case 4: str_monat = "April"; break;
	case 5: str_monat = "Mai"; break;
	case 6: str_monat = "Juni"; break;
	case 7: str_monat = "Juli"; break;
	case 8: str_monat = "August"; break;
	case 9: str_monat = "September"; break;
	case 10: str_monat = "Oktober"; break;
	case 11: str_monat = "November"; break;
	case 12: str_monat = "Dezember"; break;
	}

	ausgabe = (jahr >= 0 && jahr <= 50) ? jahr += 2000 : jahr += 1900;
	ausgabe = "Datum " + to_string(tag) + '.' + str_monat + " " + to_string(jahr);

	cout << ausgabe << endl;
}
