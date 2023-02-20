/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/

#include "referenzen.h"
#include <iostream>
#include <string>
using namespace std;

// Styleguide: https://google.github.io/styleguide/cppguide.html

void referenzen_1() {
	// Mit dem & Operator vor dem Bezeichner wird
	// markiert, dass es sich um eine Referenz handelt
	string hugo = "Ich bin Hugo";
	string auch_hugo = hugo;

	// Beides gibt das gleiche aus und man vermutet, dass
	// hugo == auch_hugo
	cout << hugo << endl;
	cout << auch_hugo << endl;

	// Schaut man sich die Speicheradressen jedoch an sieht man,
	// dass es sich hier um zwei unterschiedliche Adressen handelt
	cout << &hugo << endl;
	cout << &auch_hugo << endl;

	// Möchte man, dass man wirklich auf hugo zugreift ist wie folgt
	// vorzugehen:
	string &wirklich_hugo = hugo;

	cout << hugo << endl;
	cout << wirklich_hugo << endl;

	cout << &hugo << endl;
	cout << &wirklich_hugo << endl;

	// Beachte aber:
	hugo = "Ich bin der wahre Hugo";

	cout << hugo << endl;
	cout << wirklich_hugo << endl;

	cout << &hugo << endl;
	cout << &wirklich_hugo << endl;

	// Was sieht man also? 
	// Die Referenz ist wie der Name schon sagt eine eben solche
	// auf das andere "Objekt" hier unser String hugo. Ändern wir
	// diesen wird also automatisch auch der Wert von wirklich_hugo
	// gändert.
}
