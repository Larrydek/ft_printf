
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:36:08 by jde-clee          #+#    #+#             */
/*   Updated: 2023/09/19 23:36:09 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	char	s[2];
	long	num;

	num = n;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 0)
	{
		if (n == 0)
			write(1, "0", 1);
		else
		{
			s[0] = (num % 10) + 48;
			num = num / 10;
			if (num > 0)
				ft_putnbr(num);
			write(1, &s[0], 1);
		}
	}
}

int	*ft_print_num(int num, int *len)
{
	if (num == 0)
		(*len)++;
	*len += ft_int_len(num);
	ft_putnbr(num);
	return (len);
}