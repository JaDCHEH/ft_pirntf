/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_low.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:44:01 by cjad              #+#    #+#             */
/*   Updated: 2021/11/23 14:40:50 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	hexa_index(unsigned int n)
{
	char	*c;

	c = "0123456789abcdef";
	return (c[n]);
}

static void	ft_puthex(unsigned int n)
{
	while (n > 15)
	{
		ft_puthex(n / 16);
		n = n % 16;
	}
	ft_putchar(hexa_index(n));
}

int	ft_putnbr_hexa_low(unsigned int n)
{
	int		a;

	a = ft_hexnum_len(n);
	ft_puthex(n);
	return (a);
}
