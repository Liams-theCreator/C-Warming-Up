#include "main.h"

int ft_iterative_factorial(int nb)
{
    int i = 1, result = nb;
    while(i < nb)
    {
        result *= i;
        i++;
    }
    return result;
}
