/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:00:23 by husarpka          #+#    #+#             */
/*   Updated: 2024/11/27 11:49:41 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
int main()
{
    printf("\n%d\n",ft_printf(NULL));
    printf("\n%d\n",printf(NULL));    
}
