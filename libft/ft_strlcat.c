/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:34:21 by ddantas-          #+#    #+#             */
/*   Updated: 2022/02/17 17:24:59 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	a;
	size_t	c;

	n = ft_strlen(dst);
	a = ft_strlen(src);
	c = 0;
	if (dstsize <= n)
		return (a + dstsize);
	else
		a = a + n;
	while (src[c] != '\0' && (c + n + 1) < dstsize)
	{
		dst[c + n] = src[c];
		c++;
	}
	dst[c + n] = '\0';
	return (a);
}
