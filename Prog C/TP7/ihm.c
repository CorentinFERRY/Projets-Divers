#include <stdio.h>
#include "application.h"
#include <stdlib.h>

char menu ()
{
	char choix;
	
	system("clear");
	printf("Pour continuer entrer soit :\n");
	printf("- 'i' pour calculer l'inverse d'un nombre\n");
	printf("- 'd' pour calculer le quotient et le reste de deux entiers\n");
	printf("- 'm' pour obtenir le maximum et le minimum de 4 nombres\n");
	printf("- 'f' pour terminer le programme.\n");

	scanf(" %c", &choix);
	return choix;
}

void traitechoix(choix)
{
	int i,limite;							
	int x,y;
	int division,modulo;
	float a;
	float minimum,maximum;
	float resultat;
	float Tab[NB_VAL];
	
	switch (choix)
	{
		case 'i' : 

			system("clear");
			printf("Entrer le nombre dont vous voulez calculez l'inverse\n");					
			scanf("%f",&a);
			if (a< 0) printf("Erreur saisie\n");
			else 
			{
				resultat = inverse(a);
				printf("L'inverse de %g est %.3f\n", a, resultat);
			}
			printf("Appuyez sur Entrée pour continuer\n");		
			system("read a");
		break;	

		case 'd' :

			system("clear");
			printf("Saisir le dividende et le diviseur\n");
			scanf("%d %d", &x,&y);
			Quotreste(x,y,&division,&modulo);
			printf("le quotient est : %d et le reste est : %d\n", division, modulo);
			printf("Appuyez sur Entrée pour continuer\n");	
			system("read a");
		break;

		case 'm' :

			system("clear");
			printf("Combien de réels voulez-vous comparer ? ( < %d)\n",NB_VAL);
			scanf("%d",&limite);
			if (limite <= 0 || limite > NB_VAL)
			{
				printf("Erreur saisie\n");
				printf("Entrer un autre nombre\n");
				scanf("%d",&limite);
			}

			printf("Nous allons saisir le tableau:\n");
			for(i = 0; i < limite; i++)
			{
				printf("Entrer la valeur n°%d du tableau\n",i+1);
				scanf("%f",&Tab[i]);	
			}
			MinMax(Tab,&minimum,&maximum,limite);

			printf("Le maximum est %g et le minimum est %g\n", maximum ,minimum);
			printf("Appuyez sur Entrée pour continuer\n");		
			system("read a");
		break;

		case 'f' :

			system("clear");
			printf("Au revoir et bonne journée\n");
			
		break;

		default :

			system("clear");
			printf("Erreur saisie\n");
			printf("Appuyez sur Entrée pour continuer");		
			system("read a");
		
	}
}













