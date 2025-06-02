#include <stdio.h>

int main(void)
{	
	// Déclaration des variables 
	
	int poids_0;				// Poids 0 du nombre en base 8
	int poids_1;				// Poids 1 du nombre en base 8
	int poids_2;				// Poids 1 du nombre en base 8
	int nombre; 				// Nombre saisie
	const int BASE = 8;
	const int MAXI = 500;


	// Saisie du nombre à passer en base 8

	printf("Entrer un entier compris entre 0 et 500\n");
	scanf("%d" , &nombre);
	

	if (nombre <= MAXI) 			// Si le nombre est inférieur ou égale à 500
	{
		poids_0 = nombre%BASE;
		nombre = nombre/BASE;		// Passage en base 8
		poids_1 = nombre%BASE;	
		poids_2 = nombre/BASE;
		
		printf("Résultat = %d%d%d\n",poids_0,poids_1,poids_2);
	}
	else	printf("Nombre non valide\n");
	
}
