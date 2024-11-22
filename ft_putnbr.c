/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:23:44 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/22 17:27:54 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == -2147483648)
	{
		if (write (1, "-2147483648", 11) == -1)
			return (-1);
		return (11);
	}
	if (nbr < 0)
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
