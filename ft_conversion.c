/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:33:03 by cjad              #+#    #+#             */
/*   Updated: 2021/11/22 18:23:11 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(char c, va_list tmp)
{
	int	a;

	a = 0;
	if (c == 'c')
		a = ft_putchar(va_arg(tmp, int));
	if (c == 's')
		a = ft_putstr(va_arg(tmp, const char *));
	if (c == 'p')
		a = ft_putptr(va_arg(tmp, void *));
	if (c == 'd' || c == 'i')
		a = ft_putnbr(va_arg(tmp, int));
	if (c == 'u')
		a = ft_putnbr_unsigned(va_arg(tmp, unsigned int));
	if (c == 'x')
		a = ft_putnbr_hexa_low(va_arg(tmp, unsigned int));
	if (c == 'X')
		a = ft_putnbr_hexa_upp(va_arg(tmp, unsigned int));
	if (c == '%')
		a = ft_putchar('%');
	return (a);
}
