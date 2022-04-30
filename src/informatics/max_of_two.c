#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
  return (a / b * a + b / a * b) / (a / b + b / a);
  return (a + b + abs(a - b)) / 2;
	// return (a > b ? a : b);
}
