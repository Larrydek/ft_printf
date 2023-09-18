/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:09:44 by jde-clee          #+#    #+#             */
/*   Updated: 2023/09/18 20:52:11 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format(char const *type, char args, int *len)
{
	if (*type == 'c')
		ft_char(va_arg(args, int), len);
	else if (*type == 's')
		ft_string(va_arg(args, char *), len);
	else if (*type == 'p')
		ft_punt();
	else if (*type == 'd')
		ft_putnbr_fd();
	else if (*type == 'u')
		ft_putnbr_fd();
	else if (*type == 'x')
		ft_hex();
	else if (*type == 'X')
		ft_hex();
	else if (*type == '%')
		write(1, "%", 1);
}

int	ft_printf(char const *type, ...)
{
	va_list	args;
	
	int         len;
	va_start (args, type);

	len = 0;
	while(*type)
	{
		if(*type == '%')
		{
			type++;
			ft_format(type, args, &len);
			type++;
			
		}
		else
		{
			write(1, &type, 1);
			type++;
			len++;
		}
	}
	va_end (args);
	
	return (len);
}

int	main()
{
	int entero = 42;
	unsigned int entero_sin_signo = 12345;
	unsigned int hexadecimal = 0xABCD;
	char caracter = 'A';
	char* cadena = "Hola, mundo!";
	void* puntero = &entero;

	ft_printf("Entero: %d, Sin signo: %u, Hexadecimal: %x, Caracter: %c, Cadena: %s, Puntero: %p\n", entero, entero_sin_signo, hexadecimal, caracter, cadena, puntero);
	return (0);
}