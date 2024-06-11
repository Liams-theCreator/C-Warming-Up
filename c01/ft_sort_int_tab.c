#include "main.h"

void ft_sort_int_tab(int *tab, int size)
{
    int i, j , temp;

    for(i = 0; i < size ; i++)
    {
        for( j = i + 1; j < size ; j++)
        {
            if(tab[j] < tab[i])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}