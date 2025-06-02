#include <stdio.h>

int main()
{
	int const VOYELLES = 6;
	int v[VOYELLES];				// Tableau de 6 entiers destiné à contenir les fréquences de 6 voyelles
	char c;
	int i;						// compteur de boucle



	for (i = 0; i < VOYELLES; i++)
	{
		v[i] = 0;
	}	

	printf("Le programme compte les voyelles dabs ce que vous avez saisi.\n");
	printf("Entrer un texte. Finir par la touche* puis Entrée:\n");

	do
	{

		c = getchar();				// Saisie du caractère en tête de la file après l'appui sur Entrée

		switch(c)
		{
			case 'a':
				v[0]++;
			break;
			
			case 'e':
				v[1]++;
			break;

			case 'i':
				v[2]++;
			break;

			case 'o':
				v[3]++;
			break;

			case 'u':
				v[4]++;
			break;

			case 'y':
				v[5]++;
			break;

			case 'A':
				v[0]++;
			break;
			
			case 'E':
				v[1]++;
			break;

			case 'I':
				v[2]++;
			break;

			case 'O':
				v[3]++;
			break;

			case 'U':
				v[4]++;
			break;

			case 'Y':
				v[5]++;
			break;
		}

	}
	while(c != '*');

	printf("\nFréquence des voyelles:\n\n");
	printf("a\te\ti\to\tu\ty\n");
	printf(" %d\t%d\t%d\t%d\t%d\t%d\t\n",v[0],v[1],v[2],v[3],v[4],v[5]);
	
	return 0;
}














 
		
