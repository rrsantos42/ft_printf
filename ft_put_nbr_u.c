/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 06:04:39 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/19 03:52:12 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_put_nmr_u(unsigned int nbr)
{
	unsigned int num;
	int i;
	
	i = 0;
	num = nbr;
	if (num >= 10)
	{
		ft_put_nmr_u(num / 10);
		ft_put_nmr_u(num % 10);
	}
	else
	{
		ft_putchar(num + '0');
		i++;
	}
	return(i);
}
