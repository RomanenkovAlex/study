#include <stddef.h>

void *lc_memchr(const void *s, int c, size_t n)
{
	const char *p = s;
	
    while (n--)
	{
        if (*p == c)
			return (void *)p;
        ++p;
    }
	return NULL;
}
