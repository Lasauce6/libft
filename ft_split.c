/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:30:43 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/26 23:42:46 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s)
	{
		while (s[i])
		{
			if (s[i] == c)
				i++;
			else
			{
				count++;
				while (s[i] != c && s[i])
					i++;
			}
		}
	}
	return (count);
}

size_t	len_word(const char *s, char c, size_t pos)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[pos + i] != c && s[pos + i])
			i++;
	}
	return (i);
}

char	*ft_strndup(const char *src, size_t n)
{
	size_t	i;
	char	*dst;

	dst = malloc(n + 1);
	if (!dst)
		return (0);
	i = -1;
	while (src[++i] && i < n)
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

int	fill_res(char ***res, char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			(*res)[j] = strndup(s + i, len_word(s, c, i));
			if (!(*res)[j])
			{
				while (j-- >= 0)
					free(*res[j]);
				free(*res);
				return (0);
			}
			i += len_word(s, c, i);
			j++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	res = malloc(sizeof(char *) * (get_words(s, c) + 1));
	if (!res)
		return (0);
	i = 0;
	j = 0;
	if (s)
	{
		if (!fill_res(&res, s, c))
			return (0);
	}
	res[j] = 0;
	return (res);
}