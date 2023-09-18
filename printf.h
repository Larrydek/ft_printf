/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:29:10 by jde-clee          #+#    #+#             */
/*   Updated: 2023/09/18 22:54:14 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *type, ...);
size_t	ft_strlen(const char *str);
void	ft_putnbr_fd(int n);
size_t	ft_int_len(int n);

void    ft_char(char c, int *len);
void    ft_string(char *s, int *len);
void    *ft_punt(unsigned long int p, char *s, int *len);
void    ft_float(int n, int *len);

#endif