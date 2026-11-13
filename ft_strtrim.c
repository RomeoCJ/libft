/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 12:39:04 by rfuchs            #+#    #+#             */
/*   Updated: 2026/11/07 15:00:22 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*end;

	if (!s1 || !set)
		return (NULL);
	end = s1 + ft_strlen(s1);
	while (ft_strchr(set, *s1) && *s1)
		s1 ++;
	while (end > s1 && ft_strchr(set, *(end - 1)))
		end --;
	return (ft_substr(s1, 0, end - s1));
}
