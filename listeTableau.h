/*********************************************************************/
/* Realisation d'une liste chainee dans un tableau                   */
                                                         
/*********************************************************************/

typedef struct {
	int valeur ;
	int suivant ;
} element ;

/* le type liste permet de ne pas utiliser de pointeurs */
typedef element * liste;

/* Retourne un �l�ment libre du tableau
   (suivant = -1). On suppose qu'il y en a toujours un */
int elementLibre(liste* l);

/* Initialise tous les �l�ments de la liste
   � vide (suivant = -1) � partir de l'�m�ment d'indice 0 
   jusqu'� l'�l�ment dont l'index est pass� en deuxi�me param�tre *) */
void initListe(liste* l, int n);

/* Ajoute x dans la liste tri�e l */
void insererElement(int x, liste* l);

/* Supprime la premi�re occurrence de x de l */
void supprimerElement(int x, liste* l);

/* Affiche les �l�ments de la liste dans l'ordre */
void afficherListe(liste* l);

void showTab(liste *l, int n);

