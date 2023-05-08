#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"


int main(){
	SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
	srand(time(NULL));
	
	enum OPCIOMENU opcio;


	do
	{
	pintarMenu();
	printf("Introdueix l'opció que vulguis: [1-%d]: ", SORTIR);
	opcio=demanarNumeroEntreDosValors(1,SORTIR);

	printf("\nL'opció inserida és [%d]\n", opcio);

	switch (opcio)
	{
		case COMPTARLLETRES: comptaLletres(); break;
		case COMPTARPARAULES: comptarParaules(); break;
    	case SORTIR: printf("[SORTIR]\n\nGràcies per usar el nostre servei, fins una altre!"); break;
	}
	} while (opcio != SORTIR);

	acabament();
	return 0;
}
