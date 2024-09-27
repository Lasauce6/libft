/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:18:49 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/26 15:33:14 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*str;

	l = ft_strlen(s + start);
	if (l < len)
		len = l;
	str = malloc(len + 1);
	if (!str)
		return (0);
	i = -1;
	while (s[++i + start])
		str[i] = s[i + start];
	str[i] = '\0';
	return (str);
}
