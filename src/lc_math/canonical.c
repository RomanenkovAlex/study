#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* canonical(size_t num, size_t *size)
{
	int* canon = NULL;
	size_t num_copy = (size_t)sqrt(num);
	size_t i = 2;
	int amount = 0;

	if (!num)
	{
		*size = 0;
		return calloc(1, sizeof(int));
	}
	while (num != 1 && i <= num_copy)
	{
		while (num % i == 0)
		{
			canon = realloc(canon, (amount + 1) * sizeof(int));
			canon[amount] = i; //printf("%ld * ", i);
			amount++;
			num /= i;
		}
		++i;
	}
	if (num != 1)
	{
		canon = realloc(canon, (amount + 1) * sizeof(int));
		canon[amount] = num;
		amount++;
	}
	*size = amount;
	return canon;
}

// <= 3
// 12 = 2 2 3
// 1568 = 7 * 7 * 2 * 2 * 2 * 2 * 2