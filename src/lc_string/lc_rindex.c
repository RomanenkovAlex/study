char *lc_rindex(const char *s, int c)
{
	char *s_copy = (char*)s;
	char *s_ind = (char*)s;

	while (*s_copy != 0)
	{
		if (*s_copy == c)
			s_ind = s_copy;
        ++s_copy;
	}
	return s_ind;
}