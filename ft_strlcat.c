/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:57:15 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/22 12:04:49 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_l;
	size_t	s_l;
	char	*s;

	if (dstsize == 0 && !dst)
		return (ft_strlen(src));
	s = (char *)src;
	d_l = ft_strlen(dst);
	s_l = ft_strlen(s);
	i = 0;
	if (dstsize <= d_l)
		return (dstsize + s_l);
	while (s[i] && d_l + i < dstsize - 1)
	{
		dst[d_l + i] = s[i];
		i++;
	}
	dst[d_l + i] = '\0';
	return (s_l + d_l);
}
