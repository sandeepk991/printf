/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:44:11 by skaur             #+#    #+#             */
/*   Updated: 2022/11/08 15:28:54 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_conditions(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter = ft_putchar(va_arg(args, int));
	if (c == 's')
		counter = ft_putstr(va_arg(args, char *));
	if (c == '%')
		counter = write(1, "%", 1);
	if (c == 'i' || c == 'd')
		counter = ft_put_nbr(va_arg(args, int));
	if (c == 'u')
		counter = ft_put_u_nbr(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		counter = ft_put_hexadecimal(va_arg(args, unsigned int), c);
	if (c == 'p')
		counter = ft_put_pointer(va_arg(args, uintptr_t));
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		k;
	int		count;

	va_start(args, str);
	count = 0;
	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_check_conditions(str[i + 1], args);
			i++;
			k++;
		}
		else
			write(1, &str[i], 1);
		count++;
		i++;
	}
	va_end(args);
	return (count - k);
}
