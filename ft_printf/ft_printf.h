/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:43:20 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/17 21:16:01 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_putchar(char c);
int				ft_strlen(char *str);
int				ft_putstr(char *str);
int				ft_putnbr_base(int nbr, char *base, int bl);
int				ft_printf(const char*str, ...);
int				ft_put_pointer(size_t nbr, char *str, int counter, int ox);
int				ft_putnbrbase_u(unsigned int nbr, char *base, int bl);

#endif
