#include "def.h"
#include <stdio.h>

void Saisie (eltpers Tab[])
{
	int i;

	for(i = 0; i < MAXPERS; i++)
	{
		printf("Entrer le Nom de l'employé :\n");
		scanf("%s", Tab[i].nom);
		printf("Entrer son numéro de téléphone :\n");
		scanf("%s", Tab[i].tel);
		printf("Entrer son salaire brut :\n");
		scanf("%f", &Tab[i].sal.brut);
		printf("Entrer son salaire net :\n");
		scanf("%f", &Tab[i].sal.net);
	}
}

float SommeNets (eltpers Tab[])
{
	int i;
	float somme = 0;

	for(i = 0; i < MAXPERS; i++)
	{
		
		somme += Tab[i].sal.net;
	}

	
	return somme;
}
		
