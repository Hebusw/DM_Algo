/*Labyrinthe.c*/

#include "labyrinthe.h"


/*Premiere partie*/

labyrinthe creerMatrice (unsigned int lignes, unsigned int colonnes, char* A, char* IA, char* JA){
	/*A faire*/
	labyrinthe m = malloc(lignes * sizeof(int));
	for (int i = 0; i < lignes; i++){
		m[i] = malloc(colonnes * sizeof(int));
	}
	int pos = 0;
	for (int i = 0; i < lignes; i++){
		for(int j = 0; j < colonnes; j++){
			m[i][j] = 0;
		}
		if (IA[i + 1] != 0){
			m[i][JA[i]] = A[pos];
			pos++;
		}
	}
	return m;
}

void afficherMatrice( labyrinthe lab, unsigned int lignes, unsigned int colonnes ){
	/*A faire*/
	for(int i = 0; i < lignes; i++){
		for(int j = 0; j < colonnes; j++){
			printf("%d ", lab[i][j]);
		}
		printf("\n");
	}
}

int deplacementsPossibles( labyrinthe lab, unsigned int largeur, unsigned int longueur, coordonnee_t posCourante, coordonnee_t* coordPossibles){
	/*A faire*/
}

char verifierChemin( chemin_t ch, labyrinthe lab, unsigned int largeur, unsigned int longueur, coordonnee_t depart ){
  	/*A faire*/
}

void afficherChemin( chemin_t ch ){
  	/*A faire*/ 
}


/*Seconde partie*/

chemin_t plusCourtCheminDynamique ( labyrinthe lab, labyrinthe M2, unsigned int largeur, unsigned int longueur, coordonnee_t depart){
  	/*A faire*/
}

chemin_t* tousPlusCourtsChemins(labyrinthe lab, labyrinthe M2, unsigned int largeur, unsigned int longueur, coordonnee_t depart){
  	/*A faire*/
}
