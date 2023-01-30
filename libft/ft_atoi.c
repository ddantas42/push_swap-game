/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:51:30 by ddantas-          #+#    #+#             */
/*   Updated: 2022/02/28 16:50:45 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	s;
	int	c;

	c = 0;
	s = 1;
	n = 0;
	while (str[n] == ' ' || str[n] == '\f' || str[n] == '\n'
		|| str[n] == '\r' || str[n] == '\t' || str[n] == '\v')
		n++;
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			s *= -1;
		n++;
	}
	while (str[n])
	{
		if (str[n] >= 48 && str[n] <= 57)
			c = (c * 10) + (str[n] - 48);
		else
			break ;
		n++;
	}
	return (c * s);
}
