/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 05:42:01 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/17 21:13:48 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int nbr, char *base, int bl)
{
	int	counter;

	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	counter = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
		counter++;
	}
	if (nbr >= (int)ft_strlen(base))
		counter += ft_putnbr_base(nbr / bl, base, bl);
	counter += ft_putchar(base[nbr % bl]);
	return (counter);
}
