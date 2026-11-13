/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 16:02:57 by rfuchs            #+#    #+#             */
/*   Updated: 2026/08/04 16:40:13 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*save;

	save = str;
	while (n > 0)
	{
		*save = (unsigned char)c;
		n --;
		save ++;
	}
	return (str);
}
/*
int main()
{
	char	str[] = "Ceci est un test";
	char	str2[] = "Ceci est un test";

	printf("%s\n", (char *)memset(str, 68, 5));
	printf("%s\n", (char *)ft_memset(str2, 68, 5));
}
*/
