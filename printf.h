/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:29:10 by jde-clee          #+#    #+#             */
/*   Updated: 2023/09/13 23:15:36 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int		ft_printf(char const *x, ...);
size_t	ft_strlen(const char *str);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_int_len(int n);

#endif