#include "Def.h"
#include <stdio.h>
#include <stdlib.h>

rdv Saisie()
{
	rdv personne;
	system("clear");
	printf("Premierement entrer le nom de la personne avec qui vous voulez prendre rendez-vous :\n");
	scanf("%s",personne.nom);

	printf("Entrer ensuite la date (jour mois année) :\n");
	scanf("%hd %s %hd",&personne.queljour.jour, personne.queljour.mois,&personne.queljour.annee);

	printf("Et pour finir l'heure (heure:minutes) :\n"); 
	scanf("%hd:%hd",&personne.quelleur.heure, &personne.quelleur.minute);


	return personne;

}

void Affichage (rdv personne)
{
	printf("%s\n",personne.nom);
	printf("%hd %s %hd\n",personne.queljour.jour, personne.queljour.mois,personne.queljour.annee);
	printf("%hd:%hd\n",personne.quelleur.heure, personne.quelleur.minute);
}
