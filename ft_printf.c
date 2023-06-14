/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:09:44 by jde-clee          #+#    #+#             */
/*   Updated: 2023/06/14 19:25:18 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"



int	ft_printf(char const *type, ...)
{
    va_list args;
    va_start(args, type);

    if(type[0] == '%')
    {
        if (type[1] == 'c')
            write(1, args, 1)
    }

    
    return (1);
}
