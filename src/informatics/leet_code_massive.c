#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target)
{
  for (int i = 0; i < numsSize; ++i)
  {
    if (nums[i] == target)
      return i;
	  else
		  return numsSize + 1;
  }
  return numsSize + 1;
}

int search_number(int* nums, int numsSize, int target)
{
	for (int i = 0; i < numsSize; ++i)
	{
		if (i == target)
		{
			printf("%d", i);
		}
	}
	return 0;
}