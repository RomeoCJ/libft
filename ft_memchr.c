/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 21:32:00 by rfuchs            #+#    #+#             */
/*   Updated: 2026/11/04 15:36:56 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*copy;

	i = 0;
	copy = (unsigned char *)str;
	while (i < n)
	{
		if (*copy == (unsigned char)c)
			return (copy);
		i ++;
		copy ++;
	}
	return (NULL);
}
/*
int	main()
{
	char	str[] = "Ceci est un test";
	char	str2[] = "Ceci est un test";
	printf("%s\n", (char *)memchr(str, 't', 8));
	printf("%s\n", (char *)ft_memchr(str2, 't', 8));
}
*/
