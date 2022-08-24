/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 02:24:53 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/19 04:28:44 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


unsigned long ft_put_pointer(unsigned long nb, char *str)
{
	int nbr;
	nbr = 2;
	if (nb >= (unsigned long)ft_strlen(str))
		nbr += ft_put_pointer((nb / ft_strlen(str)), str);
	nbr += ft_putchar(str[nb % ft_strlen(str)]);
	return(nbr);
	
}