/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:40:44 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/17 16:18:02 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*copy;
	char	*s;

	a = 0;
	s = (char *)s1;
	copy = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!copy)
		return (0);
	while (s[a])
	{
		copy[a] = s[a];
		a++;
	}
	copy[a] = '\0';
	return (copy);
}
