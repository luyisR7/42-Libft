/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:37:38 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/05 14:28:18 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Adds the node new at the beginning of the list.
 * 
 * @param lst The address of a pointer to the first node of a list.
 * @param new The address of a pointer to the node to be added to the
 * 		  list. 
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* int main(void)
{
	t_list *lst = ft_lstnew("0");

	t_list *node1 = ft_lstnew("1");
	t_list *node2 = ft_lstnew("2");
	t_list *node3 = ft_lstnew("3");

	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node3);

	while (lst != NULL)
	{
		printf("%s -> ", (char *)(lst->content));
		lst = lst->next;
	}
	printf("\n");

	free(node1);
	free(node2);
	free(node3);
} */