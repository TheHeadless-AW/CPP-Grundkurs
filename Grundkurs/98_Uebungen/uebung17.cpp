/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung17.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <sstream>
#include "tools.h"
using namespace std;

void lauf()
{
	const char laufschrift[] = "* * * P A U S E * * *                                                                                                 ";

	int count = 0;
	while (true) {
		for (int i = count; i < 119; i++) {
			std::cout << laufschrift[i];
		}

		for (int i = 0; i < count; i++) {
			std::cout << laufschrift[i];
		}
		Sleep(40);
		std::cout << "\r";
		count++;
		if (count == 119)
			count = 0;
	}

}
void lauf2()
{
	char str[] = "* * * * * * * PAUSE * * * * * * * * ";
	char mem;

	while (true)
	{
		LOCATE(0, 0);
		cout << str;
		mem = str[0];
		for (int i = 0; i < sizeof(str) - 2; i++)
			str[i] = str[i + 1];
		str[sizeof(str) - 2] = mem;
		for (int wait = 0; wait < 100000000; wait++);
	}
}

void uebung_17_aufgabe_1(){
	long feld[100];
	long wert;
	int l;

	lauf2();
	for (l = 0; l < 100; l++)
	{
		wert = 0;
		cout << "Bitte Zahl eingeben: ";
		cin >> wert;
		if (wert != 0)
			feld[l] = wert;
		else
			break;
	}
	for (int i = 0; i < l - 1; i++)
	{
		for (int j = 0; j < l - i - 1; j++)
			if (feld[j] > feld[j + 1])
			{
				long mem;
				mem = feld[j];
				feld[j] = feld[j + 1];
				feld[j + 1] = mem;
			}
	}
	for (int n = 0; n < l; n++)
		cout << feld[n] << endl;
}