#include "uebung13.h"
#include <string>
#include <iostream>
#include <ctime>
#include "Datum.h"
using namespace std;

void uebung_13_aufgabe_1(){
	Datum irgendwann;
	irgendwann.init(15, 3, 50);
	irgendwann.print();

	Datum heute;
	heute.init();
	heute.print();
}
