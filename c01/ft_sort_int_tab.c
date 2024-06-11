#include "main.h"

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0, j , temp;

    while(i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[j] < tab[i])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}