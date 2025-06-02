#include <stdio.h>
#include <math.h>

int main(void)
{	
	// Déclaration des variables 
	
	int Nbnotes; 
	int somme = 0;
	int note;
	int i;
	char Continuer;
	
	

	do
	{
		printf("Entrer une note\n");
		scanf("%d",&note);
		while (note < 0 || note > 20)
		{	
			printf("Erreur la note doit etre comprise entre O et 20\n");
			printf("Entrer une nouvelle note\n");
			scanf("%d",&note);
		}
		somme += note;	
		Nbnotes++;
		printf("Poursuivre ? (o/n)\n");	
		scanf("%c",&Continuer);
	}
	while 	(Continuer != 'n');
		
	printf("La moyenne est : %d\n",somme/Nbnotes);
}

