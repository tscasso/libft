/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:37:23 by tscasso           #+#    #+#             */
/*   Updated: 2023/02/21 12:38:12 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#define CMP_RESULT (*p1 - *p2)

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char     *p1;
    const unsigned char     *p2;

    p1 = s1;
    p2 = s2;
    while (n--)
    {
        if (CMP_RESULT != 0)
            break;
        p1++;
        p2++;
    }
    return (CMP_RESULT);
}
