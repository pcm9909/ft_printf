/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:05:19 by chunpark          #+#    #+#             */
/*   Updated: 2024/03/18 17:05:22 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
    int count;

    count = 0;

	if (n == -2147483648)
		return (ft_putstr("-2147483648"));

    if (n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }
    if (n > 9)
    {
        count += ft_putnbr(n / 10);
        count += ft_putchar(n % 10 + '0');
    }
    else
        count += ft_putchar(n + '0');
    return (count);
}
