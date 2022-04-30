#include <stdio.h>
#include <stdlib.h>

void mem_swap(void *p1, void *p2, size_t size)
{
	char byte;
	char *pc1 = p1;
	char *pc2 = p2;

	for (size_t i = 0; i < size; ++i)
	{
		byte = *pc1;
		*pc1 = *pc2;
		*pc2 = byte;
		pc1++;
		pc2++;
	}
}