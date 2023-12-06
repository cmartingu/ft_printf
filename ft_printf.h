/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-m <carlos-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:46:50 by carlos-m          #+#    #+#             */
/*   Updated: 2023/09/27 13:50:37 by carlos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		caractersolo(char c);
int		direcc_p(void *ptr);
int		string_ret(char *p);
int		dec_minusculas(unsigned long long nb);
int		dec_mayusculas(unsigned long long nb);
int		num_dig(int c);
int		ft_putnbr_aux(int nb);
int		escribir(char c, va_list aux);
int		ft_printf(char const *str, ...);
size_t	ft_strlen(const char *s);
int		ft_putnbr_aux_unsigned(int nb);
int		guardar_unsigned(int i, char *sol, long long nb);
int		num_dig_unsigned(long long c);

#endif