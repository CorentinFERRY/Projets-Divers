#include <stdio.h>
#include "traitement.h"
#include <stdlib.h>

int main ()
{
	int choix,insertion;
	int Nbre_Elts,i,Num_Place,Num_Ident,Nombre;
	int ListePieces[NBR_MAX_PIECES];
	system("clear");
	
	Nbre_Elts = SaisirListe(ListePieces);
	do
	{
		system("clear");
	
		printf("Pour continuer entrer soit :\n");
		printf("- 1 Pour rechercher une pièce à partir de sa place dans la liste & comptage du nombre de pièces identiques.\n");
		printf("- 2 Inserer une nouvelle pièce dans la liste à une place choisie.\n");
		printf("- 3 Afficher la liste des pièces\n");
		printf("- 4 Pour entrer une nouvelle liste\n");
		printf("- 5 Pour terminer le programme.\n");

		scanf("%d", &choix);

	
		switch (choix)
		{
	
			case 1:

				system("clear");
				AfficherListe(ListePieces,Nbre_Elts);
				printf("Saisir un numero de place dans la liste\n");
				scanf("%d",&Num_Place);	
				RechercherCompterPieces(ListePieces,Nbre_Elts,Num_Place,&Num_Ident,&Nombre);	
				printf("Le Numero d'identification de la pièce est : %d\nIl y en a %d dans la liste\n",Num_Ident,Nombre);
				
				printf("Appuyez sur Entrée pour continuer\n");		
				system("read a");

			break;
		
			case 2:
				system("clear");
				AfficherListe(ListePieces,Nbre_Elts);
				printf("Saisir un numero de place dans la liste où inserer la pièce\n");
				scanf("%d",&Num_Place);
				printf("Saisir un numero d'identification de la pièce\n");
				scanf("%d",&Num_Ident);
				insertion = InsererPiece(Num_Place,Num_Ident,ListePieces,&Nbre_Elts);
				
				if (insertion == 1)
					printf("Le Tableau est plein nous n'avons pas pu inserer une nouvelle valeur\n");
				
				AfficherListe(ListePieces,Nbre_Elts);
				printf("Appuyez sur Entrée pour continuer\n");		
				system("read a");
			break;

			case 3:
				system("clear");
				AfficherListe(ListePieces,Nbre_Elts);
				printf("Appuyez sur Entrée pour continuer\n");		
				system("read a");
			break;

			case 4:

				system("clear");
				Nbre_Elts = SaisirListe(ListePieces);
				printf("Appuyez sur Entrée pour continuer\n");		
				system("read a");
			
			break;

			case 5:

				system("clear");
				printf("Au revoir et bonne journée\n");
			
			break;

			default:

				system("clear");
				printf("Erreur saisie\n");
				printf("Appuyez sur Entrée pour continuer");		
				system("read a");
		}
	}
	while(choix != 5);
	return 0;
}

