/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:55:08 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/23 16:12:23 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_hex(unsigned int n, char c)
{
	int	len;
	int	result;

	len = 0;
	if (n >= 16)
	{
		result = ft_hex(n / 16, c);
		if (result == -1)
			return (-1);
		len += result;
	}
	if (c == 'x')
	{
		if (write(1, &("0123456789abcdef"[n % 16]), 1) == -1)
			return (-1);
	}
	else if (c == 'X')
	{
		if (write(1, &("0123456789ABCDEF"[n % 16]), 1) == -1)
			return (-1);
	}
	len++;
	return (len);
}
