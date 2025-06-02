#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	int reste, quotient,diviseur,dividende;
	float nombre, inverse,a , b, c, d, max, min;
	char X;
	do
	{
	system("clear");
	printf("\nEntrer i pour faire l'inverse d'un nombre\n");
	printf("Entrer d pour calculer le quotient et le reste de 2 entiers\n");
	printf("Entrer m pour connaitre le maximum et le minimum entre 2 nombres entiers\n");
	printf("Entrer f pour terminer le programme\n");
	scanf(" %c", &X);
	
		switch (X)
		{
			case 'i' : 

				system("clear");
				printf("Entrer un nombre réel\n");
				scanf("%f",&nombre);
				if (nombre < 0) printf("Erreur saisie\n");
				else 
				{
					inverse = 1/nombre;
					printf("L'inverse de %g est %.3f\n", nombre, inverse);
				}
				printf("Appuyez sur Entrée pour continuer\n");		
				system("read a");
			break;	
	
			case 'd' : 
				
				system("clear");

				// Saisie du dividende et du diviseur 
	
				printf("Saisir le dividende puis le diviseur\n");  
				scanf("%d %d", &dividende,&diviseur);
	
				// Calcul du quotient et du reste 
	
				quotient = dividende/diviseur;
				reste = dividende%diviseur;
		
				// Affichage des résultats 
	
				printf("le quotient est : %d et le reste est : %d\n", quotient, reste);
				printf("Appuyez sur Entrée pour continuer\n");		
				system("read a");
			break;
	
			case 'm':
	
				system("clear");
				printf("Saisir les 4 nombres\n");
				scanf("%f %f %f %f" , &a, &b, &c, &d); 	
				max = (a > b) ? a:b;
				max = (max > c) ? max:c;
				max = (max > d) ? max:d;
		
				min = (a < b) ? a:b;
				min = (min < c) ? min:c;
				min = (min < d) ? min:d;
		
				printf ("Le maximum est %g et le minimum est %g\n", max ,min);
				printf("Appuyez sur Entrée pour continuer\n");		
				system("read a");
			break;
			
			case 'f' :
				system("clear");
				printf("Au revoir et bonne journée\n");
				printf("Appuyez sur Entrée pour continuer\n");		
				system("read a");
				system("clear");
			break;

			default :
				system("clear");
				printf("Erreur saisie\n");
				printf("Appuyez sur Entrée pour continuer");		
				system("read a");
		}
	}
	while (X != 'f');
	return 0;
}
