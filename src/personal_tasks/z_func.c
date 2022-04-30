#include <stdio.h>
#include <stdlib.h>

int *z_func(char *z)
{
	size_t size = lc_strlen(z);
	int *z_res = (int *)calloc(size, sizeof(int)); // ENOMEM
	size_t j = 0;

	if (!z_res) // if (a) <-> a != 0
		return NULL;
	for (size_t i = 0; i < size; ++i)
	{
		j = 0;
		while (i + j < size && z[i + j] == z[j])
		{
			++z_res[i];
			++j;
		}
	}
	return z_res;
}

// int *z_f = z_func("abcababcabb");