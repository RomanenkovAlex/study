#include <stdio.h>

int vis(void)
{
	int year = 0;
	
  scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0; 
}