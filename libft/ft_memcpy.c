/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:57:13 by ddantas-          #+#    #+#             */
/*   Updated: 2022/02/18 15:30:00 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	c;

	c = 0;
	if (dst == src || n == 0)
		return (dst);
	while (c < n)
	{
		((char *)dst)[c] = ((const char *)src)[c];
		c++;
	}
	return (dst);
}
