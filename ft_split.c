/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:05:26 by rfuchs            #+#    #+#             */
/*   Updated: 2026/11/07 16:10:21 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && c == *s)
			s ++;
		if (*s)
			i ++;
		while (*s && c != *s)
			s ++;
	}
	return (i);
}

static size_t	ft_lenword(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
	{
		s ++;
		i ++;
	}
	return (i);
}

static char	**ft_freeall(char **result, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(result[j]);
		j ++;
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	result = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[ft_countword(s, c)] = 0;
	while (*s)
	{
		while (*s == c)
			s ++;
		if (*s)
		{
			result[i] = malloc(ft_lenword(s, c) + 1);
			if (!result[i])
				return (ft_freeall(result, i));
			ft_strlcpy(result[i], s, ft_lenword(s, c) + 1);
			i ++;
		}
		s = s + ft_lenword(s, c);
	}
	return (result);
}
