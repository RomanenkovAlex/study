#include <stddef.h>

char *lc_strncpy(char *restrict dest, const char *restrict src, size_t n)
{
	char *dest_copy = dest;

	while (*src && n)
	{
		*dest++ = *src++;
		--n;
	}
	*dest = 0;
	
    while (n--)
		*dest++ = 0;

	return dest_copy;
}