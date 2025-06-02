#include <stdio.h>
#include <time.h>

int main(void)
{
	int gagne; 	/* Nombre entier binaire binaire généré aléatoirement */
	int montant;	/* Représente le montant gagné (inférieur à 500) */

	srand(time(0));	/* initialisation du générateur de nombre aléatoire */

	printf("Jouer aux cartes\n");
	gagne = rand()%2;

	if (gagne == 0) 
	{
		printf("Vous avez perdu\n");
		printf("Ne dites rien à votre femme\n");
	}
	else 
	{
		printf("Vous avez gagné\n");
		printf("Vous devez faire un cadeau à votre femme\n");
		
		montant = rand()%500;
		printf("Le montant gagné est : %d€\n",montant);
		if (montant > 100)
		{
			printf("Ce sera un collier\n");
		}
		else
		{
			printf("Ce sera un bouquet de fleurs\n");
		}
	}
}
