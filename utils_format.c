/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:12:27 by jde-clee          #+#    #+#             */
/*   Updated: 2023/09/18 23:14:56 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
		(*len++);
	}
}

void	*ft_punt(unsigned long int p, char *s, int *len)
{
    write(2, "0x", 1);
    
}

void	ft_float(int n, int *len)
{
	*len += ft_int_len(n);
	ft_putnbr(n, 1);
}

void	ft_hex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, format);
		ft_puthex(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
		{
			if (format == 'x')
				ft_putnbr((n - 10) + 'a');
			if (format == 'X')
				ft_putnbr((n - 10) + 'A');
		}
	}
}