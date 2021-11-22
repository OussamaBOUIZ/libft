/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:29:58 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/22 11:58:41 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	*alloc(char *prefix, char *suffix)
// {
// 	size_t	total_l;
// 	char	*allocated;

// 	total_l = ft_strlen(prefix) + ft_strlen(suffix);
// 	allocated = malloc(sizeof(char) * total_l + 1);
// 	if (!allocated)
// 		return (NULL);
// 	return (allocated);
// }

static void	join_str(char *prefix, char *suffix, char *nw_str)
{
	int		i;
	int		j;

	i = 0;
	while (prefix[i])
	{
		nw_str[i] = prefix[i];
		i++;
	}
	j = i;
	i = 0;
	while (suffix[i])
	{
		nw_str[j] = suffix[i];
		i++;
		j++;
	}
	nw_str[j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*prefix;
	char	*suffix;
	char	*nw_str;
	size_t	total_l;

	if (!s1 || !s2)
		return (0);
	prefix = (char *)s1;
	suffix = (char *)s2;
	total_l = ft_strlen(prefix) + ft_strlen(suffix);
	nw_str = malloc(sizeof(char) * total_l + 1);
	if (!nw_str)
		return (NULL);
	join_str(prefix, suffix, nw_str);
	return (nw_str);
}
