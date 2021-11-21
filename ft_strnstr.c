/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:46:31 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/17 16:03:43 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystak, const char *needle, size_t len)
{
	char	*ned;
	char	*hay;
	size_t	i;
	size_t	j;

	ned = (char *)needle;
	hay = (char *)haystak;
	i = 0;
	if (!*ned)
		return (hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (ned[j])
		{
			if (hay[i + j] == ned[j] && i + j < len)
				j++;
			else
				break ;
		}
		if (!*(ned + j))
			return (hay + i);
		i++;
	}
	return (0);
}
