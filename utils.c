/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:25:02 by jde-clee          #+#    #+#             */
/*   Updated: 2023/06/14 19:45:05 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != 0)
		i++;
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	s[2];
	long	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num >= 0)
	{
		if (n == 0)
			write(fd, "0", 1);
		else
		{
			s[0] = (num % 10) + 48;
			num = num / 10;
			if (num > 0)
				ft_putnbr_fd(num, fd);
			write(fd, &s[0], 1);
		}
	}
}