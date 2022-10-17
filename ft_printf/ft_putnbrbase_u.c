/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 06:19:47 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/17 21:15:27 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase_u(unsigned int nbr, char *base, int bl)
{
	unsigned int	counter;

	counter = 0;
	if (nbr / bl > 0)
		counter = ft_putnbrbase_u(nbr / bl, base, bl);
	counter += ft_putchar(base[nbr % bl]);
	return (counter);
}
