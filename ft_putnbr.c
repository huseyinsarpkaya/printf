/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:20:15 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/26 17:37:43 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int		len;

	len = 0;
	if (nbr == -2147483648)
	{
		if (ft_putstr("-2147483648") == -1)
			return (-1);
		return (11);
	}
	if (nbr < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		nbr = -nbr;
		len++;
	}
	if (nbr > 9)
	{
		len += ft_putnbr(nbr / 10);
	}
	if (ft_putchar((nbr % 10) + 48) == -1)
		return (-1);
	len++;
	return (len);
}
