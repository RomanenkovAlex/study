#ifndef LC_STRING_H
#define LC_STRING_H

#include <stddef.h>

// Return the length of the string s.   \/
size_t lc_strlen(const char *s); 

// Compare the strings s1 with s2.   \/
int lc_strcmp(const char *s1, const char *s2);

// Compare at most n bytes of the strings s1 and s2.  \/ 
int lc_strncmp(const char *s1, const char *s2, size_t n);

// Copy the string src to dest, returning a pointer to the start of dest.   \/
char *lc_strcpy(char *restrict dest, const char *restrict src);

// Copy a string from src to dest, returning a pointer to the end of the resulting string at dest. \/
char *lc_stpcpy(char *restrict dest, const char *restrict src);

// Copy at most n bytes from string src to dest, returning a pointer to the start of dest.\/
char *lc_strncpy(char *restrict dest, const char *restrict src, size_t n);

// Return a duplicate of the string s in memory allocated using malloc(3).  \/
char *lc_strdup(const char *s);

// Return a pointer to the first occurrence of the character c in the string s. \/
char *lc_strchr(const char *s, int c);

// Return a pointer to the last occurrence of the character c in the string s. \/
char *lc_strrchr(const char *s, int c);

// Return a pointer to the first occurrence of the character c in the string s. \/
char *lc_index(const char *s, int c);

// Return a pointer to the last occurrence of the character c in the string s. \/
char *lc_rindex(const char *s, int c);

// Append the string src to the string dest, returning a pointer dest. \/
char *lc_strcat(char *restrict dest, const char *restrict src);

// Append at most n bytes from the string src to the string dest, returning a pointer to dest. \/
char *lc_strncat(char *restrict dest, const char *restrict src, size_t n);

// Calculate the length of the starting segment in the string s that consists entirely of bytes in accept.  ?????
size_t lc_strspn(const char *s, const char *accept); 

// Calculate the length of the initial segment of the string s which does not contain any of bytes in the string reject, ?????
size_t lc_strcspn(const char *s, const char *reject);

// Randomly swap the characters in string.
char *lc_strfry(char *string);

// Return a pointer to the first occurrence in the string s of one of the bytes in the string accept. \/
char *lc_strpbrk(const char *s, const char *accept);

// Extract the initial token in stringp that is delimited by one of the bytes in delim.
char *lc_strsep(char **restrict stringp, const char *restrict delim);

// Find the first occurrence of the substring needle in the string haystack, returning a pointer to the found substring.
char *lc_strstr(const char *haystack, const char *needle);

// Compare the strings s1 and s2 ignoring case.
int lc_strcasecmp(const char *s1, const char *s2);

// Compare the first n bytes of the strings s1 and s2 ignoring case.
int lc_strncasecmp(const char *s1, const char *s2, size_t n);

// Extract tokens from the string s that are delimited by one of the bytes in delim.
char *lc_strtok(char *restrict s, const char *restrict delim);

// Transforms src to the current locale and copies the first n bytes to dst.
size_t lc_strxfrm(char *restrict dst, const char *restrict src, size_t n);

int is_palindrome(char *s);

// mem           membarrier    memchr        memcpy        memfrob       memmove       memrchr       memusage      
// memalign      memccpy       memcmp        memfd_create  memmem        mempcpy       memset        memusagestat

void lc_bzero(void *s, size_t n);
void *lc_memset(void *s, int c, size_t n);
void *lc_memchr(const void *s, int c, size_t n);
void *lc_memrchr(const void *s, int c, size_t n);
void *lc_memcmp(const void *s1, const void *s2, size_t n);
void *lc_memcpy(void *restrict dest, const void *restrict src, size_t n);
void *lc_memmove(void *dest, const void *src, size_t n);

#endif
