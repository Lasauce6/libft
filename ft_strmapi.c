/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:27:33 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/26 23:59:38 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	size_t	i;
	char	*str;

	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	if (s)
	{
		i = -1;
		while (s[++i])
			str[i] = f(i, s[i]);
	}
	str[i] = '\0';
	return (str);
}