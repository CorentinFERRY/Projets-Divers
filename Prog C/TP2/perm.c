#include <stdio.h>
#include <math.h>

int main(void)
{	
	// Déclaration des variables 

	int x,y,z,tampon;

	printf("entrer x , y , z\n");
	scanf("%d%d%d",&x,&y,&z);

	tampon = x;
	x = z;	
	z = y;
	y = tampon;

	printf("x = %d y=%d z=%d \n", x,y,z);
}
	
