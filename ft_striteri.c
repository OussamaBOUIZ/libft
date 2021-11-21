/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:10:40 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/13 14:10:18 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char	*str;
	size_t	i;

	if (s)
	{
		i = 0;
		str = (char *)s;
		while (str[i])
		{
			(*f)(i, &str[i]);
			i++;
		}
	}
}
