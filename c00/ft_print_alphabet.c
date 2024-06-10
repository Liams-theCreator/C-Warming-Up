#include "main.h"

void ft_print_alphabet(void)
{
    int firstletter = 'a';

    while(firstletter <= 'z')
    {
        ft_putchar(firstletter);

        firstletter++;
    }
}