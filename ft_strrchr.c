/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:24:42 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/17 17:12:33 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	l;
	size_t	i;
	char	*str;

	str = (char *)s;
	l = (char)c;
	i = ft_strlen(str);
	while ((int)i > -1)
	{
		if (str[i] == l)
			return (str + i);
		i--;
	}
	return (0);
}
