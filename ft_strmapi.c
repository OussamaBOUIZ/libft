/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:49:05 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/22 11:59:23 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*r_str;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (0);
	i = 0;
	str = (char *)s;
	len = ft_strlen(str);
	r_str = malloc(sizeof(char) * len + 1);
	if (!r_str)
		return (NULL);
	r_str[len] = 0;
	while (str[i])
	{
		r_str[i] = (*f)(i, str[i]);
		i++;
	}
	return (r_str);
}
