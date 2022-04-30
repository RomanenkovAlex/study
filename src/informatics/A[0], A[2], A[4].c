#include <stdio.h>

void lalala()
{
	const int size = 100;
	int arr[size];
	int n = 0;

	scanf("%d", &n);
	for (int i = 0;	i < n; i += 2)
	{
		scanf("%d", &arr[i]);
		printf("%d ",arr[i]);
	}
}