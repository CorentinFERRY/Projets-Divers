#include "traitement.h"
#include <stdio.h>

int main()
{
	int Nbre_Elts,i,Num_Place,Num_Ident,Nombre;
	int ListePieces[NBR_MAX_PIECES];
	
//   Saisie du tableau et affichage

	Nbre_Elts = SaisirListe(ListePieces);
	
	for(i = 0; i < Nbre_Elts; i++)
		printf("%d\t",ListePieces[i]);
	
	printf("\n");

//   Rechercher & Compter Pieces

	printf("Saisir un numero de place dans la liste\n");
	scanf("%d",&Num_Place);
	
	RechercherCompterPieces(ListePieces,Nbre_Elts,Num_Place,&Num_Ident,&Nombre);
	
	printf("Le Numero d'identification de la pièce est : %d\nIl y en a %d dans la liste\n",Num_Ident,Nombre);

	return 0;

	
}
