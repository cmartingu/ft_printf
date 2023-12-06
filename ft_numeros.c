/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numeros.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-m <carlos-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:11:58 by carlos-m          #+#    #+#             */
/*   Updated: 2023/10/05 17:12:00 by carlos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	num_dig(int c)
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

int	guardar(int i, char *sol, int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (i--)
	{
		if (sol[i] != '-')
			sol[i] = (char){(nb % 10) + '0'};
		nb = nb / 10;
	}
	return (ft_strlen(sol));
}

int	ft_putnbr_aux(int nb)
{
	char	*sol;
	int		i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		nb *= -1;
		sol = malloc(num_dig(nb) + 2);
		sol[0] = '-';
		i++;
	}
	else
		sol = malloc(num_dig(nb) + 1);
	i += num_dig(nb);
	sol[i] = '\0';
	i = guardar(i, sol, nb);
	if (nb != 0)
		write(1, sol, i);
	free(sol);
	return (i);
}
