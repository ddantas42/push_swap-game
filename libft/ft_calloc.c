/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:13:57 by ddantas-          #+#    #+#             */
/*   Updated: 2022/02/28 15:14:55 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	tab = (void *)malloc(size * count);
	if (!tab)
		return (NULL);
	ft_bzero(tab, size * count);
	return (tab);
}
