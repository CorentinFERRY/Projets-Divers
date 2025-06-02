#include <stdio.h>
#include <math.h>

int main(void)
{	
	// Déclaration des variables 
	float a;				// premier coéfficient	
	float b; 				// deuxieme coefficient
	float c;				// troisieme coefficient
	float discri;				// discriminant
	float X1;				// premiere racine
	float X2;				// deuxieme racine

	printf("Calcul des racines d'une équation du second degré\n");
	printf("Entrez le coéfficient a : \n");
	scanf("%f",&a);
	printf("Entrez le coéfficient b : \n");
	scanf("%f",&b);
	printf("Entrez le coéfficient c : \n");
	scanf("%f",&c);
	
	discri = pow(b,2) - (4*a*c);
	if (discri >= 0)
	{
		X1 = (-b-sqrt(discri))/(2*a);
		X2 = (-b+sqrt(discri))/(2*a);
		if (X1 == X2) 
		{ 	
			printf("Racine double X = %.2f\n",X1);
		}
		else	printf("X1 = %.2f et X2 = %.2f\n",X1,X2);
	}
	else 	printf("Pas de solution\n");
}

