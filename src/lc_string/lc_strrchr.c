char *lc_strrchr(const char *s, int c)
{
	char *s_copy = (char*) s;
	char *s_ind = (char*) s;

	while (*s)
	{
		if (*s == c)
			s_ind = s_copy;
        ++s_copy;
	}
	return s_ind;
}