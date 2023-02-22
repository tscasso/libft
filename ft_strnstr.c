#include "libft.h"

char *strnstr(const char *str, const char *tofind, size_t len)
{
    size_t tofind_len = ft_strlen(tofind);

    if (tofind_len == 0) 
        return (char *)str;
    while (len-- >= tofind_len) 
    {
        if (*str == *tofind && 
        ft_strncmp(str, tofind, tofind_len) == 0) 
            return (char *)str;
        str++;
    }
    return (NULL);
}