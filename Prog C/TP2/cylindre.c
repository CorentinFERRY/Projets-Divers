#include <stdio.h>

int main(void)
{
	float Rayon;	/* Variable du rayon en nombre réel. */
	float Circonf;  /* Variable de la circonférence du cercle en nombre réel. */
	float Aire;	/* Variable de l'aire du cercle en nombre réel. */
	float Hauteur;	/* Variable de la hauteur du cylindre en nombre réel. */
	float Volume;	/* Volume du cylindre */
	const float Pi = 3.14159;

	/* Saisie du rayon et de la hauteur */

	printf("Entrer la valeur du rayon\n");
	scanf("%f", &Rayon);
	printf("Entrer la hauteur du cylindre\n");	
	scanf("%f", &Hauteur);

	/* Calculs */
	
	Aire = Pi*(Rayon*Rayon);
	Volume = Aire*Hauteur;		
	Circonf = 2*Pi*Rayon;

	/* Affichage des résultats */

	printf("Surface : %.2f\n", Aire);
	printf("Volume : %.2f\n", Volume);
	printf("Périmetre : %.2f\n", Circonf);

	return 0;
}
