typedef struct
{
	char nom[30];
	float note;
}eleve;

eleve* Saisie (int *);
float Traitement (eleve*,int);
void Affichage (eleve*,float,int);
