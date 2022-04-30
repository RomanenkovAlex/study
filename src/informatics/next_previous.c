#include <stdio.h>

int next_previous(void)
{
	int a = 0;
	scanf("%d", &a);

	printf("The next number for the number %d is %d.", a, a + 1);
	printf("\nThe previous number for the number %d is %d.", a, a - 1);

	return 0;
}
