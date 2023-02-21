/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include <string>
#include <iostream>
using namespace std;

void Swap(int* zahl1, int* zahl2) {
	cout << "Zahl 1:" << zahl1 << " | Zahl 2: " << zahl2 << endl;
	int* temp = zahl1;
	zahl1 = zahl2;
	zahl2 = temp;
	cout << "Zahl 1:" << zahl1 << " | Zahl 2: " << zahl2 << endl;
}

int main() {
	// ************************************ //
	// ********** Überschrift ************* //
	// ************************************ //
	int zahl1 = 5;
	int zahl2 = 2;

	int* ptr_zahl1 = &zahl1;
	int* ptr_zahl2 = &zahl2;

	Swap(ptr_zahl1, ptr_zahl2);
	return 0;
}

