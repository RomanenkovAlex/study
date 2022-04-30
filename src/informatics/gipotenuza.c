#include <stdio.h>
#include <math.h>

int gipotenuza(void)
{
	int a = 0;
	int b = 0;
	double c = 0.0;

	scanf("%d", &a);
	scanf("%d", &b);

	c = a * a + b * b;
	printf("%f", sqrt(c));
	
	return 0;
}