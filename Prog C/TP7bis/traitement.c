#include <stdio.h>



int SaisirListe(int ListePieces[])
{
	int Nbre_Elts = 0;
	int Num_Id;
	printf("Nous allons Saisir la liste de piece à l'aide de leur numéro d'identification. (Taper 0 pour terminer la Saisie)\n");
	do
	{
		printf("Entrer l'element n°%d de la liste\n",Nbre_Elts+1);
		scanf("%d",&Num_Id);

		if(Num_Id != 0)		
		{
			ListePieces[Nbre_Elts] = Num_Id;
			Nbre_Elts++;
		}
	}
	while(Num_Id != 0);

	return Nbre_Elts;
}

void RechercherCompterPieces(int ListePieces[],int Nbre_Elts,int Num_Place,int *Num_Ident, int *Nombre)
{
	
	int i;							// Compteur boucle
	*Nombre = 0;
	if (Num_Place <= Nbre_Elts)
	{
		*Num_Ident = ListePieces[Num_Place-1];

		for(i = 0; i < Nbre_Elts; i++)
		{
			if (*Num_Ident == ListePieces[i])
			{
				(*Nombre)++;
			}
		}
	}
	else
		*Num_Ident = 0;

}

int InsererPiece(int Num_Place,int Num_Ident,int ListePieces[],int* Nbre_Elts)
{
	int insertionOk = 0;
	int buffer,i;
	(*Nbre_Elts)++;
	
	if(*Nbre_Elts < 150)
	{
		for(i = Num_Place-1; i < *Nbre_Elts; i++)
		{
			buffer = ListePieces[i];
			ListePieces[i] = Num_Ident;
			Num_Ident = buffer;
		}
	}
	else 
		insertionOk = 1;

return insertionOk;
	
}

void AfficherListe (int ListePieces[], int Nbre_Elts)
{
	int i;
	for(i = 0; i < Nbre_Elts; i++)
		printf("%d\t%d\n",i+1,ListePieces[i]);
}
				


















