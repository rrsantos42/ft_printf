/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 06:04:39 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/18 06:13:43 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int		ft_nb_len(int nbr)
{
	int x;
	if (nbr < 0)
		x++;
	while(nbr)
	{
		nbr /= 10;
		x++;
	}
	return(x);
}

int	ft_put_nmr_u(unsigned int nbr)
{
	unsigned int num;

	num = nbr;
		if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
	return(ft_nb_len(nbr));
}
