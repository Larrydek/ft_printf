/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:12:27 by jde-clee          #+#    #+#             */
/*   Updated: 2023/09/20 19:43:57 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_string(char *s, int *len)
{
	if (!s)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (*s)
	{
		write(1, s, 1);
		s++;
		(*len)++;
	}
}

/*
void	*ft_punt(unsigned long int p, char *s, int *len)
{
    write(2, "0x", 1);
	
}
*/
void	ft_float(int n, int *len)
{
	*len += ft_int_len(n);
	ft_putnbr(n);
}