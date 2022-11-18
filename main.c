/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:24:01 by skaur             #+#    #+#             */
/*   Updated: 2022/11/17 12:28:27 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include<stdio.h>
#include<limits.h>

int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = ft_printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	ft_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	ft_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	ft_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	ft_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	ft_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	ft_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = ft_printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	ft_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	
	len = ft_printf("%b\n", 98);
	ft_printf("Len:[%d]\n", len);
	

	
	printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	ft_printf(" %p %p \n\n", ULONG_MAX, -ULONG_MAX);
	
	printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	ft_printf(" %p %p \n ", ULONG_MAX, -ULONG_MAX);
	
	return (0);
}
