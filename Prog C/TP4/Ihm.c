#include <stdio.h>
#include "OpeBase.h"
#include <stdlib.h>

float saisieReel (char);

char menu ()
{
	char choix;	
	
	system("clear");
	printf("Pour continuer entrer soit :\n");
	printf("- 'a' pour effectuer une addition\n");
	printf("- 's' pour effectuer une soustraction\n");
	printf("- 'm' pour effectuer une multiplication\n");
	printf("- 'd' pour effectuer une division\n");
	printf("- 'f' pour terminer le programme.\n");

	scanf(" %c", &choix);
	return choix;	
}

void traitechoix (char choix)
{
	float x,y,resultat;
	if (choix == 'a' || choix == 's' || choix == 'm' || choix == 'd') 
	{
		printf("Vous allez saisir x et y pour faire votre opération\n");
		x = saisieReel('x');
		y = saisieReel('y');
	}
	switch(choix)
	{
		case 'a' :
			system("clear");
			printf("L'addition de x et y est:\n");
			resultat = addition(x,y);
			printf("%g + %g = %g\n",x,y,resultat); 
			printf("Appuyez sur Entrée pour continuer\n");		
			system("read a");
			break;
		 	
		case 's' :
			system("clear");
			printf("La soustraction de x et y est:\n");
			resultat = soustraction(x,y);
			printf("%g - %g = %g\n",x,y,resultat);
			printf("Appuyez sur Entrée pour continuer\n");		
			system("read a"); 
			break;
		case 'm' :
			system("clear");
			printf("La multiplication de x par y est:\n");
			resultat = multiplication(x,y);
			printf("%g * %g = %g\n",x,y,resultat);
			printf("Appuyez sur Entrée pour continuer\n");		
			system("read a"); 
			break;	
		case 'd' :
			system("clear");
			printf("La division de x par y est:\n");

			if(y != 0)
			{
				resultat = division(x,y);
				printf("%g/%g = %g\n",x,y,resultat);
			} 
			else printf("Division par 0 impossible\n");
			printf("Appuyez sur Entrée pour continuer\n");		
			system("read a");
			break;
		case 'f' :
			system("clear");
			printf("Arret du programme\n");
			break;
		default : 
			system("clear");
			printf("Touche incorrecte\n");
			printf("Appuyez sur Entrée pour continuer\n");		
			system("read a");
	}
}

float saisieReel (char val)
{
	float res;
	printf("Entrer le réel %c\t",val);
	scanf("%f", &res);
	getchar();
	return res;
}












