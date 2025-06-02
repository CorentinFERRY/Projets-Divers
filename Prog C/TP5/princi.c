#include <stdio.h>
#include "traitement.h"

int main()
{
	float note[NB_NOTES];
	float notemoyenne;
	int compteur;
	
	for (compteur = 0; compteur<NB_NOTES ; compteur++)
	{
		printf("Entrer la notes n°%d\n",compteur+1);
		scanf("%f",&note[compteur]);
	}

	notemoyenne = Moyenne(note);
	
	printf("La moyenne de l'élève est %g.\n", notemoyenne);

	return  0;
}
