/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:18:49 by rbaticle          #+#    #+#             */
/*   Updated: 2024/10/02 16:00:36 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*set_null_malloc(void)
{
	char	*str;

	str = malloc(1);
	*str = 0;
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*str;

	if (start >= ft_strlen(s))
		str = set_null_malloc();
	else
	{
		l = ft_strlen(&s[start]);
		if (l < len)
			len = l;
		str = malloc(len + 1);
		if (!str)
			return (0);
		i = 0;
		while (s[i + start] && i < len)
		{
			str[i] = s[i + start];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
