/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 22:19:16 by rfuchs            #+#    #+#             */
/*   Updated: 2026/08/04 22:26:51 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i ++;
	}
	copy[i] = '\0';
	return (copy);
}
