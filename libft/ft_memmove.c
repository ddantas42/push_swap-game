/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:54:04 by ddantas-          #+#    #+#             */
/*   Updated: 2022/02/17 12:28:18 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destination;

	source = (char *)src;
	destination = dst;
	if (source < destination)
	{
		while (len--)
			destination[len] = source[len];
	}
	else
		ft_memcpy(destination, source, len);
	return (dst);
}
