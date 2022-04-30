// https://vos.olimpiada.ru/upload/files/Arhive_tasks/20..


#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <math.h>


int bus_stops()
{
	int k = 0;
	int n = 0;
	int max_1 = 0;
	int max_2 = 0;
	scanf("%d", &k);
	scanf("%d", &n);
	if (n % k == 0)
	{
		printf("0");
	}
	else if (n % k != 0)
	{
		for (int i = n; i < n + k; ++i)
		{
			if (i % k == 0)
			{
				max_1 = i - n;//printf("%d ", i - n);
			}
		}
		for (int j = n - k; j < n; ++j)
		{
			if (j % k == 0)
			{
				max_2 = n - j;//printf("%d", n - j);
			}
		}

	if (max_1 > max_2)
	{
		printf("%d", max_2);
	}
	else
	{
		printf("%d", max_1);
	}
	}
	return 0;
}