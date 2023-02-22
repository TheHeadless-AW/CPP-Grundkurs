/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "uebung_bank.h"
#include "Konto.h"

void uebung_bank(){
	Konto bernds_konto;
	bernds_konto.init(1000, "Bernd", 0);
	bernds_konto.anzeigen();

	bernds_konto.geld_auszahlen(500);
	bernds_konto.anzeigen();

	bernds_konto.geld_einzahlen(15000);
	bernds_konto.anzeigen();

	///

	Konto olafs_konto;
	olafs_konto.init(500, "Olaf", -200);
	olafs_konto.anzeigen();

	olafs_konto.geld_auszahlen(500);
	olafs_konto.anzeigen();

	olafs_konto.geld_einzahlen(500);
	olafs_konto.anzeigen();

	///

	Konto hildegards_konto;
	hildegards_konto.init(200, "Hildegard", -100);
	hildegards_konto.anzeigen();

	hildegards_konto.geld_auszahlen(500);
	hildegards_konto.anzeigen();

	hildegards_konto.geld_einzahlen(800);
	hildegards_konto.anzeigen();
}
