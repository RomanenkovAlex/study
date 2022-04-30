#include <stddef.h>

size_t count_divisors(size_t num)
{
	int kol = 0;
	for (size_t i = 1; i <= num; ++i)
	{
		if (num % i == 0)
			kol += 1;
	}
	return kol;
}
