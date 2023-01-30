/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:18:15 by ddantas-          #+#    #+#             */
/*   Updated: 2022/03/03 17:16:24 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_del(const char *str, char c)
{
	int	n;
	int	b;

	n = 0;
	b = 0;
	while (*str)
	{
		if (*str != c && b == 0)
		{
			b = 1;
			n++;
		}
		else if (*str == c)
			b = 0;
		str++;
	}
	return (n);
}

char	*str_make(char const *s, int c, int a)
{
	char	*str;
	int		n;

	n = 0;
	str = malloc((a - c + 1) * sizeof(char));
	while (c < a)
		str[n++] = s[c++];
	str[n] = '\0';
	return (str);
}

char	**splitter(char **str, char const *s, char c)
{
	size_t		i_str;
	size_t		n;
	int			i;

	n = 0;
	i_str = 0;
	i = -1;
	while (n <= ft_strlen(s))
	{
		if (s[n] != c && i < 0)
			i = n;
		else if ((s[n] == c || n == ft_strlen(s)) && i >= 0)
		{
			str[i_str++] = str_make(s, i, n);
			i = -1;
		}
		n++;
	}
	str[i_str] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (0);
	str = malloc((ft_del(s, c) + 1) * sizeof(char *));
	if (!str)
		return (0);
	return (splitter(str, s, c));
}
