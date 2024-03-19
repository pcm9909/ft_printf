/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:06:47 by chunpark          #+#    #+#             */
/*   Updated: 2024/03/18 18:10:12 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_convert_addr(unsigned long long n)
{
    int count;
    char *hex;

    count = 0;
    hex = "0123456789abcdef";
    if (n >= 16)
    {
        count += ft_convert_addr(n / 16);
        count += ft_putchar(hex[n % 16]);
    }
    else
        count += ft_putchar(hex[n % 16]);
    return (count);
}

int ft_putaddr(void *addr)
{
	if (!addr)
		return (ft_putstr("(nil)"));
    int count;
    unsigned long long n;

    count = 0;
    n = (unsigned long long)addr;
    count += ft_putstr("0x");
    count += ft_convert_addr(n);

    return (count);
}
