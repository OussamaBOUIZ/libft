/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:54:32 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/22 10:52:00 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	if (cc >= 'a' && cc <= 'z')
		return (1);
	if (cc >= 'A' && cc <= 'Z')
		return (1);
	if (cc >= '0' && cc <= '9')
		return (1);
	return (0);
}
