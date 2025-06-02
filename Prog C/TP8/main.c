#include "Def.h"


int main()
{
	rdv Personne[NB_PERS];
	int i;
	char choix;
	
	for(i = 0;i < NB_PERS; i++)
		Personne[i] = Saisie();


	for(i = 0;i < NB_PERS; i++)
		Affichage(Personne[i]);
	
	return 0;
}
