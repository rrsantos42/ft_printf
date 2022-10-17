/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 02:24:53 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/17 21:08:15 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(size_t nbr, char *str, int counter, int ox)
{
	int	bl;

	bl = 16;
	if (!nbr)
		return (ft_putstr("(nil)"));
	if (!ox)
		write(1, "0x", 2);
	if (nbr >= (size_t)bl)
		counter = ft_put_pointer(nbr / bl, str, counter, 1);
	counter += ft_putchar(str[nbr % bl]);
	return (counter);
}
