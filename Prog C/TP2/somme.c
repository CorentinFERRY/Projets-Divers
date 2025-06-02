#include <stdio.h>
#include <math.h>

int main(void)
{	
	// Déclaration des variables 
	
	int Somme;
	int I; 
	
	do 						// Faire 
	{
		Somme += I;
		I += 1;
	}
	while (I<= 100);				//  Tantque
	
	printf("La somme des 100 premiers entiers est : %d\n", Somme);
}
