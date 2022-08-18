/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfcheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 04:39:24 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/18 06:14:09 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_printcheck(char c)
{
	if (c == 'c')
		return(ft_putchar());
	if (c = 's')
		return(ft_putstr());
	if (c == 'p')
		return();
	if (c == 'd')
		return(ft_put_nbr_base(,"0123456789"));
	if (c == 'i')
		return();
	if (c == 'u')
		return(ft_put_nmr_u());
	if (c == 'x')
		return();
	if (c == 'X')
		return();
	if (c == '%')
		return();
}
