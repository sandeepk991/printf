/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:44:11 by skaur             #+#    #+#             */
/*   Updated: 2022/11/17 11:02:27 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_put_nbr(int nb);
int	ft_put_u_nbr(unsigned int nb);
int	ft_hexadecimal(unsigned int hexnbr, char c);
int	ft_pointer(unsigned long nb);
int	ft_printf(const char *str, ...);

#endif
