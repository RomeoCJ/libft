/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:07:41 by rfuchs            #+#    #+#             */
/*   Updated: 2026/11/03 14:24:19 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	result;

	result = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (result < size - 1 && src[result])
	{
		dst[result] = src[result];
		result ++;
	}
	dst[result] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char dst[] = "AAAAA";
	char *(src) = "BBB";
	printf("%ld\n", ft_strlcpy(dst, src, 3));
}*/
