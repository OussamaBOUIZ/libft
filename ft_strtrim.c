/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:50:34 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/21 15:15:51 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start(char *s, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(*set))
		return (i);
	while (set[j])
	{
		while (set[j])
		{
			if (s[i] == set[j])
			{
				j = 0;
				break ;
			}
			j++;
		}
		i++;
	}
	i--;
	return (i);
}

static size_t	get_end(char *s, char const *set)
{
	int		i;
	size_t	j;

	i = (int)ft_strlen(s) - 1;
	j = 0;
	while (set[j] && i >= 0)
	{
		while (set[j])
		{
			if (s[i] == set[j])
			{
				j = 0;
				break ;
			}
			j++;
		}
		i--;
	}
	i++;
	if (!i)
		i = (int)ft_strlen(s);
	return (i);
}

static void	fill_trimmed(char *t, char *s, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start <= end)
		t[i++] = s[start++];
	t[i] = 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	s = (char *)s1;
	start = get_start(s, set);
	end = get_end(s, set);
	trimmed = malloc(sizeof(char) * (end - start + 2));
	if (!trimmed)
		return (NULL);
	fill_trimmed(trimmed, s, start, end);
	return (trimmed);
}
