#include <stdlib.h>
#include <stdio.h>

int *resheto(int n, int *size)
{
	int* arr = calloc(n + 1, sizeof(int)); // 0 and n

	*size = 0;
	if (!arr)
		return NULL;
	for (int i = 2; i <= n; ++i)
		if (arr[i] == 0)
			for (int k = i * i; k <= n; k += i)
				arr[k] = 1;
	*size = n + 1;
	return arr;
}
