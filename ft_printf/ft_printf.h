/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:45:43 by ddantas-          #+#    #+#             */
/*   Updated: 2022/08/12 14:50:05 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

// ft_prinft.c
int		ft_printf(const char *str, ...);

// ft_printf_utils.c
int		check_perc(const char *str, int n);
int		ft_funcion_selector(char c, va_list ap);

// ft_printf_functions.c
int		p_function(unsigned long int p);
int		nbr_if(int n, int sinal);
int		int_len(int n, int len);
void	print_str(int i, char *str, int n, int len);
int		nbr_function(int n);

// ft_printf_function_2.c
int		c_function(char c);
int		s_function(char *s, int n);
char	x_util(unsigned int n, int caps);
int		x_function(unsigned int n, int caps, int div);

#endif