#include <stdio.h>

int mkad(void)
{	
	int v = 0;
	int t = 0;
	int l = 109;
	
	scanf("%d", &v);
	scanf("%d", &t);

	printf("%d", (l + (v * t) % l) % l);

	return 0;
}