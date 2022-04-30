#include <stdlib.h>
#include <stdio.h>

void test_is_prime()
{
	for (int i = 0; i < 15; ++i)
		printf("%d - %d\n", i, is_prime(i));
	//return 0;
}