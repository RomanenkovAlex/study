#include <stdlib.h>
#include <stdio.h>

void test_canonical()
{
	size_t size = 0;
	int nums[] = {0, 1, 2, 3, 5, 6,
		10, 16, 19, 36, 17 * 19};
	const int amount = sizeof(nums) / sizeof(int);
	int i = 0;

	while (i < amount)
	{
		int *can = canonical(nums[i], &size);
		printf("\n%d = ", nums[i]);
		print_arr(can, size);
		free(can);
		++i;
	}
}