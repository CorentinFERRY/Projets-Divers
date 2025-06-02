#include <stdio.h>
#include <stdlib.h>

#include "fonctions.h"

int main()
{
	int Nb_eleves,i;
	eleve *classe;
	
	classe = Saisie(&Nb_eleves);

	for (i = 0; i < Nb_eleves; i++)
	{
		printf("%s : ", classe[i].nom);
		printf("%f\n", classe[i].note);
		printf("%d\n", Nb_eleves);
	}

	free(classe);
	
	return 0;
}

