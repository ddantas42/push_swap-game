/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:37:22 by ddantas-          #+#    #+#             */
/*   Updated: 2022/08/12 14:50:19 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_perc(const char *str, int n)
{
	if (str[n + 1] == 'c' || str[n + 1] == 's' || str[n + 1] == 'p'
		|| str[n + 1] == 'd' || str[n + 1] == 'i' || str[n + 1] == 'u'
		|| str[n + 1] == 'x' || str[n + 1] == 'X' || str[n + 1] == '%')
		return (1);
	return (0);
}

int	ft_funcion_selector(char c, va_list ap)
{
	if (c == 'c')
		return (c_function(va_arg(ap, int)));
	if (c == 's')
		return (s_function(va_arg(ap, char *), 0));
	if (c == 'p')
		return (p_function(va_arg(ap, unsigned long int)));
	if (c == 'd' || c == 'i')
		return (nbr_function(va_arg(ap, int)));
	if (c == 'u')
		return (x_function(va_arg(ap, unsigned int), 0, 10));
	if (c == 'x')
		return (x_function(va_arg(ap, unsigned long int), 0, 16));
	if (c == 'X')
		return (x_function(va_arg(ap, unsigned long int), 1, 16));
	if (c == '%')
		return (write(1, "%", 1));
	return (0);
}
