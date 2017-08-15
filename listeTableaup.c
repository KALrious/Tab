#include "listeTableau.h"
#include <stdio.h>
#include <stdlib.h>

void afficherListe(liste *l){
	int end = elementLibre(l);
	int indice=l[0] -> suivant;
	int i=1;
	int stop=0;
	showTab(l, 5);
	while (stop==0){
		if (l[indice]->suivant == 0) // Si on est sur la dernière valeur de la liste, on quite la boucle après
			stop = 1;
		
		printf("Valeur %d : %d     indice: %d\n", i, l[indice]->valeur, indice);
		
		indice = l[indice]->suivant;
		i++;
	}
}

void showTab(liste *l, int n){
	int i=0;
	printf("----------\n");
	for(i=0; i<n; i++){
		printf("l[%d] -> valeur = %d\n", i, l[i] -> valeur);
		printf("l[%d] -> suivant = %d\n\n", i, l[i] -> suivant);
	}
	printf("----------\n");
}

void supprimerElement(int x, liste *l){
	int i=0; // indice courant de l'array
	int last=0; // indice de l'array précedent
	int pasTrouvee = 1;
	int next;
	
	while (l[i]->suivant != 0 && pasTrouvee == 1){
		if (l[i]->valeur == x){
			pasTrouvee = 0;
		}
		else{
			last = i;
			i = l[i]->suivant;
		}
	}
	
	next = l[i]->suivant;
	
	l[last]->suivant = next;
	l[i]->suivant = -1;
	
}

void insererElement(int x, liste *l){
	int empty; // indice de l'array qui est vide, permetant de stocker notre nouvelle valeur
	int i=0; // indice de l'array
	int tmp;
	int last=0; // indice de l'array dans lequel on va devoir modifier le "suivant" pour qu'il pointe vers notre nouvelle valeur
	int finRecherche=0;
	empty = elementLibre(*l);
	
	while (finRecherche == 0 && l[i]->valeur < x ){ // Cherche ou insérer la nouvelle valeur
		if (l[i]->suivant == 0) // Si on est a la fin de la liste
			finRecherche = 1;
		last = i;
		i = l[i]->suivant;
	}
	
	/*printf("last: %d\n", last);*/
	// On enchange les indices pour que la liste soient ordonnée
	tmp = l[last]->suivant;
	l[last]->suivant = empty;
	l[empty]->suivant = tmp;
	l[empty]->valeur = x;
		
	printf("Fonction insert OK\n");
}

void initListe(liste *l, int n){
	int i;
	l[0]->suivant=0;
	for (i=1; i<n; i++){
		l[i]->suivant=-1;
	}
}

int elementLibre(liste *l){
	int i=0;
	int result=-1;
	while (l[i]->suivant != -1){
		i++;
	}
	return i;
}

