#include <stdio.h>
#include "application.h"
	
void voyelle(int Voyelle[])
{
	char c;
	int i;						// compteur de boucle

	for (i = 0; i < VOYELLES; i++)
	{
		Voyelle[i] = 0;
	}	

	printf("Le programme compte les voyelles dabs ce que vous avez saisi.\n");
	printf("Entrer un texte. Finir par la touche* puis Entrée:\n");

	do
	{

		c = getchar();				// Saisie du caractère en tête de la file après l'appui sur Entrée

		switch(c)
		{
			case 'a':
			case 'A':
				Voyelle[0]++;
			break;
			
			case 'e':
			case 'E':
				Voyelle[1]++;
			break;

			case 'i':
			case 'I':
				Voyelle[2]++;
			break;

			case 'o':
			case 'O':
				Voyelle[3]++;
			break;

			case 'u':
			case 'U':
				Voyelle[4]++;
			break;

			case 'y':
			case 'Y':
				Voyelle[5]++;
			break;
			
		}

	}
	while(c != '*');
}

void lettres(int Lettres[])
{

	char c;
	int i;						// compteur de boucle

	for (i = 0; i < LETTRES; i++)
	{
		Lettres[i] = 0;
	}	

	printf("Le programme compte les voyelles dabs ce que vous avez saisi.\n");
	printf("Entrer un texte. Finir par la touche* puis Entrée:\n");

	do
	{

		c = getchar();				// Saisie du caractère en tête de la file après l'appui sur Entrée
		if (Plettre <= c && c <= Dlettre)
			Lettres[c-Plettre]++;
		else if (Plettre + DiffMajMin <= c && c <= Dlettre + DiffMajMin)
			Lettres[c-(Plettre+DiffMajMin)]++;
	}
	while(c != '*');

}
