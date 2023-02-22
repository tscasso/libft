/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:38:18 by tscasso           #+#    #+#             */
/*   Updated: 2023/02/21 12:45:40 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t      len;
    const char  *start;
    const char  *end;
    char        *result; 

    len = ft_strlen(s1);
    start = s1;
    end = s1 + len - 1;
    if (s1 == NULL || set == NULL)
        return (NULL);
    while (*start && ft_strchr(set, *start))
    {
        start++;
    }
    while (end > start && ft_strchr(set, *end))
    {
        end--;
    }
    size_t new_len = end - start + 1;
    result = (char *) malloc((new_len + 1) * sizeof(char));
    if (result == NULL)
        return NULL;
    ft_memcpy(result, start, new_len);
    result[new_len] = '\0';
    return (result);
}