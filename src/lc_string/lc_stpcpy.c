char *lc_stpcpy(char *restrict dest, const char *restrict src)
{
	while (*src != 0)
		*dest++ = *src++;
	*dest = 0;
	return dest;
}
