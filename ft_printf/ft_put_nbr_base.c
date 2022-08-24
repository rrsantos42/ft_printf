/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 05:42:01 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/19 03:50:57 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

 static	int	vrbase(char *base)
{
	long long	i;
	long long	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		if (base[0] == '\0' || base[1] == '\0')
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{	
			if (base[i] == base[j])
				return (0);
			j++;
		}	
		i++;
	}
	return (1);
}
static	int		ft_nb_len(int nbr)
{
	int x;
	
	x = 0;
	if (nbr < 0)
		x++;
	while(nbr)
	{
		nbr /= 10;
		x++;
	}
	return(x);
}
int	ft_putnbr_base(int nbr, char *base)
{
	long long		len;
	unsigned int	num;

	len = 0;
	if (vrbase(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			num = -nbr;
		}
		else
		num = nbr;
		while (base[len])
			len++;
		if (num / len > 0)
		{
			ft_putnbr_base(num / len, base);
		}
		ft_putchar(base[num % len]);
	}
	return(ft_nb_len(nbr));
}