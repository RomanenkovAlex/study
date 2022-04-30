#include <stdio.h>

int chet()
{
	int i = 0;
	int l = 0;

	scanf("%d%d", &i, &l);
	for (i += i % 2; i <= l; i += 2)
	{
		printf("%d ", i);
	}
	return 0;
}

// https://informatics.msk.ru/mod/statements/view.php?id=280#1