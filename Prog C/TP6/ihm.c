#include <stdlib.h>
#include <stdio.h>
#include "application.h"

char Menu()
{
	char choix;

	system("clear");
	printf("Pour continuer entrer soit :\n");
	printf("-v pour connaitre la fréquence des voyelles dans votre texte.\n");
	printf("-l pour connaitre la fréquence des lettres dans votre texte.\n");
	printf("-f pour quitter le programme.\n");
	
	scanf(" %c", &choix);
	return choix;
}

void traitechoix(char choix)
{
	int i;
	int Voyelles[VOYELLES];
	int Lettres[LETTRES];
	char Affichage[LETTRES];

	for (i = 0; i < LETTRES; i++)
	{
		Affichage[i] = Plettre + i;
	}

	switch (choix)
	{
		case 'v' :
			system("clear");
			voyelle(Voyelles);
			printf("\nFréquence des voyelles:\n\n");
			printf("a/A\te/E\ti/I\to/O\tu/U\ty/Y\n");
			printf(" %d \t %d \t %d \t %d \t %d \t %d \t\n",Voyelles[0],Voyelles[1],Voyelles[2],Voyelles[3],Voyelles[4],Voyelles[5]);

			printf("Appuyez sur Entrée pour continuer\n");		
			system("read a");
		break;
	
		case 'l' :

			system("clear");
			lettres(Lettres);
		
			for(i = 0; i < LETTRES; i++)
			{
				printf("\n%c/%c\t",Affichage[i],Affichage[i]+DiffMajMin);
				printf("%d",Lettres[i]);
			}

			printf("\nAppuyez sur Entrée pour continuer\n");		
			system("read a");
		
		break;
		
		case 'f' : 
			system("clear");
			printf("Au revoir Bonne Journée\n");
		break;

		default :
		
			printf("Mauvaise touche : Essaye Encore.\n");

	}

}
