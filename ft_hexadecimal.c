/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:00:01 by skaur             #+#    #+#             */
/*   Updated: 2022/11/17 10:44:12 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned long hexnbr, char c)
{
	static int	count;

	count = 0;
	if (hexnbr >= 16)
	{
		ft_hexadecimal(hexnbr / 16, c);
		hexnbr = hexnbr % 16;
	}
	if (hexnbr < 16)
	{
		if (hexnbr <= 9)
		{
			ft_putchar(hexnbr + '0');
			count++;
		}
		else
		{
			if (c == 'x')
				ft_putchar(hexnbr + 87);
			else
				ft_putchar(hexnbr + 55);
			count++;
		}
	}
	return (count);
}
