#include <stdio.h>

int main()
{
	int const LETTRES = 26;
	int v[LETTRES];					// Tableau de 6 entiers destiné à contenir les fréquences de 6 voyelles
	char c;
	int i;						// compteur de boucle
	int const Plettre = 65;				// premiere lettre ASCII ('A' = 65)
	int const Dlettre = 90;				// derniere lettre ASCII ('Z' = 90)
	int const DiffMajMin = 32;
	char lettre[LETTRES];	
	
	for (i = 0; i < LETTRES; i++)
	{
		lettre[i] = Plettre + i;
	}

	for (i = 0; i < LETTRES; i++)
	{
		v[i] = 0;
	}	

	printf("Le programme compte les voyelles dabs ce que vous avez saisi.\n");
	printf("Entrer un texte. Finir par la touche* puis Entrée:\n");

	do
	{

		c = getchar();				// Saisie du caractère en tête de la file après l'appui sur Entrée
		if (Plettre <= c && c <= Dlettre)
			v[c-Plettre]++;
		else if (Plettre + DiffMajMin <= c && c <= Dlettre + DiffMajMin)
			v[c-(Plettre+DiffMajMin)]++;
	}
	while(c != '*');

	printf("\n");
	for (i = 0; i < LETTRES; i++)
	{
		printf("%c/%c  ",lettre[i],lettre[i]+DiffMajMin);
	}	
	printf("\n");
	for (i = 0; i < LETTRES; i++)
	{
		printf("%d    ",v[i]);
	}

	printf("\n");

	return 0;
}














 
		
