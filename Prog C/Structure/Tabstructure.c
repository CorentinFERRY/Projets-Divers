#include <stdio.h>
#include "Def.h"

int main()
{

	eleve Tab[NB_ELEVES];
	int i; 						//Compteur de boucle
	
	float moyenne = 0;

	for (i = 0; i < NB_ELEVES; i++)
	{
		printf("Entrer le Nom de l'élève :\n");
		scanf("%s", Tab[i].Nom);
		printf("Entrer la note de l'élève :\n");
		scanf("%f", &Tab[i].Note);
		moyenne += Tab[i].Note;

	}


	moyenne /= NB_ELEVES;

	printf("La moyenne de la classe est de %g\n",moyenne);
	
	return 0;
}
