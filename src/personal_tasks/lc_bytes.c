#include <stdio.h>
#include <stdlib.h>

void bytes(char *a, char *b)
{
	char p_copy = *a;
	*a = *b;
	*b = p_copy;
}