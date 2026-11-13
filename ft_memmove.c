/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:25:24 by rfuchs            #+#    #+#             */
/*   Updated: 2026/11/04 18:35:04 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*save;
	const unsigned char	*cpy;
	size_t				i;

	save = dest;
	cpy = src;
	i = 0;
	if (src > dest)
	{
		while (i < n)
		{
			save[i] = cpy[i];
			i ++;
		}
		return (dest);
	}
	else
	{
		while (n > 0)
		{
			save[n - 1] = cpy[n - 1];
			n --;
		}
		return (dest);
	}
}
