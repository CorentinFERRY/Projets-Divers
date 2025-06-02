#include <stdio.h>
#include <math.h>

int main(void)
{
	int max, min;
	int a, b, c, d;	

	printf("Saisir a\n");
	scanf("%d",&a);
	printf("Saisir b\n");
	scanf("%d",&b);
	printf("Saisir c\n");
	scanf("%d",&c);
	printf("Saisir d\n");
	scanf("%d",&d);

	max = (a > b) ? a:b;
	max = (max > c) ? max:c;
	max = (max > d) ? max:d;

	min = (a < b) ? a:b;
	min = (min < c) ? min:c;
	min = (min < d) ? min:d;

	printf ("Le maximum est %d et le minimum est %d\n", max ,min);
	return 0;
}
