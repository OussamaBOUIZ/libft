/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:12:52 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/22 09:26:33 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (lst && f)
	{
		current = lst;
		while (current->next)
		{
			(*f)(current->content);
			current = current->next;
		}
		(*f)(current->content);
	}	
}
