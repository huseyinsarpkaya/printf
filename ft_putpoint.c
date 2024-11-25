/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:06:57 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/25 12:42:18 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_hexpoint(unsigned long int n, char c)
{
	int	len;
	int	result;

	len = 0;
	if (n >= 16)
	{
		result = ft_hexpoint(n / 16, c);
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

int	ft_putpoint(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		return (5);
	}
	if (write(1, "0x", 2) == -1)
		return (-1);
	len = 2;
	len += ft_hexpoint(n, 'x');
	return (len);
}
