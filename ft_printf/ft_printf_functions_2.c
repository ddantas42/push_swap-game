/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:53:04 by ddantas-          #+#    #+#             */
/*   Updated: 2022/08/12 14:49:57 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	c_function(char c)
{
	return (write(1, &c, 1));
}

int	s_function(char *s, int n)
{
	if (!s)
		return (write(1, "(null)", 6));
	while (*s && ++n)
		write(1, s++, 1);
	return (n);
}

char	x_util(unsigned int n, int caps)
{
	if (n < 10)
		return (n + 48);
	if (caps)
		return (n + 55);
	return (n + 87);
}

int	x_function(unsigned int n, int caps, int div)
{
	char	*str;
	int		len;
	int		i;

	str = malloc(25 * sizeof(char));
	if (!str)
		return (0);
	len = 0;
	while (n >= (unsigned int)div)
	{
		str[len++] = x_util(n % div, caps);
		n /= div;
	}
	str[len] = x_util(n, caps);
	i = len;
	while (i >= 0)
		write(1, &str[i--], 1);
	free(str);
	return (len + 1);
}
