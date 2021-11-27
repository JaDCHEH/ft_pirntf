/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_upp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:09:37 by cjad              #+#    #+#             */
/*   Updated: 2021/11/23 14:41:52 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	hexa_index(unsigned int n)
{
	char	*c;

	c = "0123456789ABCDEF";
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

int	ft_putnbr_hexa_upp(unsigned int n)
{
	int		a;

	ft_puthex(n);
	a = ft_hexnum_len(n);
	return (a);
}
