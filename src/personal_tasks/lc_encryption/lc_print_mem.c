#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_mem(const void *mem, size_t len, size_t block)
{
    size_t i = 0;
    unsigned char *p = (unsigned char *)mem;
    
    if (!block)
        block = 16;
    while (i < len)
    {
        printf("%02x", p[i]);
        ++i;
        if (i % block)
            putchar(' ');
        else
            putchar('\n');
    }
}