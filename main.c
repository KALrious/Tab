#include <stdio.h>
#include <stdlib.h>
#include "listeTableau.h"

#define TAILLEMAX 1000

int main(int argc, char *argv[])
{
    /* déclaration du tableau contenant la liste */
    element maListe[TAILLEMAX];
    initListe(&maListe, 6);
    
	insererElement(1, &maListe);
	insererElement(2, &maListe);
	insererElement(4, &maListe);
	insererElement(3, &maListe);
	printf("Fin de la création de la liste\n");
	afficherListe(&maListe);
	getchar();
	supprimerElement(3, &maListe);
	afficherListe(&maListe);
    /* ... */

    /*afficherListe(maListe);*/

    return EXIT_SUCCESS;
}
