#include "libft.h"

char    *ft_strdup (const char *s)
{
  size_t      len;
  void        *dup;

  len = ft_strlen(s + 1);
  dup = malloc(len);
  if (dup == NULL)
    return (NULL);
  return (char *)ft_memcpy(dup, s, len);
}