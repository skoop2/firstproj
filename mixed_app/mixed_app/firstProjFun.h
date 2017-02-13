#pragma once


int fScan() {

	int dpi = 0, farbtiefe=0; 
	float breite = 0, hoehe = 0;
	double groesse = 0;

	printf("Bitte geben Sie die DPI ein: ");
	scanf("%i", &dpi);

	printf("Bitte geben Sie die Farbtiefe ein: ");
	scanf("%i", &farbtiefe);

	printf("Bitte geben Sie die Breite ein: ");
	scanf("%i", &breite);

	printf("Bitte geben Sie die Hoehe ein: ");
	scanf("%i", &hoehe);

	printf("++++++++++++++Ausgabe+++++++++++\n");

	groesse = ((((breite*72) / 2.54) * (hoehe * 72) / 2.54) * farbtiefe) / 8 / 1024 / 1024;  

	printf("Die zu erwartende Dateigr\x94\xE1\e entspricht %.4lf MiB\n", groesse);

	return 0;
}

int fKinder(void) {


	int kinder = 0, eier = 0, rest = 0, erhalten = 0;

	printf("Willkommen zu Kindergeburtstag\n");
	printf("Bitte geben sie die Anzahl der Kinder ein: ");
	scanf("%i", &kinder);

	printf("Wie viele \x9a\x62\erraschungseier hast du, ich hoffe mehr als Kinder \nsonst gibt es Streit: ");
	scanf("%i", &eier);

	erhalten = eier / kinder;
	rest = eier%kinder;

	printf("Es wurden %i kinder eingeladen und jedes hat %i \x9a\x62\erraschungseier erhalten\n"
		"Es blieben noch %i \x81\x62rig\n", kinder, erhalten, rest);


	return 0;
}