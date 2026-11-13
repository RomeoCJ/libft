/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:26:45 by rfuchs            #+#    #+#             */
/*   Updated: 2026/11/03 14:52:51 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*arr;

	if (size != 0 && n > SIZE_MAX / size)
		return (NULL);
	arr = malloc(n * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, (n * size));
	return (arr);
}
