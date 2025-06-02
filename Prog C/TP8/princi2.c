#include <stdio.h>
#include <stdlib.h>

#include "fonctions.h"

int main()
{
	int Nb_eleves,i;
	float moyenne;
	eleve *classe;
	
	classe = Saisie(&Nb_eleves);
	
	moyenne = Traitement(classe,Nb_eleves);
	
	Affichage(classe,moyenne,Nb_eleves);


	free(classe);
	
	return 0;
}

