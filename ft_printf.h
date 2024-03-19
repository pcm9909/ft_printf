/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:06:41 by chunpark          #+#    #+#             */
/*   Updated: 2024/03/19 19:04:44 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_puthex_lower(unsigned int n);
int	ft_puthex_upper(unsigned int n);
int	ft_putui(unsigned int n);
int	ft_convert_addr(unsigned long long n);
int	ft_putaddr(void *addr);
int	ft_handle_specifier(const char **format, va_list args);
int	ft_vprintf(const char *format, va_list args);
int	ft_printf(const char *format, ...);

#endif
