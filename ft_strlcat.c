#include "libft.h"

#define SIZE(a, b) ((a) < (b) ? (a) : (b))

size_t      ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t      dstlen;
    size_t      srclen;
    size_t      n;

    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    if (dstsize <= dstlen)
        return (srclen + dstsize);
    n = SIZE(dstsize - dstlen - 1, srclen);
    ft_memcpy(dst + dstlen, src, n);
    dst[dstlen + n] = '\0';
    return (dstlen + srclen);
}