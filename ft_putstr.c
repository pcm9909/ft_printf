/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:05:43 by chunpark          #+#    #+#             */
/*   Updated: 2024/03/18 17:11:11 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
    int count;

    count = 0;
    while (*str)
    {
        count += ft_putchar(*str);
        str++;
    }
    return (count);
}
