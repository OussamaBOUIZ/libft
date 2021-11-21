/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:24:42 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/20 12:08:17 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	l;
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	l = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == l)
			return (str + i);
		i++;
	}
	return (0);
}
