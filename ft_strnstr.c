/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:33:03 by rfuchs            #+#    #+#             */
/*   Updated: 2026/08/05 17:40:59 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *meuledefoin, const char *aiguille, size_t len)
{
	size_t	i;

	i = 0;
	if (*aiguille == '\0')
		return ((char *)meuledefoin);
	while (i < len && *meuledefoin)
	{
		if (*meuledefoin == *aiguille)
		{
			if (ft_strlen(aiguille) <= len - i)
			{
				if (ft_strncmp(meuledefoin, aiguille, ft_strlen(aiguille)) == 0)
					return ((char *)meuledefoin);
			}
		}
		i ++;
		meuledefoin ++;
	}
	return (NULL);
}
