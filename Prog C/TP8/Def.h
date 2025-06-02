typedef struct
{
	short heure;
	short minute;
}temps;

typedef struct
{
	short jour;
	char mois[10];
	short annee;
}date;

typedef struct
{
	char nom[20];
	date queljour;
	temps quelleur;
}rdv;

rdv Saisie();
void Affichage(rdv);

#define NB_PERS 3
