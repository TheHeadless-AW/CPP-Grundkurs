/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "Hund.h"
using namespace std;


string Hund::get_rasse() {
	return Hund::rasse;
}

int Hund::get_alter() {
	return Hund::alter;
}

void Hund::set_alter(int alter) {
	Hund::alter = alter;
}

bool Hund::operator==(Hund vergleichshund){
	return this->rasse==vergleichshund.rasse;
}
