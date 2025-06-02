#include "application.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int Tab[CONST1][CONST2];
	int somme,produit;
	float moyenne;
	SaisieTab(Tab);
	char choix;
	
	do
	{
		system("clear");
		printf("Pour continuer entrer soit :\n");
		printf("- 'a' pour afficher le tableau\n");
		printf("- 's' pour calculer la somme des éléments du tableau\n");
		printf("- 'M' pour calculer la moyenne des éléments du tableau\n");
		printf("- 'm' pour obtenir le maximum et le minimum du tableau\n");
		printf("- 'p' pour calculer le produit de la somme de chaque ligne du tableau\n");
		printf("- 'n' pour saisir un nouveau tableau\n");
		printf("- 'f' pour terminer le programme.\n");

		scanf(" %c", &choix);

		switch (choix)
		{
			case 'a' :

				system("clear");
				AffichageTab(Tab);						
				printf("Appuyez sur Entrée pour continuer\n");
				system("read a");
			break;

			case 's':
			
				system("clear");
				AffichageTab(Tab);			
				somme = SommeTab(Tab);
				printf("La somme des éléments du tableau est %d\n",somme);
				printf("Appuyez sur Entrée pour continuer\n");
				system("read a");

			break;

			case 'M' :
			
				system("clear");
				AffichageTab(Tab);
				moyenne = MoyenneTab(Tab);
				printf("La moyenne des éléments du tableau est %g\n",moyenne);
				printf("Appuyez sur Entrée pour continuer\n");
				system("read a");

			break;	

			case 'm' :

				system("clear");
				AffichageTab(Tab);
				MinMaxTab(Tab);						
				printf("Appuyez sur Entrée pour continuer\n");
				system("read a");
			break;

			case 'p' :
			
				system("clear");
				AffichageTab(Tab);
				produit = ProdSommeTab(Tab);
				printf("Le produit de la somme de chaque ligne est %d\n",produit);
				printf("Appuyez sur Entrée pour continuer\n");
				system("read a");
			break;

			case 'f' :

				system("clear");
				printf("Au revoir et bonne journée\n");
			
			break;
			
			case 'n' :

				SaisieTab(Tab);
							
			break;
		
			default : 

				system("clear");
				printf("Erreur saisie\n");
				printf("Appuyez sur Entrée pour continuer");		
				system("read a");
		
		}
	}
	while(choix != 'f');

	return 0;
}




















	
