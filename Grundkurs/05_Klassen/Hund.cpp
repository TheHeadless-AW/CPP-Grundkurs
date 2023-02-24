/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "Hund.h"
using namespace std;

// Gibt ein neues Objekt zurück, statt nur einen
// Zeiger, welcher auf das gleiche Objekt zeigt
// (Standardverhalten)
/// The Rule of Five:
/// Whenever you are writing either one of Destructor, 
/// Copy Constructor, Copy Assignment Operator, 
/// Move Constructor or Move Assignment Operator you 
/// probably need to write the other four.
Hund::Hund(const Hund& hundobjekt) {
	this->alter = hundobjekt.alter;
	this->rasse = hundobjekt.rasse;
}

string Hund::get_rasse() {
	return Hund::rasse;
}

int Hund::get_alter() {
	return Hund::alter;
}

void Hund::set_alter(int alter) {
	Hund::alter = alter;
}

bool Hund::operator==(Hund vergleichshund) {
	return this->rasse == vergleichshund.rasse;
}
