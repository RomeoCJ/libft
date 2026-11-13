/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:36:24 by rfuchs            #+#    #+#             */
/*   Updated: 2026/08/06 20:39:32 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	m;
	char	c;

	m = (long)n;
	if (m < 0)
	{
		write(fd, "-", 1);
		m = -m;
	}
	if (m >= 10)
		ft_putnbr_fd((int)(m / 10), fd);
	c = m % 10 + '0';
	ft_putchar_fd(c, fd);
}
