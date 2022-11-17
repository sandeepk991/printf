/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:02:58 by skaur             #+#    #+#             */
/*   Updated: 2022/11/17 10:51:01 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_u_nbr(unsigned int nb)
{
	int	size_u_nbr;

	size_u_nbr = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		size_u_nbr++;
	}
	return (size_u_nbr);
}

int	ft_put_u_nbr(unsigned int nb)
{
	int	count;

	if (nb == 0)
		count = 1;
	else
		count = ft_count_u_nbr(nb);
	if (nb > 9)
		ft_put_u_nbr(nb / 10);
	nb = nb % 10 + '0';
	write(1, &nb, 1);
	return (count);
}
