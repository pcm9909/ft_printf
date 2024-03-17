#include "ft_printf.h"

int ft_puthex_upper(int n)
{
    int count;
    char *hex;

    count = 0;
    hex = "0123456789ABCDEF";
    if (n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }
    if (n > 16)
    {
        count += ft_puthex_upper(n / 16);
        count += ft_putchar(hex[n % 16]);
    }
    else
        count += ft_putchar(hex[n % 16]);
    return (count);
}