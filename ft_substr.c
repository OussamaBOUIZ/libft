/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:56:55 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/20 09:41:20 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	fill_str(const char *s, char *substr, size_t start, size_t len)
{
	size_t	i;

	i = 0;
	while (s[start] && i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (len == 0)
		substr = (char *) malloc(sizeof(char) * 1);
	else
	{
		if (!s || !len)
			return (NULL);
		if (start >= ft_strlen(s))
			len = 0;
		else if (len > ft_strlen(s))
			len = ft_strlen(s) - start;
		substr = malloc((len + 1) * sizeof(char));
		if (!substr)
			return (NULL);
		i = fill_str(s, substr, start, len);
	}
	substr[i] = 0;
	return (substr);
}
