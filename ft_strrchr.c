#include <string.h>

#define IS_EQUAL(x) (*str == (x))

char    *strrchr(const char *str, int c)
{
    const char      *last;
    
   last = NULL;
    while (*str)
    {
        if (IS_EQUAL(c))
            last = str;
        str++;
    }
    return ((char *) last);
}