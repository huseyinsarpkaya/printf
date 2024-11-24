/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:20:15 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/24 17:33:33 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr(int nbr)
{
	int	len;
	long n = (long)nbr;

	len = 0;
	
	if (n < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		len++;
	}
	if (nbr > 9)
	{
		len += ft_putnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + 48);
	len++;
	return (len);
}