/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:16:43 by ddantas-          #+#    #+#             */
/*   Updated: 2022/03/03 12:17:15 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int	n;

	if (s1 && set)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
		n = ft_strlen(s1);
		while (n && ft_strrchr(set, s1[n]))
		n--;
		return (ft_substr(s1, 0, n + 1));
	}
	return (NULL);
}
