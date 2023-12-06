/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-m <carlos-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:26:48 by carlos-m          #+#    #+#             */
/*   Updated: 2023/09/27 09:26:54 by carlos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	escribir(char c, va_list aux)
{
	int	n_let;

	if (c == 'c')
		n_let = caractersolo(va_arg(aux, int));
	else if (c == 's')
		n_let = string_ret(va_arg(aux, char *));
	else if (c == 'p')
		n_let = direcc_p(va_arg(aux, void *));
	else if (c == 'd' || c == 'i')
		n_let = ft_putnbr_aux(va_arg(aux, int));
	else if (c == 'u')
		n_let = ft_putnbr_aux_unsigned(va_arg(aux, unsigned int));
	else if (c == 'x')
		n_let = dec_minusculas(va_arg(aux, unsigned int));
	else if (c == 'X')
		n_let = dec_mayusculas(va_arg(aux, unsigned int));
	else if (c == '%')
		n_let = caractersolo(c);
	else
		return (0);
	return (n_let);
}

int	ft_printf(char const *str, ...)
{
	va_list	aux;
	int		contletras;
	int		auxcont;

	va_start(aux, str);
	contletras = 0;
	while (*str)
	{
		if (*str == '%')
		{
			auxcont = escribir(*(str + 1), aux);
			contletras += auxcont;
			str++;
		}
		else
		{
			write(1, &*str, 1);
			contletras++;
		}
		str++;
	}
	return (contletras);
}
/*
#include <stdio.h>
int main(void)
{
	int n = ft_printf("%X", -5678);
	printf("\n%d\n", n);
	int b = printf("%X", -5678);
	printf("\n%d\n", b);
	return (0);
}*/