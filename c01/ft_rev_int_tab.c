#include "main.h"

void ft_rev_int_tab(int *tab, int size)
{
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end)
    {
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        
        start++;
        end--;
    }
    
}