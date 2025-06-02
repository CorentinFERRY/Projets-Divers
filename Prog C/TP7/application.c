#include "Ihm.h"

float inverse(float x)
{
	float resultat;
	resultat = 1/x;
	return resultat;
}

void Quotreste(int x,int y,int *division, int*reste)
{
	
	*division = x/y;	
	*reste = x%y;
	
}

float MinMax(float Nbr[NB_VAL],float *min,float *max,int limite)
{
	
	// Min
	int i;					// Compteur de boucle

	*min = 1000000;
	for(i = 0; i < limite; i++)
	{
		*min = (*min < Nbr[i]) ? *min:Nbr[i];
	}

	// Max


	*max = -1000000;
	for(i = 0; i < limite; i++)
	{
		*max = (*max > Nbr[i]) ? *max:Nbr[i];
	}
	
}
