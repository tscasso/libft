#include "libft.h"

#define CHECK_EQUAL(a, b) ((a) == (b) ? (char *)str : NULL)

char    *strchr(const char *str, int c) 
{
    while (*str && *str != c)
    	str++;
    return CHECK_EQUAL(*str, c);
}