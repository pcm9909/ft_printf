/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:06:35 by chunpark          #+#    #+#             */
/*   Updated: 2024/03/19 19:04:12 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_specifier(const char **format, va_list args)
{
	int	count;

	count = 0;
	(*format)++;
	if (**format == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (**format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (**format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (**format == '%')
		count += ft_putchar('%');
	else if (**format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (**format == 'u')
		count += ft_putui(va_arg(args, unsigned int));
	else if (**format == 'p')
		count += ft_putaddr(va_arg(args, void *));
	else if (**format == 'X')
		count += ft_puthex_upper(va_arg(args, unsigned int));
	else if (**format == 'x')
		count += ft_puthex_lower(va_arg(args, unsigned int));
	return (count);
}

int	ft_vprintf(const char *format, va_list args)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += ft_handle_specifier(&format, args);
		else
			count += ft_putchar(*format);
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;

	va_start(args, format);
	count = ft_vprintf(format, args);
	va_end(args);
	return (count);
}
