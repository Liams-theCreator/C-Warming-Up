#include "main.h"

void ft_print_comb(void)
{
    int i = 0, j = 0, k = 0;

    while (i <= 7)
    {
        j = i + 1;
        while (j <= 8)
        {
            k = j + 1;
            while (k <= 9)
            {
                ft_putchar(i + 48);
                ft_putchar(j + 48);
                ft_putchar(k + 48);
                if (i != 7 || j != 8 || k != 9)
                {                
                ft_putchar(',');
                ft_putchar(' ');
                }
                k++;
            }
            j++;
        }
        i++;
    }
    ft_putchar('\n');
}