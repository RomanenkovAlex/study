#include <stdio.h>

int sq()
{
	int a = 1;
	int n = 0;

	scanf("%d", &n);
	while (a * a <= n)
	{
		printf("%d \n", a * a);
		++a;
	}
	return 0;
}
