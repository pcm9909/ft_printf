/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:05:56 by chunpark          #+#    #+#             */
/*   Updated: 2024/03/18 17:06:15 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putui(unsigned int n)
{
    int count;

    count = 0;
    if (n > 9)
    {
        count += ft_putui(n / 10);
        count += ft_putchar(n % 10 + '0');
    }
    else
        count += ft_putchar(n + '0');
    return (count);
}
