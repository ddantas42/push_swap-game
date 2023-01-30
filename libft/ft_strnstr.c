/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:44:05 by ddantas-          #+#    #+#             */
/*   Updated: 2022/02/25 14:44:38 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	a;

	n = 0;
	if (needle[0] == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[n] != '\0' && len > n)
	{
		a = 0;
		while (needle[a] == haystack[n + a] && n + a < len)
		{
			if (needle[a + 1] == '\0')
				return ((char *)&haystack[n]);
			a++;
		}
		n++;
	}
	return (NULL);
}
