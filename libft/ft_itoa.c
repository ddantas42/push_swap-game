/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:52:34 by ddantas-          #+#    #+#             */
/*   Updated: 2022/03/07 13:53:00 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	else if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*min_int(char *c)
{
	c[0] = '-';
	c[1] = '2';
	c[2] = '1';
	c[3] = '4';
	c[4] = '7';
	c[5] = '4';
	c[6] = '8';
	c[7] = '3';
	c[8] = '6';
	c[9] = '4';
	c[10] = '8';
	c[11] = 0;
	return (c);
}

char	*while_len(int len, int n2, char *c, int n)
{
	while (len--)
	{
		if (n2 < 0 && len == 1)
		{
			c[len--] = n + '0';
			c[len] = '-';
		}
		else
			c[len] = (n % 10) + 48;
		n /= 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		len;
	int		n2;

	n2 = n;
	len = ft_intlen(n);
	c = malloc(len + 1);
	if (!c)
		return (0);
	if (n == -2147483648)
		return (min_int(c));
	c[len] = 0;
	if (n < 0)
		n *= -1;
	c = while_len(len, n2, c, n);
	return (c);
}
