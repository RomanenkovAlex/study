#include <lc_string.h>

char *lc_strcat(char *restrict dest, const char *restrict src)
{
	char *s = (char*)src;
    char *dest_copy = dest;
	
    while (*dest)
		++dest;
	while ((*dest++ = *s++))
		;
	return dest_copy;
}

char *lc_strcat1(char *restrict dest, const char *restrict src)
{
    lc_strcpy(dest + lc_strlen(dest), src);
    return dest;
}
