/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "Mitglied.h"
#include <iostream>
using namespace std;

Mitglied* Mitglied::ptrVorstand = NULL;
void Mitglied::print() const
{
	cout << "-----------------------------" << endl;
	cout << "Nr          :" << this->nr << endl;
	cout << "Name        :" << this->name << endl;
	cout << "Geburtstag  :" << getDatum().asString() << endl;
}
