#include <math.h>
#include <stddef.h>

int is_prime(size_t num)
{
	size_t i = 2;
	size_t root = sqrt(num);

	while (i <= root && num % i)
		++i;
	return num != 1 && i == root + 1;
}
