#include <stdlib.h>

char *lc_index(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (char *)s;
        ++s;
	}
	return NULL;
}