#include <stdio.h>
#include <math.h>

int main(void)
{
	float prix;
	float somme = 0;
	float montant;
	float monnaie;
	int pEmonnaie;
	int centimes;
	int billets20;
	int billets10;
	int billets5;
	int pieces1;
	char rep;

	// Saisie de la somme des article du clients 	

	do
	{	
		printf("Saisir le prix de l'article\n");
		scanf("%f",&prix);
		somme += prix;
		printf("Avez-vous d'autres article(O/N)\n");
		scanf(" %c",&rep);
	}
	while (rep != 'N');
	
	// Remise de la monnaie 
	
	printf("Vous devez %.2f€\n",somme); 

	printf("Saisir le montant donné par le client\n");
	scanf("%f", &montant);
	monnaie = montant - somme ;
	pEmonnaie = (int)monnaie ; 
	
	// centimes 

	centimes = (monnaie - pEmonnaie)*100;
	
	// billets 

	billets20 = pEmonnaie/20;
	pEmonnaie = pEmonnaie%20;
	billets10 = pEmonnaie/10;
	pEmonnaie = pEmonnaie%10;
	billets5  = pEmonnaie/5;
	pieces1   = pEmonnaie%5;
	
	// Affichage 

	if (billets20 != 0)
		printf("Rendre %d billet(s) de 20€\n", billets20);
	if (billets10 != 0)
	printf("Rendre %d billet(s) de 10€\n", billets10);
	if (billets5 != 0)
	printf("Rendre %d billet(s) de 5€\n", billets5);
	if (pieces1 != 0)
	printf("Rendre %d piece(s) de 1€\n", pieces1);	
	if (centimes != 0)
	printf("Rendre %d centime(s) d'Euros\n", centimes);

	return 0;
}
		




	
