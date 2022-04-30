
char *lc_strcpy(char *restrict dest, const char *restrict src)
{
	char *dest_copy = dest;
    
	while (*src)
	{
		*dest = *src++;
		dest++;
	}
	*dest = 0;
	return dest_copy;
}

char *lc_strcpy1(char *restrict dest, const char *restrict src)
{
    char *ret = dest;

	while ((*dest++ = *src++))
		;
	return ret;
}
