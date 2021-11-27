/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:23:18 by cjad              #+#    #+#             */
/*   Updated: 2021/11/22 17:59:45 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	checkparam(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		||c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	tmp;
	int		i;
	int		c;

	va_start(tmp, s);
	i = 0;
	c = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (checkparam(s[i + 1]) == 1)
				c = c + ft_conversion(s[i + 1], tmp);
			i++;
		}
		else
			c = c + ft_putchar(s[i]);
		i++;
	}
	va_end(tmp);
	return (c);
}
