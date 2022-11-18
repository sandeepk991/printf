/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:44:11 by skaur             #+#    #+#             */
/*   Updated: 2022/11/17 11:01:02 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_conditions(char c, va_list ap)
{
	int	counter;

	counter = 0;
	if (c == '%')
		counter = write(1, "%", 1);
	if (c == 'c')
		counter = ft_putchar(va_arg(ap, int));
	if (c == 's')
		counter = ft_putstr(va_arg(ap, char *));
	if (c == 'i' || c == 'd')
		counter = ft_put_nbr(va_arg(ap, int));
	if (c == 'u')
		counter = ft_put_u_nbr(va_arg(ap, unsigned int));
	if (c == 'x' || c == 'X')
		counter = ft_hexadecimal((unsigned long)va_arg(ap, unsigned int), c);
	if (c == 'p')
		counter = ft_pointer((unsigned long)(va_arg(ap, void *)));
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		k;
	int		count;

	va_start(ap, str);
	count = 0;
	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_check_conditions(str[i + 1], ap);
			i++;
			k++;
		}
		else
			write(1, &str[i], 1);
		count++;
		i++;
	}
	va_end(ap);
	return (count - k);
}
