/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:13:58 by rfuchs            #+#    #+#             */
/*   Updated: 2026/11/12 13:55:07 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nblen(long int n)
{
	size_t	result;

	result = 0;
	if (n <= 0)
		result = 1;
	while (n)
	{
		result ++;
		n /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*result;
	long int	m;

	m = n;
	len = ft_nblen(m);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	result[0] = '0';
	if (m < 0)
	{
		result[0] = '-';
		m = -m;
	}
	while (m)
	{
		len --;
		result[len] = m % 10 + '0';
		m /= 10;
	}
	return (result);
}
