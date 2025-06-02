#include <stdio.h>

int main()
{
	char Nom[12][21];
	int compteur;										 //compteur de boucle

	for (compteur = 0; compteur<12; compteur++)
	{
		printf("Entrer le nom n°%d (Maximum 20 caractères)\n", compteur+1);
		scanf("%s",&Nom[compteur][0]);
	}
	printf("\n\n");
	for (compteur = 0; compteur<12; compteur++)
	{
		printf("%s\n",Nom[compteur]);
	}
	
	return 0;
}

