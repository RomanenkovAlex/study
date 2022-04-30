#include <stdio.h>
#include <stdlib.h>
typedef int t_array;

void test_mem_swap()
{
	const size_t size = 10;
	t_array *arr1 = calloc(size, sizeof(int));
    t_array *arr2 = calloc(size, sizeof(int));

	srand(time(NULL));

	fill(arr1, size);
	fill(arr2, size);

	int a = 5;
	int b = 6;

	double c = 98;
	double d = 432;

	printf("%d %d\n", a, b);
	printf("%lf %lf\n\n", c, d);

	mem_swap(&a, &b, sizeof(int));
	mem_swap(&c, &d, sizeof(double));

	printf("%d %d\n", a, b);
	printf("%lf %lf\n", c, d);
}