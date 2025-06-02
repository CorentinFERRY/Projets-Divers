#include <stdio.h>
#include <stdlib.h>
#include "ihm.h"
#include "traitement.h"

void SaisieNom(char Nom[NB_ELEVES][LETTRES])
{
	int compteur;
	
	for (compteur = 0; compteur<NB_ELEVES; compteur++)
	{
		system("clear");
		printf("Entrer le nom de l'élève n°%d\n",compteur+1);
		scanf("%s",Nom[compteur]);

	}
}


// --------------------------------------------------------------------------------------------------------------------------------- //


void SaisieNote(char Nom[NB_ELEVES][LETTRES], float Notes[NB_ELEVES][NB_NOTES])
{
	int i,j; 								// compteurs de boucle
	
	for(i = 0; i<NB_ELEVES; i++)
	{
		system("clear");
		for(j = 0; j<NB_NOTES; j++)
		{
			
			printf("Entrer la note n°%d que %s a obtenu\n",j+1,Nom[i]);
			scanf("%f",&Notes[i][j]);
			while(Notes[i][j] < 0 || Notes[i][j] > 20) 
			{ 	
				printf("Erreur la note doit être comprise en 0 et 20\nEntrer une nouvelle note\n");
				scanf("%f",&Notes[i][j]);
			}
			
		}
	}
	 
}


// --------------------------------------------------------------------------------------------------------------------------------- //


void Afficher(char Nom[NB_ELEVES][LETTRES],float Notes[NB_ELEVES][NB_NOTES],float Moy[NB_ELEVES], float moyenne)
{
	int i,j;

	system("clear");
	for(i = 0; i <NB_ELEVES; i++)
	{
		printf("L'élève %s à obtenu les notes :", Nom[i]);
		for(j = 0; j<NB_NOTES; j++)
		{
			printf(" %g",Notes[i][j]);
		}
		printf(" et la moyenne: %g\n",Moy[i]);
	}

	printf("La moyenne de la classe est de %g\n",moyenne);
	printf("\nAppuyer sur Entrer pour continuer\n");	
	system("read a");

}

/*
void SaisieNote(float Notes[], char Nom[][LETTRES])
{
	int compteur;
	
	for (compteur = 0; compteur<NB_ELEVES; compteur++)
	{	
		system("clear");
		printf("Entrer la note de %s\n",Nom[compteur]);
		scanf("%f",&Notes[compteur]);
		
		while(Notes[compteur] > 20 || Notes[compteur] < 0)
		{ 	
			printf("Erreur la note doit être comprise en 0 et 20\nEntrer une nouvelle note\n");
			scanf("%f",&Notes[compteur]);
		}

	}
}
*/


/*
void Afficher(char Nom[NB_ELEVES][LETTRES],float Notes[NB_NOTES], float moyenne)
{
	int compteur,compteur2;
	system("clear");
	for(compteur = 0; compteur<NB_ELEVES; compteur++)
	{
		printf("L'élève %s à obtenu la note :", Nom[compteur]); 
		for(compteur2 = 0; compteur2<NB_NOTES; compteur2++)
		{
			printf("\t%g",Notes[compteur]);
		}
		printf("\n\n");
	}
	printf("La moyenne de la classe est de %g\n",moyenne);
	printf("\nAppuyer sur Entrer pour continuer\n");	
	system("read a");
	
}
*/



			
