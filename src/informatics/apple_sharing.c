#include <stdio.h>

int del_apples1(void)
{		
	int n = 0;
	int k = 0;
	scanf("%d", &n);
	scanf("%d", &k);
	int c = k / n;

	printf("%d", c);

	return 0;

}