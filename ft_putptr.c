/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:54:57 by cjad              #+#    #+#             */
/*   Updated: 2021/11/23 14:43:41 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	hexa_index(size_t n)
{
	char	*c;

	c = "0123456789abcdef";
	return (c[n]);
}

static void	ft_puthex(size_t n)
{
	while (n > 15)
	{
		ft_puthex(n / 16);
		n = n % 16;
	}
	ft_putchar(hexa_index(n));
}

static int	ft_adress(size_t n)
{
	int		a;

	ft_puthex(n);
	a = ft_hexnum_len(n);
	return (a);
}

int	ft_putptr(void	*p)
{
	size_t		n;
	int			size;

	n = (size_t) p;
	size = ft_putstr("0x") + ft_adress(n);
	return (size);
}
