/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <lde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:16:38 by lde-frei          #+#    #+#             */
/*   Updated: 2025/11/05 14:23:56 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Adds the node new at the end of the list.
 * 
 * @param lst The address of a pointer to the first node of a list.
 * @param new the addres of a pointer to the node to be added to the
 * 		  list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr->next = new;
}

/* int main(void)
{
	t_list *lst = ft_lstnew("0");
	t_list *tmp;
	t_list *next;

	t_list *node1 = ft_lstnew("1");
	t_list *node2 = ft_lstnew("2");
	t_list *node3 = ft_lstnew("3");

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	tmp = lst;
	while (tmp != NULL)
	{
		printf("%s -> ", (char *)(tmp->content));
		tmp = tmp->next;
	}

	tmp = lst;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}

	return (0);
} */