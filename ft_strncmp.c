/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:23:20 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/17 14:33:43 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*ss;

	s = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s[i] && (s[i] == ss[i]) && i < n - 1)
		i++;
	return (s[i] - ss[i]);
}
