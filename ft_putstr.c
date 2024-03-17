#include "ft_printf.h"

int ft_putstr(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        count += ft_putchar(*str);
        str++;
    }
    return (count);
}