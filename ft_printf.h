/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:54:49 by cjad              #+#    #+#             */
/*   Updated: 2021/11/23 14:33:37 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_numlen(long n);
int	ft_putnbr_hexa_low(unsigned int n);
int	ft_putnbr_hexa_upp(unsigned int n);
int	ft_putnbr(int nbr);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putptr(void *p);
int	ft_putstr(const char	*s);
int	ft_conversion(char c, va_list tmp);
int	ft_printf(const char *s, ...);
int	ft_hexnum_len(size_t n);

#endif
