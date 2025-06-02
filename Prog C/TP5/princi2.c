#include "traitement.h"
#include "ihm.h"

int main()
{
	float moyenneClasse;
	char Nom[NB_ELEVES][LETTRES];
	float Notes[NB_ELEVES][NB_NOTES];
	float Moy[NB_ELEVES];

	SaisieNom(Nom);
	SaisieNote(Nom,Notes);	
	moyenneClasse = Moyenne(Notes,Moy);
	Afficher(Nom,Notes,Moy,moyenneClasse);

	return 0;
}
