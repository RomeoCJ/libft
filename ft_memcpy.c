/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:26:14 by rfuchs            #+#    #+#             */
/*   Updated: 2026/11/04 15:39:40 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*save;
	const unsigned char	*othersave;

	i = 0;
	save = dest;
	othersave = src;
	while (i < n)
	{
		save[i] = othersave[i];
		i ++;
	}
	return (dest);
}
/*
int	main()
{
	char src[] = "Ceci est un test";
	char dest[] = "AAAAAAA";
	char src2[] = "Ceci est un test";
	char dest2[] = "AAAAAAA";

	memcpy(dest, src, 2);
	ft_memcpy(dest2, src2, 2);
	printf("%s\n", dest);
	printf("%s\n", dest2);
}
*/
