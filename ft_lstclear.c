/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:21:47 by rfuchs            #+#    #+#             */
/*   Updated: 2026/11/12 12:45:05 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*save;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		save = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(save, del);
	}
}
