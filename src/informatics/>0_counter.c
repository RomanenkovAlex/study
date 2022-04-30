#include <stdio.h>

int counter()
{
	int counter = 0;
	int n = 0;
	int m = 0;

	scanf("%d", &n);
	const int size = n;
	int arr[size];

	for (int k = 0; k < size; ++k)
	{
		scanf("%d", &m);
		arr[k] = m;
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0)
		{
			counter += 1;
		}
	}
	printf("%d", counter);
  return 0;
}