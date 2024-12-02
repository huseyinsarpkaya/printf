/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:06:57 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/29 15:12:47 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_hexpoint(unsigned long n)
{
	int	len;
	int	result;

	len = 0;
	if (n >= 16)
	{
		result = ft_hexpoint(n / 16);
		if (result == -1)
			return (-1);
		len += result;
	}
	if (write(1, &("0123456789abcdef"[n % 16]), 1) == -1)
		return (-1);
	len++;
	return (len);
}

int	ft_putpoint(void *n)
{
	unsigned long	nbr;
	int				len;
	int				res;

	res = 0;
	nbr = (unsigned long)n;
	if (nbr == 0)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		return (5);
	}
	if (write(1, "0x", 2) == -1)
		return (-1);
	len = 2;
	res = ft_hexpoint(nbr);
	if (res == -1)
		return (-1);
	len += res;
	return (len);
}
