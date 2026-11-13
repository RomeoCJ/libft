/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 21:58:15 by rfuchs            #+#    #+#             */
/*   Updated: 2026/11/04 15:38:29 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2);
		ss1 ++;
		ss2 ++;
		i ++;
	}
	return (0);
}
/*
int	main()
{
	char	s1[] = "Cec7";
	char	s2[] = "Ceci";
	printf("%d\n", memcmp(s1, s2, 4));
	printf("%d\n", ft_memcmp(s1, s2, 4));
}
*/
