// mixed_app.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <stdlib.h>
#include "firstProjFun.h"




int main()
{

	int a = 0;
	system("COLOR");

	printf("\033[46m++++++++++++Auswahl++++++++++++\033[m\n");
	printf("Bitte Auswahl treffen\n");
	printf("K = Kindergeburtstag\n");
	printf("S = Scan berechnen\n\n");
	scanf("%c", &a);
	system("CLS");

	a == 115 || a == 83 ? fScan() : fKinder();


    return 0;
}

