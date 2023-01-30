/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:34:32 by ddantas-          #+#    #+#             */
/*   Updated: 2022/03/11 14:36:25 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*a;
	size_t		n;

	if (s && f)
	{
		a = malloc(ft_strlen(s) + 1);
		if (!a)
			return (NULL);
		n = 0;
		while (n < ft_strlen(s))
		{
			a[n] = f(n, s[n]);
			n++;
		}
		a[n] = 0;
		return (a);
	}
	return (NULL);
}
