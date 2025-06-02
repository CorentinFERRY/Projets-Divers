#include <stdio.h>

int main(void)
{
	float base ;			/* Déclaration de la base */
	float hauteur ;			/* Déclaration de la hauteur */
	float aire;			/* Aire du triangle*/
	

	/* Saisie de la base et hauteur */

	printf("Ce programme fait un calcul cool d'un triangle\n" );
	printf("Entrer base\n")	;
	scanf("%f", &base);
	printf("Entrer hauteur\n");
	scanf("%f", &hauteur);

	/* Les calculs */

	aire = (base*hauteur)/2;

	/* Les resultat */

	printf("l'aire du triangle est de:%.3f\n" , aire) ;		/* resultat avec 3 chiffre apres la virgule */
	return 0;
}
	
	
	
