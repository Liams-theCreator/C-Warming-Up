#include "main.h"

int _abs(int a)
{
	if (a > 0)
		return a;
	return -a;
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putchar(( _abs(nb) / 10) + 48);
    }
}