/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:09:44 by jde-clee          #+#    #+#             */
/*   Updated: 2023/09/13 19:51:43 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_format(char const *type, char args, int len)
{
    if (*type == 'c')
    {
        write(1, type, 1);
    }
    else if (*type == 's')
    {
    }
    else if (*type == 'p')
    {
    }
    else if (*type == 'd')
    {
    }
    else if (*type == 'u')
    {
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

int ft_printf(char const *type, ...)
{
    va_list args;
    
    va_start(args, type);
    int len;

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
    va_end(args);
    
    return (len);
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