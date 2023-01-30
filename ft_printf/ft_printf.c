/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:42:39 by ddantas-          #+#    #+#             */
/*   Updated: 2023/01/23 18:40:31 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		n;
	int		len;
	va_list	ap;

	va_start(ap, str);
	len = 0;
	n = 0;
	while (str[n])
	{
		if (str[n] == '%')
		{
			if (check_perc(str, n))
			{
				len += ft_funcion_selector(str[++n], ap);
				n++;
				continue ;
			}
		}
		len += write(1, &str[n++], 1);
	}
	va_end(ap);
	return (len);
}
