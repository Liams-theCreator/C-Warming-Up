#include "main.h"

void ft_print_comb2(void)
{
    int i = 0, j = 0;

    while(i <= 98)
    {
        j = i + 1;
        while( j <= 99)
        {
            ft_putchar((i / 10) + 48);
            ft_putchar((i % 10) + 48);
            ft_putchar(' ');
            ft_putchar((j / 10) + 48);
            ft_putchar((j % 10) + 48);
            
            if( i != 98 || j != 99)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            j++;
        }
        i++;
    }
    ft_putchar('\n');
}