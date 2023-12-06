/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-m <carlos-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:18:38 by carlos-m          #+#    #+#             */
/*   Updated: 2023/10/05 18:18:40 by carlos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dec_mayusculas(unsigned long long nb)
{
	char			sol[17];
	long long		dig_aux;
	int				i;
	int				j;

	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	i = 0;
	while (nb != 0)
	{
		dig_aux = nb % 16;
		sol[i] = (char){"0123456789ABCDEF"[dig_aux]};
		nb = nb / 16;
		i++;
	}
	j = i;
	while (i--)
		write(1, &sol[i], 1);
	return (j);
}

int	dec_minusculas(unsigned long long nb)
{
	char		sol[17];
	long long	dig_aux;
	int			i;
	int			j;

	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	i = 0;
	while (nb != 0)
	{
		dig_aux = nb % 16;
		sol[i] = (char){"0123456789abcdef"[dig_aux]};
		nb = nb / 16;
		i++;
	}
	j = i;
	while (i--)
		write(1, &sol[i], 1);
	return (j);
}

int	string_ret(char *p)
{
	int	n;

	if (!p)
		p = "(null)";
	n = ft_strlen(p);
	write(1, p, n);
	return (n);
}

int	direcc_p(void *ptr)
{
	unsigned long long		aux;
	int						num;

	aux = (unsigned long long)ptr;
	if (aux == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	num = 2;
	num += dec_minusculas(aux);
	return (num);
}

int	caractersolo(char c)
{
	write(1, &c, 1);
	return (1);
}
