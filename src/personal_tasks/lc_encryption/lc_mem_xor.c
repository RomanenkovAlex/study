#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *mem_xor(void *dest, size_t len_dest, const void *key, size_t len_key)
{
    size_t i = 0;
    char *p = dest;
    char *k = (char *)key;

    while (len_dest--)
	{
        *p++ ^= k[i % len_key];
        ++i;
    }
    return dest;
}