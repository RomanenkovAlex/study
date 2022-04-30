#include <stdlib.h>

char *lc_strchr(const char *s, int c)
{
	char *pied_piper = (char*)s;

	while (*pied_piper)
	{
		if (*pied_piper == c)
			return pied_piper;
		pied_piper++;
	}
	return NULL;
}