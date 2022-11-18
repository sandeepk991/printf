/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:01:55 by skaur             #+#    #+#             */
/*   Updated: 2022/11/17 11:01:29 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_pointer(unsigned long nb)
{
	if (!nb)
	{
		return (ft_putstr("(nil)"));
	}
	ft_putstr("0x");
	return (ft_hexadecimal(nb, 'x') + 2);
}
