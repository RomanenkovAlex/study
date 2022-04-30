#include <stddef.h>

char *lc_strncat(char *restrict dest, const char *restrict src,size_t n)
{
	char *str = dest;
	for (; *src && (n > 0); --n)
	{
		*str++ = *src++;
	}
	dest = str;
	return dest;
}