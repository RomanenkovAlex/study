#include <stdio.h>
#include <limits.h>

int max_in_mas()
{
	int max = INT_MIN;
	int n = 0;
	int m = 0;
	const int size = 10000;
	int arr[size];

	scanf("%d", &n);
	for (int k = 0; k < n; ++k)
	{
		scanf("%d", &m);
		arr[k] = m;
	}

	for (int i = 0; i < n; ++i)
		if (arr[i] > max)
			max = arr[i];

	printf("%d", max);
  return 0;
}