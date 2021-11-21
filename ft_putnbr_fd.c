/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:39:49 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/13 14:47:53 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long int	b;

	b = nb;
	if (b < 0)
	{
		ft_putchar_fd('-', fd);
		b = b * (-1);
	}
	if (b >= 10)
	{
		ft_putnbr_fd(b / 10, fd);
	}
	ft_putchar_fd(b % 10 + '0', fd);
}
