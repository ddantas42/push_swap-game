/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:28:27 by ddantas-          #+#    #+#             */
/*   Updated: 2022/03/02 15:28:53 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		n;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s) + 1;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	n = 0;
	while (n < len && start < ft_strlen(s))
		str[n++] = s[start++];
	str[n] = '\0';
	return (str);
}
