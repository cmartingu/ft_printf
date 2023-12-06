/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-m <carlos-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:30:14 by carlos-m          #+#    #+#             */
/*   Updated: 2023/10/24 15:30:15 by carlos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	num_dig_unsigned(long long c)
{
	int	a;

	a = 0;
	while (c > 0)
	{
		a++;
		c = c / 10;
	}
	return (a);
}

int	guardar_unsigned(int i, char *sol, long long nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (i--)
	{
		sol[i] = (char){(nb % 10) + '0'};
		nb = nb / 10;
	}
	return (ft_strlen(sol));
}

int	ft_putnbr_aux_unsigned(int nb)
{
	char		*sol;
	int			i;
	long long	fin;

	fin = (long long) nb;
	i = 0;
	if (nb < 0)
		fin = 4294967296 + nb;
	sol = malloc(num_dig_unsigned(fin) + 1);
	i = num_dig_unsigned(fin);
	sol[i] = '\0';
	i = guardar_unsigned(i, sol, fin);
	if (nb != 0)
		write(1, sol, i);
	free(sol);
	return (i);
}
