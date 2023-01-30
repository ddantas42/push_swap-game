/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:42:07 by ddantas-          #+#    #+#             */
/*   Updated: 2022/03/02 16:42:45 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		n;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		str = (char *)malloc((len1 + ft_strlen(s2) + 1) * sizeof(char));
		if (!str)
			return (0);
		n = 0;
		while (s1[n])
		{
			str[n] = s1[n];
			n++;
		}
		n = 0;
		while (s2[n])
			str[len1++] = s2[n++];
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}
