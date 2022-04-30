#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>


// https://idroo.com/board-xRuU2k7rg7
// 
void fill_arr(int arr[200][200], int size)
{		
  for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
      arr[i][j] = 1 -
                  (j < size - i - 1) +
                  (j > size - i - 1);
		}
	}
}


int zadacha(int argc, char **argv)
{
	int n = 0;
  
	const int size = 200;
	int abc[size][size]; // VLA

	scanf("%d", &n);
  fill_arr(abc, n);
	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		abc[i][j] = 0;
	// 	}
	// }

	// for (int i = 0; i < n; ++i)
	// {
	// 	abc[i][n - i - 1] = 1;
	// }

	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < n; j++)
	// 	{
	// 		if (j >= n - i)
	// 		{
	// 			abc[i][j] = 2;
	// 		}
	// 	}
	// }

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", abc[i][j]);
		}
		printf("\n");
	}

	return 0;
}
/*
[0] = [0   1   2]
[1] = [0   1   2]
[2] = [0   1   2]
*/

// abc[0,2,3]

// abc[0[1], 2[3], 3[4]]

/*
0 0 0 (i;0) 
0 0 (i-1;1) 2 
0 (i-2;2) 2 2 
(i-3;3) 2 2 2 
*/