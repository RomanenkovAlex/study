//https://leetcode.com/problems/contains-duplicate/

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>

// https://idroo.com/board-xRuU2k7rg7
// 
#include <stdio.h>
#include <math.h>

void fill_arr_2(int nums[100], int size)
{		
  for (int i = 0; i < size; ++i)
	{
		scanf("%d", &i);
		nums[i] = i;
	}
}


int zad()
{
	int n = 0;
	int abc[n];
	scanf("%d", &n);
	fill_arr_2(abc, n);
	for (int i = 0; i < n; i++)
	{
    	for (int j = i + 1; j < n; j++)
		{
        	if (abc[i] == abc[j]) 
			{
				printf("true");
         	}
      	}
   }
   printf("false");
   return 0;
}
