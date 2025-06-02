
float inverse(float x)
{
	float resultat;
	resultat = 1/x;
	return resultat;
}

int quotient(int x,int y)
{
	int division;
	division = x/y;
	return division;
}

int reste(int x, int y)
{
	int modulo;
	modulo = x%y;
	return modulo;
}

float min(float a, float b, float c, float d)
{
	float minimum;
	minimum = (a < b) ? a:b;
	minimum = (minimum < c) ? minimum:c;
	minimum = (minimum < d) ? minimum:d;
	return minimum;
}

float max(float a, float b, float c, float d)
{
	float maximum;
	maximum = (a > b) ? a:b;
	maximum = (maximum > c) ? maximum:c;
	maximum = (maximum > d) ? maximum:d;
	return maximum;
}
