#include "main.h"

void ft_print_reverse_alphabet(void)
{
    int firstletter = 'z';

    while (firstletter >= 'a')
    {
        ft_putchar(firstletter);

        firstletter--;
    }
    
}