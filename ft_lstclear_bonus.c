/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:35:02 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/22 09:24:00 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*t_curr;

	if (lst && del)
	{
		current = *lst;
		while (current)
		{	
			t_curr = current->next;
			ft_lstdelone(current, del);
			current = t_curr;
		}
		*lst = NULL;
	}
}
