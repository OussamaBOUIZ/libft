/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:35:02 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/17 17:16:45 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*t_curr;

	current = *lst;
	while (current)
	{	
		t_curr = current->next;
		ft_lstdelone(current, del);
		current = t_curr;
	}
	*lst = NULL;
}
