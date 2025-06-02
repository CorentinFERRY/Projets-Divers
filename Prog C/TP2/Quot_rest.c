#include <stdio.h>

int main(void)
{
	// Déclaration des variables 
	
	int diviseur;
	int dividende;
	int quotient;
	int reste;
	
	// Saisie du dividende et du diviseur 

	printf("Saisir le dividende puis le diviseur\n");
	scanf("%d %d", &dividende,&diviseur);

	// Calcul du quotient et du reste 

	quotient = dividende/diviseur;
	reste = dividende%diviseur;
	
	// Affichage des résultats 

	printf("le quotient est : %d et le reste est : %d\n", quotient, reste);
}
