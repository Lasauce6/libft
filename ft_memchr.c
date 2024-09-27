/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:06:24 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/26 20:29:02 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	ch;
	size_t	i;

	ch = (char) c;
	i = 0;
	while (*(const char *)(s + i) != ch && i < n)
		i++;
	if (*(const char *)(s + i) == ch)
		return ((void *)(s + i));
	return (0);
}
