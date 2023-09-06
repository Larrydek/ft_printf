/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:09:44 by jde-clee          #+#    #+#             */
/*   Updated: 2023/09/05 16:49:21 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"



int	ft_printf(char const *type, ...)
{
    va_list args;
    va_start(args, type);
    int i;

    i = 0;
    while(*type)
    {
        if(*type == '%')
        {
            type++;
            if (*type == 'c')
                write(1, args[i], 1);
            else if (*type == 's')
            {
                write(1, args[i], ft_strlen(args[i]));
            }
            else if (*type == 'p')
            {
                write(1, &args[i], ft_strlen(args[i]))
            }
            else if (*type == 'd')
            {
                ft_putnbr_fd(args[i], 1);
            }
            else if (*type == 'u')
            {
                if (args[i] < 0)
                    args[i] = args[i] * -1;
                write(1, args[i],)
            }
            else if (*type == 'x')
            {
                
            }
            else if (*type == 'X')
            {
                
            }
            else if (*type == '%')
            {
                
            }
        }
        
        type++;
    }
    va_end(args);
    
    return (1);
}

int main()
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