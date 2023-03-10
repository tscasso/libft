/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:56:04 by tscasso           #+#    #+#             */
/*   Updated: 2023/02/03 12:56:06 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	*ft_memset(void *dest, const int c, size_t n)
{
	unsigned char	*d;

	*d = *dest
	while (n--)
		*d++ = c
	return (dest); 
}

