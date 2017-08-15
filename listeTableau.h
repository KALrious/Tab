/*********************************************************************/
/* Realisation d'une liste chainee dans un tableau                   */
                                                         
/*********************************************************************/

typedef struct {
	int valeur ;
	int suivant ;
} element ;

/* le type liste permet de ne pas utiliser de pointeurs */
typedef element * liste;

/* Retourne un élément libre du tableau
   (suivant = -1). On suppose qu'il y en a toujours un */
int elementLibre(liste* l);

/* Initialise tous les éléments de la liste
   à vide (suivant = -1) à partir de l'émément d'indice 0 
   jusqu'à l'élément dont l'index est passé en deuxième paramètre *) */
void initListe(liste* l, int n);

/* Ajoute x dans la liste triée l */
void insererElement(int x, liste* l);

/* Supprime la première occurrence de x de l */
void supprimerElement(int x, liste* l);

/* Affiche les éléments de la liste dans l'ordre */
void afficherListe(liste* l);

void showTab(liste *l, int n);

