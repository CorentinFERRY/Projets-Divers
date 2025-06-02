#include "ihm.h"

int main()
{
	char choix;
	do
	{
		choix = Menu();
		traitechoix(choix);
	}
	while(choix!='f');
	return 0;
 }
