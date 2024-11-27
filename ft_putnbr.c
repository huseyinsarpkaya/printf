/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:20:15 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/27 12:35:24 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int		len;
	int		res;
	long	n;

	n = (long)nbr;
	len = 0;
	res = 0;
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		n = -n;
		len++;
	}
	if (n > 9)
	{
		res = ft_putnbr(n / 10);
		if (res == -1)
			return (-1);
		len += res;
	}
	if (ft_putchar((n % 10) + 48) == -1)
		return (-1);
	len++;
	return (len);
}
