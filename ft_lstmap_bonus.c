/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:07:58 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/20 11:03:26 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*w_n_node;
	t_list	*curr;
	t_list	*first;

	if (!lst)
		return (NULL);
	first = ft_lstnew(f(lst->content));
	head = first;
	curr = lst->next;
	while (curr)
	{
		w_n_node = ft_lstnew(f(curr->content));
		if (!w_n_node)
			break ;
		ft_lstadd_back(&head, w_n_node);
		curr = curr->next;
	}
	if (!w_n_node)
		ft_lstclear(&head, del);
	return (head);
}
