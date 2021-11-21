/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:24:42 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/17 17:18:30 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	l;
	size_t	i;
	char	*str;

	str = (char *)s;
	l = (char) c;
	i = 0;
	while (str[i])
	{
		if (str[i] == l)
			return (str + i);
		i++;
	}
	if (str[i] == l)
		return (str + i);
	return (0);
}
