/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:18:54 by obouizga          #+#    #+#             */
/*   Updated: 2021/11/13 10:48:00 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digits_n(long int nb)
{
	long int	i;
	long int	j;

	i = 1;
	j = 0;
	if (!nb)
	{
		return (1);
	}
	while (i <= nb)
	{
		i *= 10;
		j++;
	}
	return (j);
}

static void	fill_s_num(char *s, long int nb, int n_digits, int sign)
{
	long int	i;
	int			cnd;

	i = n_digits;
	cnd = 0;
	if (sign)
	{
		s[0] = '-';
		i++;
		cnd = 1;
	}
	s[i] = 0;
	i--;
	while (i >= cnd)
	{
		s[i] = nb % 10 + 48;
		nb = nb / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			n_digits;
	char		*s_num;
	int			sign;

	sign = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		sign = 1;
	}
	n_digits = get_digits_n(nb);
	s_num = malloc(sizeof(char) * (n_digits + sign + 1));
	if (!s_num)
		return (NULL);
	fill_s_num(s_num, nb, n_digits, sign);
	return (s_num);
}
