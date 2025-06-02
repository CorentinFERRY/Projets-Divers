#include <stdio.h>
#include "OpeBase.h"

int main() 
{
	float x,y,resultat;
	printf("Entrer 2 nombres réel\n");
	scanf("%f %f",&x,&y);

	resultat = addition(x,y);
	printf("Le resultat de l'addition de %.2f et %.2f est %g\n\n",x,y,resultat);

	resultat = soustraction(x,y);
	printf("Le resultat de la soustraction de %.2f et %.2f est %g\n\n",x,y,resultat);

	resultat = multiplication(x,y);
	printf("Le resultat de la multiplication de %.2f et %.2f est %g\n\n",x,y,resultat);

	resultat = division(x,y);
	printf("Le resultat de la division de %.2f et %.2f est %g\n\n",x,y,resultat);

	return 0;
}
