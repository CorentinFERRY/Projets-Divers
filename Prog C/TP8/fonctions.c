#include <stdlib.h>
#include <stdio.h>
#include "fonctions.h"

eleve* Saisie (int *Nb_eleves)
{
	eleve *classe = NULL;
	int i;

	printf("Entrer le nombre d'élèves\n");
	scanf("%d",Nb_eleves);

	if (*Nb_eleves > 0)
	{
		classe = realloc(classe, *Nb_eleves * sizeof(eleve));

		for (i = 0 ; i < *Nb_eleves ; i++)
		{
			printf("Nom de l'élève n°%d ? ", i+1);
			scanf("%s", classe[i].nom);
			printf("Note de l'élève n°%d ? ", i+1);
			scanf("%f", &classe[i].note);
		}
	}

	return classe;
}

float Traitement (eleve *classe,int Nb_eleves)
{
	int i;
	float somme = 0, moyenne;

	for(i = 0; i < Nb_eleves; i++)
	{
		somme += classe[i].note;
	}

	moyenne = somme/Nb_eleves;

	return moyenne;
}

void Affichage (eleve *classe,float moyenne,int Nb_eleves)
{
	system("clear");
	int i;
	for (i = 0; i < Nb_eleves; i++)
	{
		printf("Nom de l'élève : %s \n", classe[i].nom);
		printf("Note de l'élève : %g \n\n" , classe[i].note);
	}

	printf("Moyenne de la classe : %g \n", moyenne);

}











