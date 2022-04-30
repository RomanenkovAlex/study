#include <stddef.h>

#include <lc_string.h>

char *lc_strpbrk(const char *s, const char *accept)
{
    char *ret = NULL;
	
    while (*s)
	{
        ret = lc_strchr(accept, *s);
		if (ret)
			return (char*)s;
		++s;
	}
	return NULL;
}
