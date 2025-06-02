#include <stdio.h>
#include <time.h>

int main(void)
{
	int gagne; 	/* Nombre entier binaire binaire généré aléatoirement */
	int montant;	/* Représente le montant gagné (inférieur à 500) */

	srand(time(0));	/* initialisation du générateur de nombre aléatoire */

	printf("Jouer aux cartes");
	gagne = rand()%2;

	if (gagne == 0) 
	{
		printf("Vous avez perdu");
		printf("Ne dites rien à votre femme");
	}
	else 
	{
		printf("Vous avez gagné");
		printf("Vous devez faire un cadeau à votre femme");
		
		montant = rand()%500;
		if (montant > 100)
		{
			printf("Ce sera un collier");
		}
		else
		{
			printf("Ce sera un bouquet de fleurs");
		}
	}
}
