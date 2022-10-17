/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 04:51:57 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/17 21:16:43 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[++i])
		write(1, &str[i], 1);
	return (i);
}
