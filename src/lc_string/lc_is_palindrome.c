#include <stddef.h>
#include <lc_string.h>

// арозаупаланалапуазора


//  0 1234 5
// "\0"
// "a\0"
int lc_is_palindrome(char *s)
{
    size_t i = 0;
    size_t j = lc_strlen(s) - 1;
    size_t half = j / 2;

    while (i != half && s[i] == s[j])
    {
        ++i;
        --j;
    }
	return i == half;
}
