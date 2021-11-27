/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:38:34 by cjad              #+#    #+#             */
/*   Updated: 2021/11/22 19:23:20 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	a;

	a = ft_numlen(n);
	if (n > 9)
		ft_putnbr_unsigned(n / 10);
	ft_putchar((n % 10) + '0');
	return (a);
}
