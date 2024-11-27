/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 10:49:19 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/27 11:43:04 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_symbol(va_list args, char a)
{	
	if (a == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (a == 'd' || a == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (a == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (a == 'x' || a == 'X')
		return (ft_hex(va_arg(args, unsigned int), a));
	else if (a == 'u')
		return (ft_uputnbr(va_arg(args, unsigned int)));
	else if (a == 'p')
		return (ft_putpoint(va_arg(args, void *)));
	else if (a == '%')
		return (ft_putchar('%'));
	return (-1);
}

static int	ft_format(va_list args, const char *format)
{
	int	len;
	int	res;

	res = 0;
	len = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			res = ft_symbol(args, *(format + 1));
			if (res == -1)
				return (-1);
			len += res;
			format++;
		}
		else
		{
			res = ft_putchar(*(format));
			if (res == -1)
				return (-1);
			len += res;
		}
		format++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	if (!format)
		return (-1);
	len = 0;
	va_start(args, format);
	len = ft_format(args, format);
	if (len == -1)
	{
		va_end(args);
		return (-1);
	}
	va_end (args);
	return (len);
}
