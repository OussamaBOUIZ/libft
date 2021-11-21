/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:38:41 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/16 14:29:20 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	char	*s;

	s = (char *)src;
	l = ft_strlen(s);
	if (dstsize != 0)
	{
		i = 0;
		while (i < dstsize - 1 && s[i])
		{
			dst[i] = s[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (l);
}
