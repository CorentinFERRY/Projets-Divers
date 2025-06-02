#include <stdio.h>
#include "def.h"

int main()
{
	eltpers Tab[MAXPERS];
	float somme;

	Saisie(Tab);

	somme = SommeNets(Tab);
	
	printf(" somme des salaires net = %.2f\n",somme);

	return 0;
}
