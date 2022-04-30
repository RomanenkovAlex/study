#include <stddef.h>

void *lc_memset(void *s, int c, size_t n)
{
	unsigned char *p = (unsigned char *)s;

    while (n--)
        *p++ = c;
    return s;
}