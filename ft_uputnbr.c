/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:39:32 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/27 12:33:15 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uputnbr(unsigned int nbr)
{
	int	len;
	int	res;

	res = 0;
	len = 0;
	if (nbr > 9)
	{
		res = ft_uputnbr(nbr / 10);
		if (res == -1)
			return (-1);
		len += res;
	}
	if (ft_putchar ((nbr % 10) + 48) == -1)
		return (-1);
	len++;
	return (len);
}
