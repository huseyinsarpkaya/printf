/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:26:26 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/24 11:15:00 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_unputnbr(unsigned int nbr);
int	ft_hex(unsigned int n, char c);
int	ft_putpoint(void *ptr);
int ft_printf(const char *format , ...);

#endif
