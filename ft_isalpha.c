/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:45:47 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/22 10:52:37 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	if ((cc >= 'a' && cc <= 'z') || (cc >= 'A' && cc <= 'Z'))
		return (1);
	return (0);
}
