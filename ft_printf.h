/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:29:10 by jde-clee          #+#    #+#             */
/*   Updated: 2023/09/20 19:46:18 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *type, ...);
void    ft_format(char const *type, va_list args, int *len);

size_t	ft_strlen(const char *str);
void    ft_hex_len(unsigned int n, int *len);
size_t	ft_int_len(int n);

void	ft_putnbr(int n);
void    ft_char(char c, int *len);
void    ft_string(char *s, int *len);
//void    *ft_punt(unsigned long int p, char *s, int *len);
void    ft_float(int n, int *len);

void	ft_hex(unsigned int n, const char format, int *len);
int     *ft_print_hex(unsigned int nbr, const char format, int *len);

void	ft_putnbr(int n);
int     *ft_print_num(int num, int *len);

void	ft_unsigned(unsigned int n, int *len);
int     *ft_print_uint(unsigned int num, int *len);


#endif