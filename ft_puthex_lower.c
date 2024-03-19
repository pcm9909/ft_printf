/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:07:07 by chunpark          #+#    #+#             */
/*   Updated: 2024/03/18 18:38:49 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex_lower(unsigned int n)
{
    int count;
    char *hex;

    count = 0;
    hex = "0123456789abcdef";
    if (n >= 16)
    {
        count += ft_puthex_lower(n / 16);
        count += ft_putchar(hex[n % 16]);
    }
    else
        count += ft_putchar(hex[n % 16]);
    return (count);
}
