/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 15:00:30 by rfuchs            #+#    #+#             */
/*   Updated: 2026/08/05 15:06:35 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	while (i < dsize && dst[i])
		i ++;
	if (i == dsize)
		return (i + ft_strlen(src));
	while (i < dsize - 1 && *src)
	{
		dst[i] = *src;
		src ++;
		i ++;
	}
	dst[i] = '\0';
	if (*src)
	{
		while (*src)
		{
			i ++;
			src ++;
		}
	}
	return (i);
}
