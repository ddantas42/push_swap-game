/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:49:56 by ddantas-          #+#    #+#             */
/*   Updated: 2022/02/21 15:53:23 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;

	n = 0;
	if (dstsize == 0)
	{
		while (src[n])
			n++;
		return (n);
	}
	while (n < dstsize - 1 && src[n])
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	while (src[n])
		n++;
	return (n);
}
