/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung_bank.h"
#include "Konto.h"
#include <iostream>
using namespace std;

void uebung_bank(){
	Konto bernds_konto(1000, "Bernd", 0);
	//bernds_konto.init(1000, "Bernd", 0);
	bernds_konto.anzeigen();

	bernds_konto.geld_auszahlen(500);
	bernds_konto.anzeigen();

	bernds_konto.geld_einzahlen(15000);
	bernds_konto.anzeigen();

	///

	Konto olafs_konto(500, "Olaf", -200);
	//olafs_konto.init(500, "Olaf", -200);
	olafs_konto.anzeigen();

	olafs_konto.geld_auszahlen(500);
	olafs_konto.anzeigen();

	olafs_konto.geld_einzahlen(500);
	olafs_konto.anzeigen();

	///

	Konto hildegards_konto(200, "Hildegard", 0);
	//hildegards_konto.init(200, "Hildegard", 0);
	hildegards_konto.anzeigen();

	hildegards_konto.geld_auszahlen(500);
	hildegards_konto.anzeigen();

	hildegards_konto.geld_einzahlen(800);
	hildegards_konto.anzeigen();

	///
	Konto* ptr_olafs_konto = &olafs_konto;

	hildegards_konto.ueberweisung(ptr_olafs_konto, 500);
	hildegards_konto.anzeigen();
	olafs_konto.anzeigen();

	/// Nutzung der getter:
	cout << "Kontostand von Hildegard: " << hildegards_konto.get_kontostand() << endl;
	cout << "Kontostand von Olaf: " << olafs_konto.get_kontostand() << endl;

	/// Nutzung der setter:
	cout << "Inhaber von Konto " << olafs_konto.get_kontonummer() << ": " << olafs_konto.get_kontoinhaber() << endl;
	olafs_konto.set_kontoinhaber("Olaf Holzkopf");
	cout << "Inhaber von Konto " << olafs_konto.get_kontonummer() << ": " << olafs_konto.get_kontoinhaber() << endl;

	/// 

}
