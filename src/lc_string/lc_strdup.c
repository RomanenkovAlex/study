#include <stdlib.h>
#include <lc_string.h>

char *lc_strdup(const char *s)
{
	char *dup = (char*)malloc((lc_strlen(s) + 1) * sizeof(char));

    if (dup)
		lc_strcpy(dup, s);

	return dup;
}
