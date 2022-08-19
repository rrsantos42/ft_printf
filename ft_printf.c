/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:03:12 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/19 03:00:28 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printcheck(char c, va_list list)
{
	if (c == 'c')
		return(ft_putchar(va_arg(list, int)));
	if (c == 's')
		return(ft_putstr(va_arg(list, char*)));
	if (c == 'p')
	{
		ft_putstr("0x");
		return(ft_put_pointer(va_arg(list , unsigned long), "0123456789abcdef"));
	}
	if (c == 'd' || c == 'i')
		return(ft_putnbr_base(va_arg(list, int), "0123456789"));
	if (c == 'u')
		return(ft_put_nmr_u(va_arg(list, unsigned int)));
	if (c == 'x')
		return(ft_putnbr_base(va_arg(list, unsigned int), "0123456789abcdef"));
	if (c == 'X')
		return(ft_putnbr_base)(va_arg(list, unsigned int), "0123456789ABCDEF");
	if (c == '%')
		return(putchar('%'));
	return(0);
}

int	ft_printf(const char*str, ...)
{
	va_list list;
	int i;
	int nb;
	
	nb = 0;
	i = -1;
	va_start(list, str);
	while (str[++i])
	{
		if(str[i] == '%')
			nb += ft_printcheck(str[i + 1], list);
		else
			nb += ft_putchar(str[i]);
	}
	va_end(list);
	return(nb);
}

int	main(void)
{
	// int i = -22;
	// char str[4] = "abcd";
	
	ft_printf("ola tudo bem");
}