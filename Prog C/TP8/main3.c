#include "Def.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char choix;
	rdv *Personne = NULL;				
	
	int i = 0,j;
	
	do
	{
		Personne = realloc(Personne,(i+1) * sizeof(rdv));
		Personne[i] = Saisie();
		i++;

		printf("Voulez vous entrer une autre personne ?(o/n) : ");
		scanf(" %c",&choix);
		
				
	}
	while (choix !='n');

	system("clear");
	for (j = 0; j < i  ; j++)
		Affichage(Personne[j]);

	free(Personne);
	return 0;
}
