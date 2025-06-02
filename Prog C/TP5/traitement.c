#include "ihm.h"

float Moyenne(float Notes[NB_ELEVES][NB_NOTES], float Moy[NB_ELEVES])
{
	int i,j;
	float moyenneClasse,moyenneEleve;

	for(i = 0; i < NB_ELEVES; i++)
	{
	moyenneEleve = 0;
		for(j =0; j < NB_NOTES; j++)
		{
			moyenneEleve += Notes[i][j];
		}

	moyenneEleve = moyenneEleve/NB_NOTES;
	Moy[i] = moyenneEleve;
	}
	
	for(i = 0; i < NB_ELEVES; i++)
		moyenneClasse += Moy[i];

	moyenneClasse = moyenneClasse/NB_ELEVES;
	return moyenneClasse;	

}
