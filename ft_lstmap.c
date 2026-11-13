/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:54:42 by rfuchs            #+#    #+#             */
/*   Updated: 2026/11/12 13:22:11 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;
	void	*dupe;

	if (!f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		dupe = f(lst->content);
		node = ft_lstnew(dupe);
		if (!node)
		{
			del(dupe);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
