#ifndef D8E5564E_A998_46E6_9A70_0B73488F1AF3
#define D8E5564E_A998_46E6_9A70_0B73488F1AF3
//incloure les llibreries que es necessiten
#include <stdbool.h>

#define MAXCADENA 100
#define rutafitxer1 "./fitxers/lorem1.txt"
#define rutafitxer2 "./fitxers/lorem2.txt"
#define rutafitxer3 "./fitxers/lorem3.txt"
#define SALTLINIA '\n'

enum OPCIOMENU
{
    COMPTARLLETRES = 1,
    COMPTARPARAULES,
    SORTIR,
};

void pintarMenu();
void comptaLletres();
bool esLletra(char );
void comptarParaules();

#endif /* D8E5564E_A998_46E6_9A70_0B73488F1AF3 */
