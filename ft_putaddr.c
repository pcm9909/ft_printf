#include "ft_printf.h"

int ft_convert_addr(unsigned long long n)
{
    int count;
    char *hex;

    count = 0;
    hex = "0123456789abcdef";
    if (n > 16)
    {
        count += ft_puthex_lower(n / 16);
        count += ft_putchar(hex[n % 16]);
    }
    else
        count += ft_putchar(hex[n % 16]);
    return (count);
}

int ft_putaddr(void *addr)
{
    int count;
    unsigned long long n;

    count = 0;
    n = (unsigned long long)addr;
    count += ft_putstr("0x");
    count += ft_convert_addr(n);

    return (count);
}
