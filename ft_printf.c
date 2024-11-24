/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 10:49:19 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/24 18:18:34 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_symbol(va_list args, char a)
{
    if (a == 'c')
        return (ft_putchar(va_arg(args,int)));
    else if (a == 'd' || a == 'i')
        return (ft_putnbr(va_arg(args, int)));
    else if(a == 's')
        return (ft_putstr(va_arg(args,char *)));
    else if(a == 'x' || a == 'X')
        return (ft_hex(va_arg(args,unsigned int)));
	else if(a == '%')
		write(1,"%",1);
    return (0);
}

int ft_printf(const char *format , ...)
{
    va_list args;
    int len;
    len = 0;
    va_start(args,format);
	
    while (*format != '\0')
    {
        if(*format == '%' && *(format + 1) != '\0')
        {
           len = ft_symbol(args,*(format + 1));
			format++;
        }
        else 
            len = ft_putchar(*format);
        format++;
    
    }
    va_end(args);
    return (len);
}
