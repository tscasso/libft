#include "libft.h"

int     ft_strncmp(const char *str1, const char *str2, size_t n)
{
    return ft_memcmp(str1, str2, n);
}