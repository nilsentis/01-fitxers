#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <stdbool.h> 
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

void pintarMenu()
{
    printf("\n\n");
    char opcions[SORTIR][MAXCADENA] = {"Comptar lletres","Comptar paraules","Sortir"};
    for (int i = 0; i < SORTIR; i++)
    {
        printf("\n[%d] => %s", i + 1, opcions[i]);
    }
}

// 1
void comptaLletres()
{
    FILE *f;
    char c;
    int cont = 0;
    // f=fopen(rutafitxer1,"rt");
    // f=fopen(rutafitxer2,"rt");
    f=fopen(rutafitxer3,"rt");
    if (f==NULL)
    {
        printf("\nNo s'ha pogut obrir el fitxer");
    }
    else
    {
        c=fgetc(f);
        while (feof(f)==0)
        {
            if (c!=SALTLINIA && esLletra(c))
            {
                cont++;
            }
            c=fgetc(f);
        }
        fclose(f); 
    }
    printf("El fitxer %s té [%d] lletres.", rutafitxer1, cont);
}

bool esLletra(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}


// 2
void comptarParaules()
{
    FILE *f;
    char c;
    int cont = 0;
    // f=fopen(rutafitxer1,"rt");
    // f=fopen(rutafitxer2,"rt");
    f=fopen(rutafitxer3,"rt");
    if (f==NULL)
    {
        printf("\nNo s'ha pogut obrir el fitxer");
    }
    else
    {
        c=fgetc(f);
        while (feof(f)==0)
        {
            while (feof(f)==0 && c != SALTLINIA && c != ' ')
            {
                c=fgetc(f);
            }
            cont++;
            c=fgetc(f);
        }
        fclose(f);
    }
    printf("El fitxer %s té [%d] paraules.", rutafitxer1, cont);
}
