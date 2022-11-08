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

#include<stdarg.h>

int ft_printf(const char *, ...)
{
	va_list	ap;
	int	i;
	int	j;

	i = 0;
	i = 0;
	va_start(ap, str);
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
			{
				va_arg(ap, int);
			}
			else if (str[i + 1] == 's')
			{
				
			}
			else if (str[i + 1] == 'p')
			{
			}
			else if (str[i + i] == 'd' || str[i + i] == 'u' || str[i + i] == 'u')
			{
			}
			else if (str[i + 1] == 'x' || str[i + i] == 'X')
			{

			}
			else
			{

			}
		}
	}
	va_end(ap);
}
