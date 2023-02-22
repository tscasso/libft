#include "libft.h"

char **ft_split(char const *str, char c)
{
    char    **tab;
    char    *start;
    char    *end;
    int     len;
    int     j;

    start = str;
    end = 0;
    j = 0;
    tab = (char **)malloc(sizeof(char *) * ft_strlen(str));
    if (!tab)
        return (NULL);
    while(*str)
    {
        if(*str == c)
        {
            str++;
            start = str;
        }
        else
        {
            end = ft_strchr(str, c);
        }
        if (!end)
				end = str + strlen(str);
			len = end - start;
			tab[j] = (char *)malloc(sizeof(char) * (len + 1));
			if (!tab[j])
				return (NULL);
			memcpy(tab[j], start, len);
			tab[j][len] = '\0';
			str = end;
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}