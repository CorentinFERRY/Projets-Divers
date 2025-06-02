#include <stdio.h>

int main(void)
{
	float Rayon;		/* Variable du rayon en nombre réel. */
	float Circonf;  	/* Variable de la circonférence du cercle en nombre réel. */
	float Aire;		/* Variable de l'aire du cercle en nombre réel. */
	float Hauteur;		/* Variable de la hauteur du cylindre en nombre réel. */
	float Volume;		/* Volume du cylindre */
	const float Pi = 3.14159;
	int x = 0;		/* Saisie du choix de l'utilisateur */
	

	/* Choix de l'utilisateur */
	
	printf("Calcul du périmetre d'un cercle taper 1\n");
	printf("Calcul de l'aire d'un cercle taper 2\n");
	printf("Calcul du volume d'un cylindre taper 3\n");
	printf("Entrer votre choix\n");
	scanf("%d", &x);

	switch (x)
	{
		case 1:		/* Périmetre d'un cercle */

		printf("Entrer la valeur du rayon\n");
		scanf("%f", &Rayon);
		Circonf = 2*Pi*Rayon;
		printf("Périmetre : %.2f\n", Circonf);

		break;
	
		case 2:		/* Aire d'un cercle */
	
		printf("Entrer la valeur du rayon\n");
		scanf("%f", &Rayon);
		Aire = Pi*(Rayon*Rayon);
		printf("Surface : %.2f\n", Aire);
		
		break;

		case 3:		/* Volume d'un cylindre */
	
		printf("Entrer la valeur du rayon\n");
		scanf("%f", &Rayon);
		printf("Entrer la hauteur du cylindre\n");
		scanf("%f", &Hauteur);
		Aire = Pi*(Rayon*Rayon);
		Volume = Aire*Hauteur;	
		printf("Volume : %.2f\n", Volume);

		break;
	}
	return 0;
}
