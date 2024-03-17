#include "ft_printf.h"

int ft_putnbr(int n)
{
    int count;

    count = 0;
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