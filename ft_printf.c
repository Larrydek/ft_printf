
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:35:43 by jde-clee          #+#    #+#             */
/*   Updated: 2023/09/19 23:35:44 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_format(char const *type, va_list args, int *len)
{
	if (*type == 'c')
		ft_char(va_arg(args, int), len);
	else if (*type == 's')
		ft_string(va_arg(args, char *), len);
	//else if (*type == 'p')
	//	ft_punt();
	else if (*type == 'd' || *type == 'i')
		ft_print_num(va_arg(args, int), len);
	else if (*type == 'u')
		ft_print_uint(va_arg(args, int), len);
	else if (*type == 'x' || *type == 'X')
		ft_print_hex(va_arg(args, unsigned int), *type, len);
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
			write(1, type, 1);
			type++;
			len++;
		}
	}
	va_end (args);
	
	return (len);
}
/* int main()
{
    int i;
    char    *texto;
    i = 0;
    texto = "hola\0";
    // i = ft_printf(" funcion %c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%\n ", 'a', texto, texto, 0, 5, 4, 27, 27);
    // ft_printf("%d\n", i);
    // ft_printf("%d\n", -2147483648);
    // ft_printf("%d\n", 2147483647);
    // i = printf(" funcion %c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%", 'a', texto, texto, 0, 5, 4, 27, 27);
    // printf("%d\n", i);
    // printf("%ld\n", -2147483648);
    // printf("%d", 2147483647);
	printf(" printf real \n");
	printf(" funcion %c\n%s\n%d\n%i\n%u\n%x\n%X\n%%\n ", 'a', texto, 0, 5, 4, 27, 27);
	ft_printf(" funcion %c\n%s\n%d\n\n%u\n%x\n%X\n%%\n ", 'a', texto, 0, 4, 27, 27);
    return(0);
} */