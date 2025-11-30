/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:54:23 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/05 17:29:46 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*node;
	void	*map;

	if (!lst || !f || !del)
		return (NULL);
	ptr = NULL;
	while (lst)
	{
		map = (f(lst->content));
		node = ft_lstnew(map);
		if (!node)
		{
			del(map);
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		ft_lstadd_back(&ptr, node);
		lst = lst->next;
	}
	return (ptr);
}
