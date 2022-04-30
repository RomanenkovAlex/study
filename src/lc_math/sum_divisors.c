#include <stddef.h>

size_t sum_divisors(size_t num)
{
	int sum = 0;
	for (size_t i = 1; i <= num; ++i)
	{
		if (num % i == 0)
			sum += i;
	}
	return sum;
}
